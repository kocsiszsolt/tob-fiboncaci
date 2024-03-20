#include <iostream>

using namespace std;

int main()
{

    int tomb[100],n,i;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++)
        {
            cout<<"tomb["<<i<<"]=";
            cin>>tomb[i];
        }
    for(i=0;i<n-1;i++)
        {
            for(int s=i+1;s<n;s++)
                {
                    if(tomb[i]>tomb[s])
                        {
                            int p=tomb[i];
                            tomb[i]=tomb[s];
                            tomb[s]=p;
                        }
                }
        }
    for(i=0;i<n;i++)
        {
            cout<<tomb[i]<<" ";        }
    return 0;
}
