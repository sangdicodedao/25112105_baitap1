#include<bits/stdc++.h>
using namespace std;
class diem
{
    int x, y;
public:
    diem() : x(0), y(0) {}
    diem(int h, int t) : x(h), y(t) {}
    void in() { cout << x << " " << y << "\n"; }
    double khoangcach(diem d) { return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2)); }
};
class hinhtron 
{
    diem tam; int bk;
public:
    hinhtron() : tam(diem(0, 0)), bk(0) {}
    hinhtron(diem d, int b) : tam(d), bk(b) {}
    hinhtron(int b, diem d) : tam(d), bk(b) {}
    double chuvi() { return 2 * 3.14 * bk; }
    double dientich() { return 3.14 * bk * bk; }
};