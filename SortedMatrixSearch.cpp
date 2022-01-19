#include<iostream>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int mat[n][m];
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int target;
    cin>>target;



//starting traverse form top right end of matrix

int r=0,c=m-1;
bool found=false;

while(r<n && c>=0)
{
    if(mat[r][c]==target)
    {
        found=true;
    }
    //if small go left
    if(mat[r][c]>target)
    {
        c--;
    }
    //if large go down
    else{
        r++;
    }
}

if(found)
cout<<"Element found";

else
cout<<"Not found";

}

