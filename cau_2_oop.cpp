#include<bits/stdc++.h>
using namespace std;
class tailieu 
{
protected:
    string ma;
    string nxb;
    int soban;
public:
    tailieu(string m, string n, int s) : ma(m), nxb(n), soban(s) {}
    virtual void in() { cout << ma << " " << nxb << " " << soban << "\n"; }
    string layma() { return ma; }
    virtual int loai() = 0;
};
class sach : public tailieu 
{
    string tacgia;
    int sotrang;
public:
    sach(string m, string n, int s, string t, int st) : tailieu(m, n, s), tacgia(t), sotrang(st) {}
    void in() override { tailieu::in(); cout << tacgia << " " << sotrang << "\n"; }
    int loai() override { return 1; }
};
class tapchi : public tailieu 
{
    int sophathanh;
    int thang;
public:
    tapchi(string m, string n, int s, int sp, int th) : tailieu(m, n, s), sophathanh(sp), thang(th) {}
    void in() override { tailieu::in(); cout << sophathanh << " " << thang << "\n"; }
    int loai() override { return 2; }
};
class bao : public tailieu 
{
    int ngay;
public:
    bao(string m, string n, int s, int ng) : tailieu(m, n, s), ngay(ng) {}
    void in() override { tailieu::in(); cout << ngay << "\n"; }
    int loai() override { return 3; }
};
class quanlysach 
{
    vector<tailieu*> ds;
public:
    void them(tailieu* tl) { ds.push_back(tl); }
    void xoa(string ma) {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if ((*it)->layma() == ma) { ds.erase(it); break; }
        }
    }
    void hienthi() { for (auto tl : ds) tl->in(); }
    void tim(int l) 
    {
        for (auto tl : ds) if (tl->loai() == l) tl->in();
    }
};