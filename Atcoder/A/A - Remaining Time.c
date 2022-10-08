#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);

    while(B>0){ /// B = 12
        A++;
        if(A==24) A = 0;
        B--;
    }


   printf("%d",A);



    return 0;
}
