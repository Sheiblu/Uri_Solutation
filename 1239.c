#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,d=0;
    int i;
    char c[100];


    while(gets(c)!= NULL){
    for (i=0;i<strlen(c);i++){
        if (c[i] != '_' && c[i] != '*' ){
            printf("%c",c[i]);
        }
        else if (b%2==0 && c[i]=='_'){
                printf("<i>");
                b++;
        }
        else if (b%2!=0 && c[i]=='_'){
             printf("</i>");
             b++;
        }
        else if (d%2==0 && c[i]=='*'){
             printf("<b>");
             d++;
        }
        else {
            printf("</b>");
             d++;
        }

    }
    printf("\n");

    }

  return 0;
}

