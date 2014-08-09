#include "light.h"
#include "switch.h"
#include "flip_down_cmd.h"
#include "flip_up_cmd.h"

int main(int argc, char **argv) {
    Switch invoker;
    Light light;
    FlipDownCommand flipDown(&light);
    FlipUpCommand flipUp(&light);
    invoker.store_execute(&flipDown);
    invoker.store_execute(&flipDown);
    invoker.store_execute(&flipDown);
    invoker.store_execute(&flipUp);
    return 0;
}
