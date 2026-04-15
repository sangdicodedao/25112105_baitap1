#include<bits/stdc++.h>
using namespace std;
class khachhang 
{
    string chuhu, sonha, macongto;
public:
    khachhang(string c, string s, string m) : chuhu(c), sonha(s), macongto(m) {}
    string layma() { return macongto; }
    void in() { cout << chuhu << " " << sonha << " " << macongto << "\n"; }
};
class bienlai 
{
    khachhang kh;
    int socu, somoi;
public:
    bienlai(khachhang k, int c, int m) : kh(k), socu(c), somoi(m) {}
    string layma() { return kh.layma(); }
    void in() 
    {
        kh.in();
        cout << socu << " " << somoi << " " << tinhtien() << "\n";
    }
    int tinhtien() { return (somoi - socu) * 5; }
    void sua(int c, int m) { socu = c; somoi = m; }
};
class quanly 
{
    vector<bienlai> ds;
public:
    void them(bienlai bl) { ds.push_back(bl); }
    void xoa(string ma) 
    {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if (it->layma() == ma) { ds.erase(it); break; }
        }
    }
    void sua(string ma, int c, int m) 
    {
        for (auto& bl : ds) if (bl.layma() == ma) bl.sua(c, m);
    }
};