#include <iostream>
using namespace std;

int main()
{
    int ordo;
    cout<<"Input: createMatrix ";
    cin>>ordo;  
    int a [ordo][ordo];
    int baris=ordo, kolom=ordo;
    
    for (int i=1;i<=baris;i++)
    { //baris
        for (int b=1;b<=kolom;b++)
        { //kolom
                a[i][b]=rand()%10;
        }
    }
    //asfa
    int Total=0;  
    
    cout<<endl<<"Output:"<<endl<<endl;
    for (int i=1;i<=baris;i++)
    { //baris
        for (int b=1;b<=kolom;b++)
        {
            cout<<a[i][b]<<"    ";
        }
        
        cout<<endl;
    }
    
    int ordosquare=ordo+1;
    for (int i=1;i<=baris;i++)
    { //baris
        for (int b=1;b<=kolom;b++)
        {
            if (i==b)
            {
                Total=Total+a[i][b];
            }
            
            else 
            {
                if (i+b==ordosquare)
                {
                    Total=Total+a[i][b];
                }
                
                else
                {
                    Total=Total+0;
                }
            }
        }
    }
    
    cout<<endl<<"Total = "<<Total<<endl<<endl;  
      return 0;
}
