//  String length calculation
#include <stdio.h>
#include <string.h>

void string_length(){
    int length;
    char string[100];
    printf("Enter any string (e.g your name):\n");

    scanf("%s",string);
    length = strlen(string);
    printf("The length of the string %s is %d\n", string,length);
}

int main(){
    string_length();
    return 0;
}