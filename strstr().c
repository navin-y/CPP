#include<stdio.h>
#include<string.h>

int main(){
    char *line[]={"sunday","monday"};
    char *p=strstr(line[0],"day");
    printf("%s",p);
}