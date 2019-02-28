//
//  main.c
//  week 8 task 3
//
//  Created by paddy on 24/01/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int start;
    int end;
    int step;
    
    printf("enter the start digit\n");
    scanf("%d", &start);
    printf("\n enter the end digit\n" );
    scanf("%d", &end);
    printf("\n enter the step\n");
    scanf("%d", &step);
    
    
    while(start<=end)
    {
        printf("%d\n", start);
        start=start+step;
    }
    
    return 0;
}
