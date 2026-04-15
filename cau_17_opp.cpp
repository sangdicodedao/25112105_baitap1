#include<bits/stdc++.h>
using namespace std;
class ketqua 
{
public:
    string hk; float dtb;
    ketqua(string h, float d) : hk(h), dtb(d) {}
};
class sinhvien 
{
protected:
    string masv, hoten, ngaysinh;
    int namvao; float diemvao;
    vector<ketqua> kq;
public:
    sinhvien(string m, string h, string n, int nv, float dv) : masv(m), hoten(h), ngaysinh(n), namvao(nv), diemvao(dv) {}
    virtual bool lachinhquy() { return false; }
    float layvao() { return diemvao; }
    void in() { cout << masv << " " << hoten << "\n"; }
};
class chinhquy : public sinhvien 
{
public:
    chinhquy(string m, string h, string n, int nv, float dv) : sinhvien(m, h, n, nv, dv) {}
    bool lachinhquy() override { return true; }
};
class taichuc : public sinhvien 
{
    string noilk;
public:
    taichuc(string m, string h, string n, int nv, float dv, string nl) : sinhvien(m, h, n, nv, dv), noilk(nl) {}
};
class khoa 
{
    string ten; vector<sinhvien*> ds;
public:
    void them(sinhvien* s) { ds.push_back(s); }
    int demcq() 
    {
        int d = 0;
        for (auto s : ds) if (s->lachinhquy()) d++;
        return d;
    }
};