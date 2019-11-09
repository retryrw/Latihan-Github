#include <iostream>
using namespace std;

int main()
{
	int Jumlah;
    cout<<"thirdHighest"<<endl<<"Jumlah Elemen = ";
    cin>> Jumlah;
    
    if (Jumlah<=2)
    {
        cout<<"Minimal array length is 3!";
    }
    else
    {
    int i, arr[Jumlah];
    
    for (i=1;i<=Jumlah;i++)
    {
        cin>>arr[i-1];
    }
    
    //int arr[] = { 2, 10, 23, 9, 17, 19, 12};
    int ukuran;

    ukuran = sizeof(arr)/sizeof(arr[0]);
    
    for (int j = 1; j < ukuran; j++)
    {
        for (int k = 0; k < ukuran-j; k++) 
        {
            if ( arr[k] > arr[k+1])
            {char t=0;
            t=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=t;}
        }
    }
    
    cout<<arr[Jumlah-3];
    }
    
    
}
