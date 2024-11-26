 #include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] != a[j]) 
            printf("%d",a[i]);
            break;}
            break;}
    
    return 0;}
