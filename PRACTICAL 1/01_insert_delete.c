#include<stdio.h>
int main()
{
    int a[10],n,i,loc,new,search,delete;
    printf("Enter the number of element you want :");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("-----------------------NORMAL----------------------------------\n");
    // for(i=n-1;i>=0;i--)  reverse print 
    for(i=0;i<n;i++)
    {
        printf("Location = %d , Element = %d",i,a[i]);
        printf("\n");
    }
    printf("---------------------   INSERTED   ----------------------------------\n");
    printf("Emter the location in which you have to INSERT new element :-");
    scanf("%d",&loc);
    printf("Enter the element you want to INSERT :-");
    scanf("%d",&new);
    n++;
    for(i=n; i>loc; i--)
    {
        a[i] = a[i-1];
    }
    a[loc]=new;
    printf("NOW OUR NEW :\n");
    for(i=0;i<n;i++)
	{
		printf("Location =%d & Element =%d\n",i,a[i]);
	}
    printf("-------------------------   SEARCH   ---------------------------------\n");
    printf("Enter the Element you want to search :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
	{
        printf("\n");
		if(search==a[i])
		printf("ELEMENT FOUND AT LOCATION : %d \n",i);
	}
    printf("----------------------------   DELETED   ------------------------------\n");
    printf("Enter the Element which you want to delete :");
    scanf("%d",&delete);
    if( delete >= n+1 ) 
    { 
        printf("Deletion not possible.\n"); 
    } 
    else
    { 
        for(i=delete-1; i<n-1; i++) 
        { 
            a[i] = a[i+1]; 
        }  
        for(i=0; i<n-1; i++) 
        { 
             printf("Location =%d & Element =%d\n",i,a[i]);
        } 
    } 
    return 0;
}
