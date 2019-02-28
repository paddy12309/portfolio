//
//  main.c
//  TCP 14 Task 4
//
//  Created by paddy on 03/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int multiply( int firstnum, int secondnum );
int main(int argc, const char * argv[]) {
    

    
    int table;
    int count;
    
    printf("Enter the times table you want to display;\n");
    scanf("%d", &table);
    
    while (count<=12) {
        printf("%d\n", multiply(count, table));
        count++;
    }
    
    
    return 0;
}


int multiply( int firstnum, int secondnum )
{

    return firstnum * secondnum;

}
