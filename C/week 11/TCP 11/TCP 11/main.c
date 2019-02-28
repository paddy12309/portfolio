//
//  main.c
//  TCP 11
//
//  Created by paddy on 07/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int counter;
    char temp;
    char array1[8];
    char array2[8];
    
    
    counter = 0;
    
    while (counter < 8) {
        printf("enter a value\n");
        scanf("%c",&array1[counter]);
        counter++;
    }
   printf("\n");

    counter = 0;
    while (counter < 8) {
        printf("enter a value\n");
        scanf("%c",&array2[counter]);
        counter++;
    }

        counter=0;
    
    printf("\n\n");
    while (counter < 8) {
        temp=array1[counter];
        array1[counter]=array2[counter];
        array2[counter]=temp;
        counter++;
    }
    
    counter = 0;
    
    while (counter < 8) {
        printf("array1 %c\n",array1[counter]);
        
        counter++;
        
    }
    printf("\n\n");
    counter = 0;
    while (counter < 8) {
        printf("array2 %c\n", array2[counter]);
        counter++;
    }

    
    return 0;
}
