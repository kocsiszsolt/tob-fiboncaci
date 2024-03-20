#include <iostream>

using namespace std;

int main()
{

    int tomb[100],n,i;
    cout<<"n=";
    cin>>n;
    tomb[1]=1;
    tomb[2]=1;
    for(i=3;i<=n;i++)
        {
            tomb[i]=tomb[i-1]+tomb[i-2];
        }
    for(i=1;i<=n;i++)
        {
            cout<<tomb[i]<<endl;
        }



    return 0;
}
