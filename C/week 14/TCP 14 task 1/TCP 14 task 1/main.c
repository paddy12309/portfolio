//
//  main.c
//  TCP 14 task 1
//
//  Created by paddy on 28/03/2017.
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
    
    /*printf("enter a value");
    scanf("%d",&num1);
    printf("enter a value");
    scanf("%d",&num2);
    
    addtwonumbers(num1, num2);
    */
    
    count = 0;
    while (count < 12) {
        
        multiply(count, 3);
        
        
        count++;
    }
    return 0;
}

void addtwonumbers(firstnum, secondnum)
{
    int table;
    int answer;
 
    answer = firstnum * secondnum;
    printf("%d\n",answer);
    
    
}

int multiply( int firstnum, int secondnum)
{


    return firstnum * secondnum;
    

}




