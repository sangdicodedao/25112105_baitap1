#include<bits/stdc++.h>
using namespace std;

class nhanvien 
{
protected:
    string manv, hoten, gioitinh, diachi;
    int namsinh;
    double hesoluong, luongtoida;
public:
    nhanvien(string m, string h, int ns, string gt, string dc, double hsl, double ltd) 
        : manv(m), hoten(h), namsinh(ns), gioitinh(gt), diachi(dc), hesoluong(hsl), luongtoida(ltd) {}
    virtual void in() 
    {
        cout << "Ma: " << manv << ", Ten: " << hoten << ", Nam sinh: " << namsinh << ", HSL: " << hesoluong << "\n";
    }
};

class congtacvien : public nhanvien 
{
    string thoihan;
    double phucap_ld;
public:
    congtacvien(string m, string h, int ns, string gt, string dc, double hsl, double ltd, string th, double pc) 
        : nhanvien(m, h, ns, gt, dc, hsl, ltd), thoihan(th), phucap_ld(pc) {}
    void in() override 
    {
        nhanvien::in();
        cout << "- Thoi han HĐ: " << thoihan << ", Phu cap LD: " << phucap_ld << "\n";
    }
};

class chinhthuc : public nhanvien 
{
    string vitri;
public:
    chinhthuc(string m, string h, int ns, string gt, string dc, double hsl, double ltd, string vt) 
        : nhanvien(m, h, ns, gt, dc, hsl, ltd), vitri(vt) {}
    void in() override 
    {
        nhanvien::in();
        cout << "- Vi tri cong viec: " << vitri << "\n";
    }
};

class truongphong : public nhanvien 
{
    string ngaybatdau;
    double phucap_ql;
public:
    truongphong(string m, string h, int ns, string gt, string dc, double hsl, double ltd, string nbd, double pc) 
        : nhanvien(m, h, ns, gt, dc, hsl, ltd), ngaybatdau(nbd), phucap_ql(pc) {}
    void in() override 
    {
        nhanvien::in();
        cout << "- Ngay bat dau: " << ngaybatdau << ", Phu cap QL: " << phucap_ql << "\n";
    }
};

class phongban 
{
    vector<nhanvien*> ds;
public:
    void them(nhanvien* nv) { ds.push_back(nv); }
    void in() { for (auto nv : ds) nv->in(); }
};