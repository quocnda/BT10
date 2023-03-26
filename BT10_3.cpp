#include<iostream>
using namespace std;
struct Point{
   int x;int y;
};
Point mid(Point a,Point b) {
    int x=a.x;
    int y=a.y;
    int x1=b.x;
    int y1=b.y;
    Point ans;
    ans.x=(x+x1)/2;
    ans.y=(y+y1)/2;
    return ans;
}
int main() {
   Point a;
   Point b;
   cin>>a.x>>a.y;
   cin>>b.x>>b.y;
   Point ans=mid(a,b);
   cout<<ans.x<<" "<<ans.y;
}