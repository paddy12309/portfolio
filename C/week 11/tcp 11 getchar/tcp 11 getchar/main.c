//
//  main.c
//  tcp 11 getchar
//
//  Created by paddy on 20/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int count;
    char temp;
    char array1[8];
    char array2[8];
    
    count=0;
    
    printf("enter the characters for array 1\n");
    while (count < 8) {
        array1[count] = getchar();
        getchar();
        count++;
    }
    printf("enter the characters for array 2\n");
    count = 0;
    while (count<8) {
        array2[count] = getchar();
        getchar();
        count++;
    }
    
    count=0;
    
    while (count<8) {
        temp = array2[count];
        array2[count] = array1[count];
        array1[count]=temp;
        count++;
    }
    count=0;
    printf("\n");
    
    while (array1[count] != '\0') {
        printf("%c\n", array1[count]);
        count++;
    }
    
    count = 0;
    
    while (array2[count] != '\0') {
        printf("%c\n", array2[count]);
        count++;
    }
    
           printf("\n\n\n\n\n\n");
    return 0;
}
