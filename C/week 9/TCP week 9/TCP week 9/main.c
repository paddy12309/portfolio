//
//  main.c
//  TCP week 9
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
    
    a=0;
    
    printf("enter the number of rows\n");
    scanf("%d", &c);
    printf("enter the number of columns\n");
    scanf("%d", &d);
    
    
    while ( a < c ) {
        
        
        while (b <d) {
            printf("* ");
            b++;
        
        }
        printf("\n");
        a++;
        b=0;
    }
    printf("\n");
    return 0;
}
