#ifndef _BOARD_H_
#define _BOARD_H_
#include <iostream>
#include <set>

typedef uint uint;

class Board {
    public:
        bool solve() {
            uint row, col;
            if(!find_unassigned_square(&row, &col)) {
                return true;
            }
            for(uint num = 1; num <= size; ++num) {
                if(is_safe(row, col, num)) {
                    set_square(row, col, num);
                    if(solve()) {
                        return true;
                    }
                    set_square(row, col, 0);
                }
            }
            return false;
        }

        bool is_safe(uint row, uint col, uint val) {
            for(uint c = 0; c < size; ++c) {
                if(get_square(row, c) == val) return false;
            }
            for(uint r = 0; r < size; ++r) {
                if(get_square(r, col) == val) return false;
            }
            return true;
        }

        bool find_unassigned_square(uint *row, uint *col) {
            for(uint r = 0; r < size; ++r) {
                for(uint c = 0; c < size; ++c) {
                    if(get_square(r,c) == 0) {
                        *row = r;
                        *col = c;
                        return true;
                    }
                }
            }
            return false;
        }

        bool check_row(uint row) {
            uint sum = 0;
            std::set<uint> included;
            for(uint col = 0; col < size; ++col) {
                uint val = get_square(row, col);
                if(included.find(val) == included.end()) {
                    included.insert(val);
                    sum += val;
                } else {
                    return false;
                }
            }
            return (sum == size*(size+1)/2);
        }

        bool check_col(uint col) {
            uint sum = 0;
            std::set<uint> included;
            for(uint row = 0; row < size; ++row) {
                uint val = get_square(row, col);
                if(included.find(val) == included.end()) {
                    included.insert(val);
                    sum += val;
                } else {
                    return false;
                }
            }
            return (sum == size*(size+1)/2);
        }

        bool check_sol() {
            for(uint row = 0; row < size; ++row) {
                if(check_row(row) == false || check_col(row) == false)
                    return false;
            }
            return true;
        }

        void set_square(uint row, uint col, uint val) {
            board[row][col] = val;
        }
        uint get_square(uint row, uint col) {
            return board[row][col];
        }

        void print() {
            for(uint row = 0; row < size; ++row) {
                for(uint col = 0; col < size; ++col) {
                    std::cout << board[row][col] << " ";
                }
                std::cout << "\n";
            }
        }

        Board(uint size) {
            this->size = size;
            board = new uint*[size];
            for(uint row = 0; row < size; ++row) {
                board[row] = new uint[size];
            }
        }

        ~Board() {
            for(uint row = 0; row < size; ++row) {
                delete[] board[row];
            }
            delete[] board;
        }

    private:
        uint **board;
        uint size;
};
#endif
