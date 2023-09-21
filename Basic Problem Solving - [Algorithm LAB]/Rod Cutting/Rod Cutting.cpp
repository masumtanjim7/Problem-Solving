#include<bits/stdc++.h>
using namespace std;

int Rodcut(int weight[],int benefit[],int k,int n)
{
    int ans[n+1][k+1];
    for(int i=0; i<=k; i++)
        ans[0] [i]=0;

    for(int i=0; i<=n; i++)
        ans[i] [0]=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if (weight[i]<=j)
            {
                ans[i][j]= max(benefit[i]+ans[i][j-weight[i]],ans [i-1][j]);
            }
            else
            {
                ans[i][j]=ans[i-1][j];
            }
        }
    }

return ans[n][k];
}

int main()
{
    int n,weight[50],benefit[50],k;

    cout<<"Length of Your Rod : ";
    cin>>n;
    cout<< "\nWeight | Benefit"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>weight[i]>>benefit[i];
    }
    cout<<"How Many cut you want in Rod  : ";
    cin>>k;

    int total_benefit=Rodcut(weight,benefit,k,n);

    cout<<"Total Benefit : "<<total_benefit<<endl;

return 0;
}
