#include <iostream>
#include <cmath>

using namespace std;
  
int main()
{
    double xn,xk,dx, a,b,c;
    cin >> xn >> xk >> dx >> a >> b >> c ;
    if(((int(a) | int(b)) &  int(c) )!= 0) 
	    {
        for(double x = xn; x <= xk; x += dx) 
		    {
            double f;
            if(x < 0.6 && (b+c) != 0) f = a*pow(x,3)+b*b+c;
            else if(x > 0.6 && (b+c) == 0) f = (x-a)/(x-c);
            else f = (x/c)+(x/a);
            cout << "x = " << x << "\tf = " << f << endl;
            }  
        }
    else 
	    {
        for(double x = xn; x <= xk; x += dx) 
		    {
            int f;
            if(x < 0.6 && (b+c) != 0) f = a*pow(x,3)+b*b+c;
            else if(x > 0.6 && (b+c) == 0) f = (x-a)/(x-c);
            else f = (x/c)+(x/a);
            cout << "x = " << x << "\tf = " << f << endl;
            }
        }
    return 0;
}
