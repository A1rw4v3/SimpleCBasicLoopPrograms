#include<stdio.h>
int main() //main running 
    {                                  //main method needs to have same 
                                       //declaration type as any return statement method
        int x; int y; int result;
        x = 9;
        y = 10;
        
        result =  calculatewithReturn(x , y); // method call and put return into result
       printf("%d\n",result); //print result
    }

int calculatewithReturn(int xx, int yy) //basic function
    {
        int z = yy + xx; // add given slot yy and slot xx vars together
        return z; //return result
    }
