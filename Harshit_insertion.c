#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter list elements:");
    for(int a=0;a<n;a++)
        scanf("%d",&ptr[a]);
    for(int b=1;b<n;b++)
    {
	    int x=ptr[b];
	    for(int c=b-1;c>=0;c--)
	    {
		    if(x<ptr[c])
		    {
			    ptr[c+1]=ptr[c];
			    ptr[c]=x;
		    }
		    else
		        break;
	    }
    }
    for(int d=0;d<n;d++)
    	printf("%d  ",ptr[d]);
}
