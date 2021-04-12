#include <iostream>
#include <math.h>
#include <string>
using namespace std;

#define max 1000

class SanPham
{
private:
    string ma_san_pham_;
    string ten_san_pham_;
    int gia_;
    int phan_tram_khuyen_mai_;
    int so_luong_;

public:
    SanPham(){};
    void NhapThongTinSanPham();
    void NhapMaSanPham();
    void NhapTenSanPham();
    void NhapGia();
    void NhapPhanTramKhuyenMai();
    void NhapSoLuong();
    void InThongTinSanPham();
    void ThayDoiThongTin();
};

class Mouse : public SanPham{
private:
    string mau_[2] = {"Xanh", "Do", "Tim"};
public:
};

class DanhSachSanPham
{
private:

public:
};