//
//  main.c
//  TCP 12
//
//  Created by paddy on 14/03/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char again[] = "";
    
    scanf("%s", &again);
    int count;
    
    count = 0;
    while (again[count] != '\0') {
        printf("%c", again[count]);
        
        count++;
    }
    
    return 0;
}
