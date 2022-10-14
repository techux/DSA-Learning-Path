#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[10]={10,9,11,7,12,14,22,200,8,525};
    int min,max;
    min=arr[0];
    max=arr[0];
    for(int i =0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
        else{}
    }
    cout<<min<<endl<<max;
}
