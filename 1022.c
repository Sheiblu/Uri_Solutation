#include<stdio.h>

int main(){

  char a[2];

  int i,j,k , n1,n2 ,d1,d2;
  int ans[4],loop;

  scanf("%d",&loop);

  for (i=0;i<loop;i++){

         scanf("%d %c %d %c %d %c %d",&n1, &a[0], &d1, &a[1], &n2, &a[0], &d2);


         switch (a[1]){

                case '+' :

                    ans[0] = (n1*d2 + n2*d1) ;
                    ans[1] = (d1*d2);

                    break;

                case '-' :

                    ans[0] = (n1*d2 - n2*d1);
                    ans[1] = (d1*d2);

                    break;

                case '*' :

                    ans[0] = (n1*n2) ;
                    ans[1] = (d1*d2);

                    break;

                case '/' :

                    ans[0] = (n1*d2);
                    ans[1] = (n2*d1);

                    break;


         }

         ans[2]=ans[0];
         ans[3]= ans[1];



         for (j=1000;j>0;j--){

                if(ans[2]%j == 0  && ans[3]%j==0){

                    ans[2] = ans[2]/j;
                    ans[3] = ans[3]/j;
                }

         }

     printf("%d/%d = %d/%d\n",ans[0],ans[1],ans[2],ans[3]);

  }



  return 0;

}
