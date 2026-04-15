#include<bits/stdc++.h>
using namespace std;
class diem 
{
    double x, y;
public:
    diem() : x(0), y(0) {}
    diem(double h, double t) : x(h), y(t) {}
    void in() { cout << x << " " << y << "\n"; }
    double khoangcach(diem d) { return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2)); }
};
class tamgiac 
{
    diem d1, d2, d3;
public:
    tamgiac() {}
    tamgiac(diem a, diem b, diem c) : d1(a), d2(b), d3(c) {}
    double chuvi() { return d1.khoangcach(d2) + d2.khoangcach(d3) + d3.khoangcach(d1); }
    double dientich() 
    {
        double a = d1.khoangcach(d2), b = d2.khoangcach(d3), c = d3.khoangcach(d1);
        double p = chuvi() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};