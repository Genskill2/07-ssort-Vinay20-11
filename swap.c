
void swap_max(int arr[], int l, int n)
{
int t,temp;
int mx=a[n];
t=n;
for(int i=(n+1);i<l;i++)
{
if(a[i]>mx)
{
mx=a[i];
t=i;
}
}
temp=a[t];
a[t]=a[n];
a[n]=temp;
}
void ssort(int arr[], int l)
{
for(int i=0;i<l;++i)
swap_max(arr,l,i);
}
