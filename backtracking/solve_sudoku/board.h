#ifndef _BOARD_H_
#define _BOARD_H_
#include <iostream>

class Board {
    public:
        bool solve() {
            int row, col;
            if(!find_unassigned_square(&row, &col)) {
                return true;
            }
            //std::cout << row << "," << col << "=> ";
            for(unsigned int num = 1; num <= size; ++num) {
                if(is_safe(row, col, num)) {
                    set_square(row, col, num);
                    //std::cout << num << std::endl;
                    if(solve()) {
                        return true;
                    }
                    set_square(row, col, 0);
                }
            }
            return false;
        }

        bool is_safe(int row, int col, int val) {
            for(unsigned int c = 0; c < size; ++c) {
                if(get_square(row, c) == val) return false;
            }
            for(unsigned int r = 0; r < size; ++r) {
                if(get_square(r, col) == val) return false;
            }
            return true;
        }

        bool find_unassigned_square(int *row, int *col) {
            for(unsigned int r = 0; r < size; ++r) {
                for(unsigned int c = 0; c < size; ++c) {
                    if(get_square(r,c) == 0) {
                        *row = r;
                        *col = c;
                        return true;
                    }
                }
            }
            return false;
        }

        void set_square(unsigned int row, unsigned int col, int val) {
            board[row][col] = val;
        }
        unsigned int get_square(unsigned int row, unsigned int col) {
            return board[row][col];
        }

        void print() {
            for(unsigned int row = 0; row < size; ++row) {
                for(unsigned int col = 0; col < size; ++col) {
                    std::cout << board[row][col] << " ";
                }
                std::cout << "\n";
            }
        }

        Board(unsigned int size) {
            this->size = size;
            board = new unsigned int*[size];
            for(unsigned int row = 0; row < size; ++row) {
                board[row] = new unsigned int[size];
            }
        }

        ~Board() {
            for(unsigned int row = 0; row < size; ++row) {
                delete board[row];
            }
            delete board;
        }

    private:
        unsigned int **board;
        unsigned int size;
};
#endif
