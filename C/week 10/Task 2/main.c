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
   
    
 /*
  

    
    
    
    int counter;
    int na[4]= {3,5,7,-1};
        counter=0;
        
        while (na[counter] > -1)
        {
            printf("%d\n", na[counter]);
            counter++;
        }
    
    */
    
    int counter;
    int input;
    int na[100];
    
    printf("please enter a value below 99:");
    scanf("%d", &input);
    
    counter = 0;
    
    {
        while(counter<input)
        {
            printf("enter a number:");
            scanf("%d", &na[counter]);
            counter++;
            
        }
        
        counter = 0;
        while(counter < input)
        {
            printf("%d\n", na[counter]);
            counter++;
        }
    }
    
    return 0;
}
