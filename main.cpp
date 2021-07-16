#include <iostream>

using namespace std;

int arr[1000001];

void Quick_Sort(int st,int dr)
{
   int pivot = arr[st],k=st,aux;

    if(st>=dr) return ;

      for(int i=st;i<=dr;i++)
           if(arr[i] < pivot)
           {
              k++;
              aux = arr[i],arr[i] = arr[k];
              arr[k] = aux;
           }
            arr[st] = arr[k];
            arr[k] = pivot;

            Quick_Sort(st,k-1);
            Quick_Sort(k+1,dr);
          return;
}


void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>arr[i];

    Quick_Sort(1,n);

    print(n);



    return 0;
}
