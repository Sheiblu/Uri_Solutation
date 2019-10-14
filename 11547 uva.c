#include <stdio.h>
#include<string.h>

int main(){
    int loop = 0;
    int value = 0;
    long int result = 0;
    scanf("%d", &loop);
    int i = 0;

    for(i = 0; i < loop; i++){
            scanf("%d", &value);
            result = (((((value * 567) / 9) + 7492) *235) / 47 ) - 498;
            printf("%d\n", abs((result / 10 ) % 10));

        }

return 0;

}


