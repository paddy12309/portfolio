//
//  main.c
//  TCP 14 task 3
//
//  Created by paddy on 03/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//


    
    
#include <stdio.h>
#include <stdlib.h>
    
    void addtwonumbers(int a, int b);
    int multiply( int firstnum, int secondnum);
    
    int main(int argc, const char * argv[]) {
        
        int num1;
        int num2;
        int count;
        
        printf("enter a value");
         scanf("%d",&num1);
         printf("enter a value");
         scanf("%d",&num2);
         
         addtwonumbers(num1, num2);
         
        
        count = 0;
        while (count < 12) {
            
            multiply(num2count, 3);
            
           while (count < 12) {
                printf("%d, %d\n", num2);
                count++;
               num2++;
            }
        
            
        }
        return 0;
    }
    
   /* void addtwonumbers(firstnum, secondnum)
     {
     int table;
     int answer;
     
     answer = firstnum * secondnum;
         return firstnum + secondnum;
     
     }*/
    
int multiply( int firstnum, int secondnum)
{

    
        
        return firstnum * secondnum;
        
        
    }
    
//return (firstnum * secondnum);






