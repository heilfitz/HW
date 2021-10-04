

#include <iostream>
using namespace std;

int main()
{
    long n,k,a,b,ans,sum;
    double f;
    cin >>n>>k>>a>>b;
    sum=0;
    ans=0;
    do
    {
        f=double(b)/(double(a)*(1-1/double(k)));
        if ((n%k==0)&&(n>f)&&(sum<=2)) {
            ans+=b;
            n=n/k;
            sum++;
        }else{
            n=n-1;
            ans+=a;
        }
    }while( n>0 );
    cout << ans;
    return 0;
}




