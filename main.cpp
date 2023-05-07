#include "mbed.h"

// No multiple lines printed as the program returs to the min loop until the next interupt is pressed.
// To Improve output, a low-pass filter could be used to improve the input and remove noise. 

InterruptIn up(p15);
InterruptIn down(p12);
InterruptIn left(p13);
InterruptIn right(p16);

void up_pressed() {
    printf("up\n");
}

void down_pressed() {
    printf("down\n");
}

void left_pressed() {
    printf("left\n");
}

void right_pressed() {
    printf("right\n");
}

int main() {
    up.rise(&up_pressed);
    down.rise(&down_pressed);
    left.rise(&left_pressed);
    right.rise(&right_pressed);

    while(1) {
    }
}
