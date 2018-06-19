#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k,count,a,sum=0,l,t=0,p=0;
    cin>>n>>k;
    vector<int>v;
    vector<int>x;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        x.push_back(a);
    }
    sort(x.begin(),x.end());

    for(i=0; i<n; i++)
    {
        sum+=x[i];
        if(sum<=k)
        {
            t++;
        }

    }
    cout<<t<<endl;
    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
                if(x[i]==v[j])
                {
                    p+=v[j];
                    if(p<=k)
                    cout<<j+1<<" ";
                    else
                        break;
                   v[j]='\0';
                }

        }
    }
}
