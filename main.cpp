/** Computer Programming
 *  Method of Least Squares of Linear Regression
 *  C00187998
 *  Gerard Murphy
 *  02/10/17
 */
#include <iostream>
#include <math.h>/**< preprocessor directives */

using namespace std;

int main()/**< main function */
{
    cout << "Method of Least Squares of Linear Regression" << endl;/**< Title */

    double x[100]={0}, y[100]={0}, xsum=0,ysum=0,xysum=0, x2sum=0, averageX, averageY, m, c;
    int i, n;/**< variable declarations */

    cout<<"\nEnter the no. of data points to be entered:\n";
    cin>>n;

    cout<<"\nEnter x-values:\n";

    for (i=0;i<n;i++)/**< for loop for x-values */
    {
        cin>>x[i];
    }

    cout<<"\nEnter y-values:\n";

    for (i=0;i<n;i++)/**< for loop for y-values */
    {
        cin>>y[i];
    }

    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];

        ysum=ysum+y[i];

        x2sum=x2sum+pow(x[i],2);

        xysum=xysum+x[i]*y[i];
    }

    averageX= xsum/n;
    cout<<"\nAverage of X values:"<<averageX;

    averageY= ysum/n;
    cout<<"\nAverage of Y values:"<<averageY;

    m=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);
    cout<<"\nSlope of line:"<<m;

    c=averageY-(m*averageX);
    cout<<"\nIntercept of line:"<<c;

    return 0;
}
