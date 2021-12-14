#include<iostream>
using namespace std;

void hailstone(int n,int l)
{
    if(n == 1)
    {   cout<<n<<endl;
        cout<<(l + 1)<<endl;
        return;
    }
    else
    {
        cout<<n<<" ";
        
        if(n%2 == 0)
        { 
            hailstone(n/2,l + 1);
        }
        else
        {
            hailstone(3*n + 1,l + 1);
        }
    }
}
int main()
{    int n;
    int l = 0;
    cin>>n;
    hailstone(n,l);
}
