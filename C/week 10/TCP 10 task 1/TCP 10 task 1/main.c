//
//  main.c
//  TCP 10 task 1
//
//  Created by paddy on 24/02/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    
        char c;
        int counter;
        
    {
        int na[6] = {2,7,4,5,1,6};
        /*print out the contents of the array*/
        printf("%d\n", na[0]);
        
        /*use a while loop to print out the contents of the array 1 location at a time*/
        counter = 0;
        while (counter < 5) {
            printf("%d\n", na[counter]);
            scanf("%d", na[counter++]);
            counter++;
        }
        
        /*get a number and put it in location 3*/
        printf("enter a number");
        scanf("%d", &na[3]);
        
        /*print out the array agin to show it has changed*/
        counter = 0;
        
        while (counter < 5) {
            printf("%d\n", na[counter]);
            counter++;
            
        }
        
    }
    
    
    
    
    return 0;
    
    }
