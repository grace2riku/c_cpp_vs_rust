#include <stdio.h>
#include <stdlib.h>

enum Shape {
    Circle,
    Triangle,
    Square
};

void print_shape(enum Shape shape) {
    switch (shape) {
        case Circle:    printf("shape is circle\n");      break;
        case Triangle:  printf("shape is triangle\n");    break;
        case Square:    printf("shape is square\n");      break;
    }
}

int main() 
{
    print_shape(Circle);
    print_shape(Triangle);
    print_shape(Square);
} 
