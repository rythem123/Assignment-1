# include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r,p;
    cout<<"enter a no.";
    cin>>n;
    p=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(p==sum)
    {
        cout<<"it is a pallindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }
}
