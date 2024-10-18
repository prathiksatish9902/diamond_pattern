#include <stdio.h>

int main()
{
    int n , i , j , s;
    printf("enter n :");
    scanf("%d \n", &n);
    if((n % 2 == 0) || (n<3)){
        printf("invalid\n" );
        return 0;
    }
    {
        for(i=1;i<=n;i+=1){
            for(s=1;s<(n-i)+1;s++){
                printf(" ");
            }
            for(j=0;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
        for(i=n-1;i>=1;i-=1){
            for(s=1;s<(n-i)+1;s++){
                printf(" ");
            }
            for(j=0;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
