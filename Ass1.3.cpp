#include <iostream>
using namespace std;

int trailing_zero(int n)
{
    int count=0;
    while(n>0)
    {
        n/=5;
        count += n;
    }
    return count;
}

int smallest_no(int n)
{
    int low=0;
    int high=n*5;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(trailing_zero(mid)<n)
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << smallest_no(num);

    return 0;
}