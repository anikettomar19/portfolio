#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int NPTS;
    float TMAX,NT,K,M,C,E,W,x,v,t,a,dt,F;
    cout<<"Enter the number calculation steps desired(NPTS): ";
    cin>>NPTS;
    cout<<"Enter the run time(TMAX): ";
    cin>>TMAX;
    NT=NPTS/10; //To print only the NT steps
    cout<<"Enter the Spring Constant(K): ";
    cin>>K;
    cout<<"Enter the Bob Mass(M): ";
    cin>>M;
    cout<<"Enter the Damping coefficient(C): ";
    cin>>C;
    cout<<"Enter the Magnitude of the driving force(E): ";
    cin>>E;
    cout<<"Enter the Driving Force Frequency(W): ";
    cin>>W;
    cout<<"Enter the Initial Position(x0): ";
    cin>>x;
    cout<<"Enter the Initial Velocity(v0): ";
    cin>>v;
    t=0.0;
    dt=TMAX/NPTS;
    cout<<"Time step used(dt): "<<dt<<endl;
    F=-K*x-C*v+E*sin(W*t);
    a=F/M;
    cout<<"Initial Values: "<<endl<<"t  x  v  a"<<endl<<t<<"  "<<x<<"  "<<v<<"  "<<a<<endl;

    for(int i=0;i<=NPTS;i++)
    {
        v=v+a*dt;
        x=x+v*dt;
        t=t+dt;
        F=-K*x-C*v+E*sin(W*t);
        a=F/M;
        cout<<t<<"  "<<x<<"  "<<v<<"  "<<a<<endl;
    }
    return 0;
}