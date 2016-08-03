#include<stdio.h>

int main(){
    int a=0,b=0,i,take ,j=0;
    int eve [15];
    int od[15], even [5],odd [5];

    for(i=0;i<15;i++){
            scanf("%d",&take);
        if(take%2 == 0){
            eve[a++] = take;
        }
        else{
            od[b++] = take;}
    }
    for(i=0;i<5;i++){
            even [i] = eve [i];
        printf("par[%d] = %d\n",i,even[i]);
    }
    for(i=0;i<5;i++){
        odd [i] = od [i];
        printf("impar[%d] = %d\n",i,odd[i]);
    }

    for(i=5;i<b;i++){
        printf("impar[%d] = %d\n",j++,od[i]);
    }
    j=0;

   for(i=5;i<a;i++){
        printf("par[%d] = %d\n",j++,eve[i]);
    }
    return 0;
}
