#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,spasi,koef=1;


    printf("Masukkan n (MAX 5) : ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        for (spasi=1;spasi<=n-i;spasi++){
            printf("  ");
        }
        for (j=0;j<=i;j++){
            if(j == 0 || i == 0){
                koef=1;
            } else koef = koef * (i-j+1)/j;
            printf("%4d ",koef);
        }
        printf("\n");
    }


    return 0;
}
