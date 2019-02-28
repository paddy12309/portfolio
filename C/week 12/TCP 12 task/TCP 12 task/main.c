#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char one[4]={'a','b','c','\0'};
    char two[4]={'z','y','x','\0'};
    char temp;
    int count;

    
    count = 0;
    
    while (count < 4) {
        printf("%c\n", one[count]);
        count++;
    }
    
    count = 0;
    
    while (count<4) {
        temp=one[count];
        one[count]=two[count];
        two[count]=temp;
        count++;
    
    }
    count=0;
    
    while (count<4) {
        printf("%c\n", one[count]);
        count++;
    }
    
    return 0;
}

