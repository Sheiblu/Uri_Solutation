#include<stdio.h>
int even[5], odd[5], another[5];
void event();
void oddt();
//int even[5], odd[5], another[5];
int main()
{
    int a1,a2,input,i,j=0,k=0,l=0,n;
    //int even[5], odd[5], another[5];
    for(n=0;n<15;n++){

    scanf("%d",&input);

    if (input %2 == 0 ){
        even [k] = input;
          k++;
         if(k==5){
            k = 0;
            event();
         }
    }

    else if (input %2 != 0){

        odd [j] = input;
        j++;

        if(j==5){
            j = 0;
            oddt();
         }
    }

    }
    for (i=0;i<j;i++){
        printf("impar[%d] = %d\n", i, odd[i]);
      }
    for (i=0;i<k;i++){
        printf("par[%d] = %d\n", i, even[i]);
      }


    return 0;
}

  void event (){
      int a ;
      int i;

      for (i=0;i<5;i++){
        printf("par[%d] = %d\n", i, even[i]);
      }
}

void oddt (){
      int a ;
      int i;

      for (i=0;i<5;i++){
        printf("impar[%d] = %d\n", i, odd[i]);
      }
}

