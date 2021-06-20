#include <iostream>

using namespace std;
void divizor(int a, int b, int k, int &nr)
{
    int i;
    nr=0;
    for(i=a ; i<=b ; i++)
        if(i%k==0 && i%10==k){
        nr++;
        cout<<i<<" ";
        }
}
int main()
{
    int nr;
    divizor(3,50,4,nr);
    cout <<endl<<nr;
    return 0;
}
