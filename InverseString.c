#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, m;
    char palavra[300], invertida[300];
    scanf("%[^\n]", palavra);
    n=0;
    i=0;
    while(palavra[i]!='\0'){
        n++;
        i++;
    }
    m =n-1;
    for(i=m; i>=0; i--){
          printf("%c",palavra[i]);
          m--;
      } 
	return 0;
}
