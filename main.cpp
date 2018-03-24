#include <iostream>

using namespace std;
int gcd(int i,int j)
{
    if(j==0) return (i);
    else
    {
        return gcd(j,i%j);
    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    cout << gcd(m,n) << endl;
    return 0;
}
