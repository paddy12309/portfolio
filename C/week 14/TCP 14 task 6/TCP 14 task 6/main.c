//
//  main.c
//  TCP 14 task 6
//
//  Created by paddy on 03/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int area;
int volume;
int main(int argc, const char * argv[]) {
    
    int radi;
    int answer1;
    int answer2;
    
    printf("enter the radius;\n");
    scanf("%d", &radi);
    
    answer1 = (radi*radi)*M_PI;
    
    answer2 = 4/3 * M_PI * (radi*3);
    
    printf("%d\n", answer1);
    printf("%d\n", answer2);
    
    
    
    return 0;
}/*

int area;
{
    int radi, pi;
    
    return
    
}

int volume;
{
    int radi, pi;
    
    
    
    
}*/
