#include <stdio.h>
int main(){
    int a = 0;
    printf("2 + 2 = ");
    scanf("%d", &a);

    if (a == 4){
        printf("Correct");
    }else{
        printf("naaaah");
    }
    return 0;
}