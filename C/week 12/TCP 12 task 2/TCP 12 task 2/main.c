//
//  main.c
//  TCP 12 task 2
//
//  Created by paddy on 14/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char again[] = {'g','n','e','d','\0'};
    int count;
    
    count =0;
    
    while (again[count] != '\0') {
        count++;
    }
    count--;
    while (count >= 0) {
        printf("%c\n", again[count]);
        count--;
    }
    
    
    return 0;
}
