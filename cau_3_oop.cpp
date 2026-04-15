#include<bits/stdc++.h>
using namespace std;
class thisinh 
{
protected:
    string sbd;
    string hoten;
    string diachi;
    int uutien;
public:
    thisinh(string s, string h, string d, int u) : sbd(s), hoten(h), diachi(d), uutien(u) {}
    virtual void in() { cout << sbd << " " << hoten << " " << diachi << " " << uutien << "\n"; }
    string laysbd() { return sbd; }
};
class khoia : public thisinh 
{
public:
    khoia(string s, string h, string d, int u) : thisinh(s, h, d, u) {}
    void in() override { thisinh::in(); cout << "toan ly hoa\n"; }
};
class khoib : public thisinh 
{
public:
    khoib(string s, string h, string d, int u) : thisinh(s, h, d, u) {}
    void in() override { thisinh::in(); cout << "toan hoa sinh\n"; }
};
class khoic : public thisinh 
{
public:
    khoic(string s, string h, string d, int u) : thisinh(s, h, d, u) {}
    void in() override { thisinh::in(); cout << "van su dia\n"; }
};
class tuyensinh 
{
    vector<thisinh*> ds;
public:
    void them(thisinh* ts) { ds.push_back(ts); }
    void hienthi() { for (auto ts : ds) ts->in(); }
    void tim(string sbd) 
    {
        for (auto ts : ds) if (ts->laysbd() == sbd) ts->in();
    }
};