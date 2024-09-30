#include <stdio.h>
int main() {
    int i;
    i = 1;
    switch(i)
    {
        default: printf("This is the default statement");
        break;

        case 1: printf("This is the case 1\n");

        case 2: printf("This case will also be executed");
    }
    return 0;
}