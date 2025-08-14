#include<stdlib.h>
#include<string.h>
#include<stdio.h>

// The result string can be statically or heap-allocated, it does not matter.
// Use whatever allows you to write the shortest solution.
// Note that the last character '…' is not an ASCII character:
// your string should encode it in UTF-8.
const char *baby_shark_lyrics(void) {
    char *parts[]={"Baby shark","Mommy shark","Daddy shark","Grandma shark",
                   "Grandpa shark","Let's go hunt"};
    char *res=(char *)malloc(1024);
    for(int i=0;i<6;i++){
      for(int j=1;j<3;j++){
        sprintf(res+strlen(res),"%s, doo doo doo doo doo doo\n",parts[i]);
      sprintf(res + strlen(res),"%s!\n",parts[i]);
      }
    }
    sprintf(res + strlen(res),"Run away,…");
    return res;
}

int main(){
    char *res=baby_shark_lyrics();
    printf("%s"res);
}