#include<stdio.h>
void print(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d , ",arr[i]);
		
	}
	printf("\n");
}
int main()
{
    int i,j,temp;
    
	int a[5]={7,5,2,1,4};
	int n=sizeof(a)/sizeof(a[0]);

    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }
 
        a[j+1]=temp;    //insert element in proper place
   		print(a,n); 
    }
	
       return 0;
}
