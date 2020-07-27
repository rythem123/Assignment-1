# include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,tmp;
    cout<<"enter the limit";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        cout<<" "<<a[i];
    }
}
