//
//  main.c
//  TCP 14 task 5
//
//  Created by paddy on 24/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[] = {6,5,3,2,1};
    
    int count;
    
    int temp;
    
    int n;
    
    count=0;
    
    n = 0;
    
    while (count < 5) {
        printf("enter values:\n");
        scanf("%d\n", &arr[count]);
        count++;
    }
    
    count = 0;
    
    while (count <5) {
        printf("%d", arr[count]);
        count++;
    }

    while ( n < 5) {
        while (count < 5) {
            if (arr[count] < arr[0]) {
                temp = arr[count];
                arr[count] = arr[0];
                arr[0]=temp;
            }
            count++;
        }
        n++;
        
    }
    count = 0;
    
    while (count<5) {
        printf("%d\n", arr[count]);
        count++;
    }
        return 0;
}
