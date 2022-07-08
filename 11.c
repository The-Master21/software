#include <stdio.h>


2	void swap ( int* a, int* b )
{
   3	int t = *a;
  4	*a = *b;
  5	*b = t;
6	}

7	int partition (int arr[], int l, int h)
8	{
  9	int x = arr[h]; int i = (l - 1),j;

 
11   	for (j = l; j <= h- 1; j++)
12	        {
      13	            if (arr[j] <= x)
      14     {
      15	           i++;
      16	           swap (&arr[i], &arr[j]);
      17    }
18	          }
19	          swap (&arr[i + 1], &arr[h]);
20	          return (i + 1);
     21    }

    22         void quickSortIterative (int arr[], int l, int h)
    23    {
      24       int  stack[10],p;


      25       int top = -1;


      26      stack stack[ ++top ] = l;
27      stack[ ++top ] = h;


 28     while ( top >= 0 )
 29    {
      30     h = stack[ top-- ];
      31     l = stack[ top-- ];
           32    p = partition( arr, l, h );

33    if ( p-1 > l )
34    {
           35      stack[ ++top ] = l;
           36      stack[ ++top ] = p - 1;
 37    }    
 38    stack if ( p+1 < h )
  39      {
            40         stack[ ++top ] = p + 1;
            41          stack[ ++top ] = h;
            42    }
       43        }
           44             }
int main()
{
int arr[20],n,i;
clrscr();
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
quickSortIterative( arr, 0, n - 1 );
printf("Elements of the array are;");
 
for(i=0;i<n;i++)
printf("%d",arr[i]);
       getch();
       return 0;
}
