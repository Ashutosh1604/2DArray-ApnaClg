#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
int n1,n2,n3;
cin>>n1>>n2>>n3;

int m1[n1][n2];
int m2[n2][n3];


//input m1
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        cin>>m1[i][j];
    }
}

//input m2
for(int i=0;i<n2;i++)
{
    for(int j=0;j<n3;j++)
    {
        cin>>m2[i][j];
    }
}

//initialize ans with 0
int ans[n1][n3];
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n3;j++)
    {
        ans[i][j]=0;
    }
}


//multiplication
for(int i=0;i<n1;i++)  //all rows of m1
{
    for(int j=0;j<n3;j++)   //all columns of m2
    {
        for(int k=0;k<n2;k++)   //rows ans columns of m1 and m2 are equal
        {
            ans[i][j]=ans[i][j]+ (m1[i][k]*m2[k][j]);
        }
    }
}



for(int i=0;i<n1;i++)
{
    for(int j=0;j<n3;j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

}
