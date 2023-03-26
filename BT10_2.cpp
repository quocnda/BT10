#include <iostream>
using namespace std;
struct Point{
    int x,y;
};

void print(Point &p){
	cin>>p.x>>p.y;
}
void TR(Point p){
    p.x += 5;
    p.y += 5;
}

void TC(Point &p){
    p.x += 1;
    p.y += 1;
}
void printf(Point p) {
    cout<<p.x<<" "<<p.y;
}
int main(){
    Point point;
    print(point);
    TR(point);
   
    TC(point);
    
}