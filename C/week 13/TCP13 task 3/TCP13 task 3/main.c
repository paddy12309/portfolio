//
//  main.c
//  TCP13 task 3
//
//  Created by paddy on 21/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int array1[] = {6,5,3,1,2};
    int count;
    int temp;
    int n;
    
    count = 0;
    
    while (count < 5) {
        printf("%d, %d\n", array1[0], array1[count]);
        
        if (array1[count]<array1[0]) {
            temp = array1[0];
            array1[0]=array1[count];
            array1[count]=temp;
            
        }
       
        count++;
        
    }
    
    return 0;
}
