#include<bits/stdc++.h>
using namespace std;
class ptgt 
{
protected:
    string id, hang, mau;
    int nam;
    double gia;
public:
    ptgt(string i, string h, int n, double g, string m) : id(i), hang(h), nam(n), gia(g), mau(m) {}
    virtual void in() { cout << id << " " << hang << " " << nam << " " << gia << " " << mau << "\n"; }
    string layid() { return id; }
    string layhang() { return hang; }
    string laymau() { return mau; }
};
class oto : public ptgt 
{
    int cho; string dongco;
public:
    oto(string i, string h, int n, double g, string m, int c, string d) : ptgt(i, h, n, g, m), cho(c), dongco(d) {}
    void in() override { ptgt::in(); cout << cho << " " << dongco << "\n"; }
};
class xemay : public ptgt 
{
    double congsuat;
public:
    xemay(string i, string h, int n, double g, string m, double c) : ptgt(i, h, n, g, m), congsuat(c) {}
    void in() override { ptgt::in(); cout << congsuat << "\n"; }
};
class xetai : public ptgt 
{
    double trongtai;
public:
    xetai(string i, string h, int n, double g, string m, double t) : ptgt(i, h, n, g, m), trongtai(t) {}
    void in() override { ptgt::in(); cout << trongtai << "\n"; }
};
class quanly 
{
    vector<ptgt*> ds;
public:
    void them(ptgt* p) { ds.push_back(p); }
    void xoa(string id) 
    {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if ((*it)->layid() == id) { ds.erase(it); break; }
        }
    }
    void tim(string hang, string mau) 
    {
        for (auto p : ds) if (p->layhang() == hang && p->laymau() == mau) p->in();
    }
};