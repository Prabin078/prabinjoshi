#include<stdio.h>
#include<time.h>
void bubble_sort(long a[1000],long n)
{
long i,j;
int swap;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   swap=a[j];
   a[j]=a[j+1];
   a[j+1]=swap;
  }
 }
}
};

int main()
{
long n,i,j,a[1000];
clock_t begin,end;
double total_t;
printf("Enter number of elements\n");
scanf("%ld",&n);
printf("Enter %ld longers\n",n);
for (i=0;i<n;i++)
//scanf("%ld",&a[i]);
a[i]=rand(1000);
begin=clock();
bubble_sort(a,n);
end=clock();
printf("Sorted list in ascending order:\n");
for (i=0;i<n;i++)
printf("%ld\n",a[i]);
printf("execution time taken is:");
total_t=((double)(end-begin)/(CLOCKS_PER_SEC));
printf("%lf\n",total_t);
return 0;
}
