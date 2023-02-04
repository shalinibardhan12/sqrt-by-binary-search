#include<iostream>
using namespace std;
int Sqrt(int n)
{
    int s =0;
    int e = n;
    int mid = (s+e)/2;
    int square = 0;
    int ans = -1;
    while(s<=e)
    {
        square = mid*mid;
        if(square == n)
        {
            return mid;
        }
        else if(square>n)
        {
            e = mid-1;
        }
        else 
        {
        ans = square;
        s = mid+1;
        }
        mid = (s+e)/2;
    }
    return mid;
}
    double MorePrecision(int n,int precision,int tempsol)
{
        double factor = 1;
        double ans = tempsol;
        for(int i =0;i<precision;i++)
        {
            factor = factor/10;
            for(double j = ans;j*j<n;j = j+factor)
            {
                ans = j;
            }
        }  
    return ans;
}

int main()
{
    int n;
    cout<<"enter the number to find its square root"<<endl;
    cin>>n;
    int tempsol = 0;
    tempsol = Sqrt(n);
    cout<<" square root of "<< n <<" is "<< MorePrecision( n,3,tempsol)<<endl;
    return 0;
}