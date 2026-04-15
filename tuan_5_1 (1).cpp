#include<bits/stdc++.h>
using namespace std;

class hanghoa 
{
protected:
    string mahang, tenhang, nhasx;
    double gia;
public:
    hanghoa(string m, string t, string n, double g) : mahang(m), tenhang(t), nhasx(n), gia(g) {}
    virtual void in() {
        cout << "Ma: " << mahang << ", Ten: " << tenhang << ", NSX: " << nhasx << ", Gia: " << gia << "\n";
    }
};

class dienmay : public hanghoa 
{
    int baohanh, dienap, congsuat;
public:
    dienmay(string m, string t, string n, double g, int bh, int da, int cs) 
        : hanghoa(m, t, n, g), baohanh(bh), dienap(da), congsuat(cs) {}
    void in() override {
        hanghoa::in();
        cout << "- Bao hanh: " << baohanh << " thang, Dien ap: " << dienap << "V, Cong suat: " << congsuat << "W\n";
    }
};

class sanhsu : public hanghoa 
{
    string nguyenlieu;
public:
    sanhsu(string m, string t, string n, double g, string nl) 
        : hanghoa(m, t, n, g), nguyenlieu(nl) {}
    void in() override 
    {
        hanghoa::in();
        cout << "- Nguyen lieu: " << nguyenlieu << "\n";
    }
};

class thucpham : public hanghoa 
{
    string ngaysx, hethan;
public:
    thucpham(string m, string t, string n, double g, string nsx, string hsd) 
        : hanghoa(m, t, n, g), ngaysx(nsx), hethan(hsd) {}
    void in() override 
    {
        hanghoa::in();
        cout << "- Ngay SX: " << ngaysx << ", Het han: " << hethan << "\n";
    }
};

class quanlyhang 
{
    vector<hanghoa*> ds;
public:
    void them(hanghoa* h) { ds.push_back(h); }
    void in() { for (auto h : ds) h->in(); }
};