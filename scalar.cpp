#include <iostream>

using namespace std;

int main()
{
    int a1,a2,b1,b2,c1,c2,s1,s2,f1,f2;
   // int d1,d2;
    float x1,x2,x3,y1,y2,y3;
   // float x4,y4;
 cout<<"enter first point"<<endl;
 cin>>a1>>a2;
  cout<<"enter second point"<<endl;
 cin>>b1>>b2;
  cout<<"enter third point"<<endl;
 cin>>c1>>c2;
  //cout<<"enter fourth point"<<endl;
 //cin>>d1>>d2;
  cout<<"enter scaler point"<<endl;
 cin>>s1>>s2;
  cout<<"enter fixed point"<<endl;
 cin>>f1>>f2;
 x1=a1*s1+f1*(1-s1);
 x2=b1*s1+f1*(1-s1);
 x3=c1*s1+f1*(1-s1);
 //x4=d1*s1+f1*(1-s1);
 y1=a2*s2+f2*(1-s2);
 y2=b2*s2+f2*(1-s2);
 y3=c2*s2+f2*(1-s2);
 //y4=d2*s2+f2*(1-s2);
    cout<<"after scalling is"<<endl;
    cout<<"first point : ("<<x1<<","<<y1<<")"<<endl;
    cout<<"second point : ("<<x2<<","<<y2<<")"<<endl;
    cout<<"third point : ("<<x3<<","<<y3<<")"<<endl;
    //cout<<"fourth point : ("<<x4<<","<<y4<<")"<<endl;

    return 0;
}
