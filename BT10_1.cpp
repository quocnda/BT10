#include<iostream>
using namespace std;
struct Point
{
    int x;
    int y;
    void cinn()
    {
        cin>>x>>y;

    }
    void printf() {
        cout<<x<<y;
    }
};
int main()
{
  Point a;
  a.cinn();
  a.printf();
}