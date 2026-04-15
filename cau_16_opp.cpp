#include <bits/stdc++.h>
using namespace std;
class loi : public exception 
{
    string msg;
public:
    loi(string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};
class sinhvien 
{
protected:
    string hoten, ngaysinh, gioitinh, sdt, truong, xeploai;
public:
    sinhvien(string h, string ns, string gt, string s, string tr, string xl) : hoten(h), ngaysinh(ns), gioitinh(gt), sdt(s), truong(tr), xeploai(xl) {
        if (h.length() < 10 || h.length() > 50) throw loi("loi ten");
        if (s.length() != 10) throw loi("loi sdt");
    }
    virtual void in() { cout << hoten << " " << sdt << "\n"; }
    string layten() { return hoten; }
    string laysdt() { return sdt; }
    virtual float laygpa() { return 0; }
    virtual float layvao() { return 0; }
    virtual float laytoeic() { return 0; }
};
class khagioi : public sinhvien 
{
    float gpa; string hocbong;
public:
    khagioi(string h, string ns, string gt, string s, string tr, float g, string hb) : sinhvien(h, ns, gt, s, tr, "gioi"), gpa(g), hocbong(hb) {}
    float laygpa() override { return gpa; }
};
class trungbinh : public sinhvien 
{
    float toeic, vao;
public:
    trungbinh(string h, string ns, string gt, string s, string tr, float to, float v) : sinhvien(h, ns, gt, s, tr, "trung binh"), toeic(to), vao(v) {}
    float layvao() override { return vao; }
    float laytoeic() override { return toeic; }
};
bool sosanh(sinhvien* a, sinhvien* b) 
{
    if (a->layten() != b->layten()) return a->layten() > b->layten();
    return a->laysdt() < b->laysdt();
}