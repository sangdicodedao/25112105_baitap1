#include<bits/stdc++.h>
using namespace std;
class sinhvien 
{
    string hoten;
    int tuoi;
    string lop;
public:
    sinhvien(string h, int t, string l) : hoten(h), tuoi(t), lop(l) {}
    void in() { cout << hoten << " " << tuoi << " " << lop << "\n"; }
};
class themuon 
{
    string maphieu;
    int ngaymuon, hantra, sosach;
    sinhvien sv;
public:
    themuon(string m, int nm, int ht, int ss, sinhvien s) : maphieu(m), ngaymuon(nm), hantra(ht), sosach(ss), sv(s) {}
    string layma() { return maphieu; }
    void in() 
    {
        cout << maphieu << " " << ngaymuon << " " << hantra << " " << sosach << "\n";
        sv.in();
    }
};
class quanly 
{
    vector<themuon> ds;
public:
    void them(themuon tm) { ds.push_back(tm); }
    void xoa(string ma) 
    {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if (it->layma() == ma) { ds.erase(it); break; }
        }
    }
    void in() { for (auto tm : ds) tm.in(); }
};