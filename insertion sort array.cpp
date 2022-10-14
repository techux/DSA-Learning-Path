#include<iostream>
using namespace std;

int main()
{
    int temp,arr[8]={12,3,45,20,2,30,100,45},i=0,j=0;

    for(i=1;i<8;i++)
    {
        temp = arr[i];
        j=i-1;
        while(temp>arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    cout<<"the sorted array is: ";

    for(i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}
