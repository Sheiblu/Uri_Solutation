#include<stdio.h>
#include<string.h>
int main ()
{

 char ar[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  char a;
  int j;


  while (scanf("%c",&a)!=EOF){
    for (j=0;j<48;j++){
        if (a == ar[j]){
            printf("%c",ar[j-1]);
            break;
        }
        else if (a == ' '){
            printf(" ");
            break;
        }
        else if (a == '\n') {
				printf("\n");
				break;
			}
    }

  }
  return 0;
}
