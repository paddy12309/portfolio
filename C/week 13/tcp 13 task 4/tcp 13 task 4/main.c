//
//  main.c
//  tcp 13 task 4
//
//  Created by paddy on 24/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {6,5,3,2,1};
    
    int count;
    
    int temp;
    
    count=0;
    
    
    while (count < 5) {
        printf("%d\n", arr[count]);
        count++;
    }
    
    count = 0;
    
    while ( count < 5) {
        if (arr[count] < arr[0]) {
            temp = arr[count];
            arr[count] = arr[0];
            arr[0]=temp;
        }
        count++;
    }
    while (count <5) {
        printf("%d", arr[count]);
        count++;
    }
    return 0;
}
