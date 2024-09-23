#include<iostream>
using namespace std;

int main(){
    int i, s, size;
    cout<<"Enter the array size : ";
    cin>> size;

    int arr[size];
    cout<<"Enter the array Values : ";
    for(i=0; i<size; i++)
    cin>>arr[i];
    cout<<"array values ";
    for(i=0; i<size; i++)
    cout<<arr[i];
    cout<<"\n Enter the search inter : ";
    cin>>s;
    for(i=0; i<size; i++){
        if (arr[i]==s){
            cout<<i<<" In location of item "<<s;
            break;

        }
    }
    if(i==size)
    cout<<"item not found";
    return 0;

}



