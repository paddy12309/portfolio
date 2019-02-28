//
//  main.c
//  TCP 12 task 3
//
//  Created by paddy on 14/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    char abc[5];
    char def[5];
    int num;
    int count;
    
    count=0;
    
    printf("enter the first string\n");
    scanf("%s", &abc);
    printf("\n enter the second string");
    scanf("%s", &def);
    
    printf("\n");
    
    while (abc[count]!= '\0') {
        if (abc[count]==def[count]) {
            num++;
        }
        count++;
    
        }
   
        if (count==num) {
            printf("same\n");
        }
        else {
            printf("different\n");
        }
    
    
    return 0;

}
