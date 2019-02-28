//
//  main.c
//  TCP 15 Task 1
//
//  Created by paddy on 04/04/2017.
//  Copyright © 2017 paddy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PETNAME{
    int ID;
    char name[20];
    char genus[20];
    int age;
    char breed[20];

    
};

void printpets(struct PETNAME pet[]);

int main(int argc, const char * argv[]) {
    
    struct PETNAME pet[100]=
    {
        1, "doug", "dog", '4', "german",
        2, "greg", "cat", '7', "siemiese",
        3, "jake", "cat", '2', "persian",
        4, "fi", "dog", '8', "spanial",
        5, "elle", "dog", '3', "collie",
        0, "", "",
        
    };
    
    printpets(pet);
    
    
    
    return 0;
}

void printpets(struct PETNAME pet[])
{
    int count = 0;
    
    while (pet[count].name[0] != '\0') {
        printf("%s, %s, %d, %s\n", pet[count].name, pet[count].genus, pet[count].age, pet[count].breed);
        count++;
    }


}
