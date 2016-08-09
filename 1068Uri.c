#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,c=0,m,n,y=1;

   char line [1000];

   while(scanf(" %[^\n]",&line)!=EOF){


   m = strlen(line);

   for (a=0;a<m;a++){

    if (line[0] == ')'){
            b = -2;
            break;
       }
    else if (line[m-1] == '('){
           c = -2;
           break;
        }
    else if (line[a] == '('){
            b++;
        }
    else if (line[a]== ')'){
        c++;
    }

   }

    if (b == c){
        printf("correct\n");

    }
    else {
        printf("incorrect\n");
    }
      b = 0;
      c = 0;

   }

return 0;

}

