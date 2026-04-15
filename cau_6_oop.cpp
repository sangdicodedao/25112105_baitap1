#include<bits/stdc++.h>
using namespace std;
class hocsinh 
{
    string hoten;
    int tuoi;
    string quequan;
    string lop;
public:
    hocsinh(string h, int t, string q, string l) : hoten(h), tuoi(t), quequan(q), lop(l) {}
    void in() { cout << hoten << " " << tuoi << " " << quequan << " " << lop << "\n"; }
    int laytuoi() { return tuoi; }
    string layque() { return quequan; }
};
class quanly 
{
    vector<hocsinh> ds;
public:
    void them(hocsinh hs) { ds.push_back(hs); }
    void in20() 
    {
        for (auto hs : ds) if (hs.laytuoi() == 20) hs.in();
    }
    int dem23dn() 
    {
        int d = 0;
        for (auto hs : ds) if (hs.laytuoi() == 23 && hs.layque() == "dn") d++;
        return d;
    }
};