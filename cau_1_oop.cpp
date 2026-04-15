#include<bits/stdc++.h>
using namespace std;
class canbo 
{
protected:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
public:
    canbo(string h, int t, string g, string d) : hoten(h), tuoi(t), gioitinh(g), diachi(d) {}
    virtual void in() { cout << hoten << " " << tuoi << " " << gioitinh << " " << diachi << "\n"; }
    string layten() { return hoten; }
};
class congnhan : public canbo
{
    int bac;
public:
    congnhan(string h, int t, string g, string d, int b) : canbo(h, t, g, d), bac(b) {}
    void in() override { canbo::in(); cout << bac << "\n"; }
};
class kysu : public canbo 
{
    string nganh;
public:
    kysu(string h, int t, string g, string d, string n) : canbo(h, t, g, d), nganh(n) {}
    void in() override { canbo::in(); cout << nganh << "\n"; }
};
class nhanvien : public canbo 
{
    string congviec;
public:
    nhanvien(string h, int t, string g, string d, string cv) : canbo(h, t, g, d), congviec(cv) {}
    void in() override { canbo::in(); cout << congviec << "\n"; }
};
class qlcb 
{
    vector<canbo*> ds;
public:
    void them(canbo* cb) { ds.push_back(cb); }
    void tim(string ten) {
        for (auto cb : ds) if (cb->layten() == ten) cb->in();
    }
    void hienthi() { for (auto cb : ds) cb->in(); }
};