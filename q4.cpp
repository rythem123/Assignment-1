# include<iostream>
# include<string>
using namespace std;
int main()
{
    int i,c=0,n,j;
    string a;
    cout<<"enter a string";
    getline(cin,a);
    n=a.size();
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        if(a[i]==a[j])
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"string is pallindrome";
    }
    else
    {
        cout<<"not a pallindrome";
    }
}
