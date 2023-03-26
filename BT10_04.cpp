#include<iostream>
using namespace std;
struct Point{
   int y;int x;
};

int main() {
   Point a;
   cin>>a.y>>a.x;
   cout<<&a.y<<" "<<&a.x<<'\n';
   cout<<&a;
}
/*
 nhan xet:
 gia tri dia chi cua Point a = voi gia tri dia chi cua bien duoc khai bao dau tien
*/