#include <stdio.h>
#include<conio.h>
void main()
{
    int data[100],i,n,j,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(data[i]>data[j])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	printf("---Data in sorted order--------");
	  for(i=0;i<n;++i)
    {
        printf("%d   ",data[i]);
    }
getch();
}


