#include <stdio.h>

int main() {
    int i,j,n,s;
    int num=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       
        for(j=0;j<i;j++)
        printf("%d ",num++);
        printf("\n");
    }
}

