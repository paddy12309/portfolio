//
//  main.c
//  task 3 week 9
//
//  Created by paddy on 07/02/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    int b;
    int c;
    int d;
    char e;
    
    a=0;
    b=4;
    c=0;
    d=1;
    
    printf("enter the number of rows\n");
    scanf("%d", &b);
    
    
    
    
    
    
    
    while (a<b) {
       
        while (c<d) {
            printf("*");
            c++;
        }
        
        printf("\n");
        a++;
        d++;
        c=0;
    }
   
    printf("\n");
    
    
    return 0;
}
