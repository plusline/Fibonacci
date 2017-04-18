#include <iostream>
#include <cstdlib>

using namespace std;

int f(int N)
{
    if(N==0 or N==1)
    {
        return N;
    }
    else
    {
        return f(N-1)+f(N-2);
    }
}

int main()
{
    int n=10;
    for(int i=1;i<n;i++)
    {
        cout<<i<<": "<<f(i)<<endl;
    }
    system("pause");
    return 0;
}
/*
Procedure FIB(N)
    IF (N = 0 OR N = 1)
        RETURN N
    ELSE
        RETURN FIB(N-1) + FIB(N-2)
*/

