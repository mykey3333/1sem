#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 
int **arr, n, m, i,j, y, t;
int main ()
{
 
        cout<<"vvedite kolichestvo strok massiva: "<< endl;
    cin>>n;
    cout<<"vvedite kolichestvo stolbcov massiva: "<< endl;
    cin>>m;
    arr=new int*[n];
    for(i=0; i<n; i++)
       arr[i]=new int[m];
    cout<<"vvedite elementy massiva: "<< endl;
    for(i=0; i<n; i++)
       for(j=0; j<m; j++)
       {
          cout<<"["<<i<<"]["<<j<<"]= ";
          cin>>arr[i][j];
       }
        cout<<"isxodnyi massiv"<<endl;
    for(i=0; i<n; i++)
        {
       for(j=0; j<m; j++)
          cout<<arr[i][j]<<"  ";
           cout<<endl;
        }
        for(i=0; i<n; i++)
        {
                t=0;
                for(j=0; j<m; j++)
                        if(arr[i][j]!=0)
                                t=1;
                if(t==0)
                {
                        for(y=i; y<n-1; y++)
                                for(j=0; j<m; j++)
                                        arr[y][j]=arr[y+1][j];
                        n--;
                }
        }
        for(i=0; i<m; i++)
        {
                t=0;
                for(j=0; j<n; j++)
                        if(arr[j][i]!=0)
                                t=1;
                if(t==0)
                {
                        for(y=i; y<m-1; y++)
                                for(j=0; j<n; j++)
                                        arr[j][y]=arr[j][y+1];
                        m--;
                }
        }
        cout<<endl;
        cout<<"polychennyi massiv"<<endl;
        for(i=0; i<n; i++)
        {
       for(j=0; j<m; j++)
          cout<<arr[i][j]<<"  ";
                cout<<endl;
        }
        cout<<endl;
        getch();
         return 0;
}
