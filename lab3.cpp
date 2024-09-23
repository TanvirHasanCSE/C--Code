#include<iostream>
using namespace std;

int main(){
    int i, j, size; //
    cout<<"Enter the array size : ";
    cin>>size;

    int arr[size];
    cout<<"Imput the array values : ";
    for(i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Array values ate : ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    for(i=1;i<size;i++)
        for(j=0; j<size-i;j++)
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);

    cout<<"\n Array values after the sorted are: ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
