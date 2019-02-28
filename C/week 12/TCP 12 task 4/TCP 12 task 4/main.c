//
//  main.c
//  TCP 12 task 4
//
//  Created by paddy on 14/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char b[]="abc";
    char a[]="mnb";
    char temp;
    int count;
    
    count=0;
    
    while (count<4) {
        printf("%c \n", a[count]);
        count++;
    }
        count=0;
    
    while (count<4) {
        printf("%c \n", b[count]);
        count++;
    }
        count = 0;
    
    while (count<4 ) {
        
        temp = b[count];
        b[count]=a[count];
        a[count]=temp;
        
        count++;
    }
    count=0;
    
    while (a[count] != '\0') {
        printf("%c", a[count]);
        count++;
    }
    printf("\n");
    count=0;
    
    while (b[count] != '\0') {
        printf("%c", b[count]);
        count++;
    }
    printf("\n");
    
    return 0;
}
