#include<stdio.h>
void main() //main running 
    { 
        int x; int y;
        x = 9;
        y = 10;
        calculate(x , y); // method call
    }

void calculate(int xx, int yy) //basic function
    {
        int z = yy + xx;
        printf("value is : %d\n", z); // print out %d means next argument and print as an int
    }
