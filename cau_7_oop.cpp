#include<bits/stdc++.h>
using namespace std;
class nguoi
{
protected:
    string hoten;
    int tuoi;
    string quequan;
    string msgv;
public:
    nguoi(string h, int t, string q, string m) : hoten(h), tuoi(t), quequan(q), msgv(m) {}
    string laymsgv() { return msgv; }
};
class cbgv : public nguoi 
{
    float luongcung, thuong, phat;
public:
    cbgv(string h, int t, string q, string m, float lc, float th, float ph) : nguoi(h, t, q, m), luongcung(lc), thuong(th), phat(ph) {}
    float thuclinh() { return luongcung + thuong - phat; }
};
class quanly 
{
    vector<cbgv> ds;
public:
    void them(cbgv gv) { ds.push_back(gv); }
    void xoa(string ma) 
    {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if (it->laymsgv() == ma) { ds.erase(it); break; }
        }
    }
};