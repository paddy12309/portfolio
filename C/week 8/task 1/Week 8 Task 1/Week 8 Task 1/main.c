//
//  main.c
//  Week 8 Task 1
//
//  Created by paddy on 24/01/2017.
//  Copyright © 2017 paddy. All rights reserved.
//
#include <math.h>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
int A;
int B;
int C;
int D;
float radius; /* radius */
int F; /* radius answer */
int G; /* length 1*/
int H; /* length 2*/
float I;
char input;
int J;
int K;
int L;



    
    
    
    printf("A-area and circumference of a circle\n");
    printf("B-aread of a rectangle\n");
    printf("C-volume of a sphere\n");
    printf("D-volume of a cuboid\n");
    
    scanf("%c", &input);
    
    if(input == 'A' || input == 'a')
    {
        printf("Please enter a radius\n");
        scanf("%f", &radius);
        float answer = 2*M_PI*radius;
        printf("the circumerfence of the circle is %f\n", answer);
        printf("the area of the circle is %d\n", M_PI*(radius*radius));
    }
    else if (input == 'B' || input == 'b')
    {
        printf("enter first length\n");
        scanf("%d", &G);
        printf("enter second length\n");
        scanf("%d", &H);
        printf("\n");
        printf("%d\n", H*G);
    
    }
    else if (input == 'C' || input == 'c')
    {
        printf("enter the radius of the sphere\n");
        scanf("%f", &I);
        //float answer = 4.0/3.0*M_PI8(I*I);
        printf("\n%f\n", 4.0/3.0 * M_PI* (I * I*I ));
    }
    
    else if (input == 'D' || input == 'd')
    {
        printf("please enter your values on consecutive lines\n");
        scanf("%d", &J);
        scanf("%d", &K);
        scanf("%d", &L);
        printf("%d\n", J*K*L);
    }
    else
    {
        printf("ERROR MOFO!\n");
        
    }
    return 0;
}
