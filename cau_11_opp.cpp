#include<bits/stdc++.h>
using namespace std;
class sophuc 
{
    double thu, ao;
public:
    sophuc() : thu(0), ao(0) {}
    sophuc(double t, double a) : thu(t), ao(a) {}
    void nhap(double t, double a) { thu = t; ao = a; }
    void in() { cout << thu << " " << ao << "\n"; }
    sophuc cong(sophuc s) { return sophuc(thu + s.thu, ao + s.ao); }
    sophuc nhan(sophuc s) { return sophuc(thu * s.thu - ao * s.ao, thu * s.ao + ao * s.thu); }
};