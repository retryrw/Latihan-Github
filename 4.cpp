#include <iostream>
using namespace std;

int main()
{
    char kata[150];
    int vokal, konsonan,i, t, terkecil,j, k ;
    char hvokal[i], hkonsonan[i];
    vokal =  konsonan = 0;
    cout << "\t\t\t MENGURUTKAN VOKAL DAN KONSONAN KATA "<< endl;
    cout << "masukkan kata disini: ";
    cin.getline(kata, 150);

    for(int i = 0; kata[i]!='\0'; ++i)
    {

        if(kata[i]=='a' || kata[i]=='e' || kata[i]=='i' ||
           kata[i]=='o' || kata[i]=='u' || kata[i]=='A' ||
           kata[i]=='E' || kata[i]=='I' || kata[i]=='O' ||
           kata[i]=='U')
        {
            ++vokal;
            hvokal[vokal-1]=kata[i];
        }

        else if((kata[i]>='a'&& kata[i]<='z') || (kata[i]>='A'&& kata[i]<='Z'))
        {
            ++konsonan;
            hkonsonan[konsonan-1]=kata[i];
        }
    }
    
    
    for (j = 1; j < vokal; j++)
    {
        for (k = 0; k < vokal-j; k++) 
        {
            if ( hvokal[k] > hvokal[k+1])
            {char t=0;
            t=hvokal[k];
            hvokal[k]=hvokal[k+1];
            hvokal[k+1]=t;}
        }
    }
    
    for (j = 1; j < konsonan; j++)
    {
        for (k = 0; k < konsonan-j; k++) 
        {
            if ( hkonsonan[k] > hkonsonan[k+1])
            {char t=0;
            t=hkonsonan[k];
            hkonsonan[k]=hkonsonan[k+1];
            hkonsonan[k+1]=t;}
        }
    }
    cout << "abjad setelah diurutkan"<<endl;
    cout << hvokal<< hkonsonan<<endl;
    
   	return 0;
}
