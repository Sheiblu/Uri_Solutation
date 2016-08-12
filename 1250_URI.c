#include<stdio.h>
 int main()
{
    int loop, loop2,i,j,hit=0;
 //   printf("LOOP 1\n");
    scanf("%d",&loop);
    int s[60];
    char c;

    for (i = 0;i<loop;i++){

//printf("LOOP 2\n");

        scanf("%d",&loop2);

//printf("Give int \n");
        for (j=0;j<loop2;j++){

          scanf("%d",&s[j]);
        }
//printf("Give Char \n");
        for (j=0;j<loop2;j++){
          scanf(" %c", &c);

          if (c=='J' && s[j]>2) {
            hit++;
          }
          else if (c=='S' && s[j]<=2) {
            hit++;
          }
        }

     printf("%d\n",hit);
     hit = 0;
    }


 return 0;
}
