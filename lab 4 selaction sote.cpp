#include<iostream>
using namespace std;

int main(){
    int i, j, p,s, size; // P is pasition and s = smallest
    cout<<"Enter the array size: ";
    cin>>size;

    int arr[size];
    cout<<"Imput the array values: ";
    for(i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Array values ate: ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<"  ";

   for(p=0; p<size-1; p++){
        s=p;
        for(i=p+1; i<size;i++)
        if(arr[s]>arr[i])
        s=i;
        swap(arr[p], arr[s]);


   }


    cout<<"\nArray values after the sorted are: ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<"  ";

    return 0;
}
