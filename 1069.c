#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,d=0;
    int i,j,loop;
    char c[100];
    
    scanf("%d%c",&loop,&c);

    for(i=0;i<loop;i++){
            scanf(" %[^\n]",&c);
     for(j=0;j<strlen(c);j++){

        if (c[j]=='<'){
            a++;
        }
        else if (c[j]=='>' && a>0){
            a--;
            b++;
        }
        else{
        }

     }
     printf("%d\n",b);
     b=0;
     a=0;
    }
  return 0;
}

