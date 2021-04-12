#include "classDeclaration.h"

void SanPham::NhapMaSanPham()
{
    cout << "\n"
         << "Nhap ma san pham:" << endl;
    getline(cin, ma_san_pham_);
}
void SanPham::NhapTenSanPham()
{
    cout << "Nhap ten pham:" << endl;
    getline(cin, ten_san_pham_);
}
void SanPham::NhapGia()
{
    cout << "Nhap gia:" << endl;
    cin >> gia_;
}
void SanPham::NhapPhanTramKhuyenMai()
{
    cout << "Nhap phan tram khuyen mai:" << endl;
    cin >> phan_tram_khuyen_mai_;
}
void SanPham::NhapSoLuong()
{
    cout << "Nhap so luong:" << endl;
    cin >> so_luong_;
}

void SanPham::NhapThongTinSanPham()
{
    NhapMaSanPham();
    NhapTenSanPham();
    NhapGia();
    NhapPhanTramKhuyenMai();
    NhapSoLuong();
}
void SanPham::InThongTinSanPham()
{
    cout << "==========================" << endl;
    cout << "Thong tin san pham:\n\n";
    cout << "Ma san pham:\t" << ma_san_pham_ << endl;
    cout << "Ten san pham:\t" << ten_san_pham_ << endl;
    cout << "Gia tien:\t" << gia_ << "d" << endl;
    cout << "Khuyen mai:\t" << phan_tram_khuyen_mai_ << "%" << endl;
    cout << "Gia khuyen mai:\t" << gia_ * (100 - phan_tram_khuyen_mai_) / 100 << "d" << endl;
    cout << "So luong:\t" << so_luong_ << endl;
    cout << "==========================" << endl;
}
void SanPham::ThayDoiThongTin()
{
    int status;
    cout << "==========================" << endl;
    cout << "Chon thong tin can thay doi\n\n";
    cout << "1.\tMa san pham" << endl;
    cout << "2.\tTen san pham" << endl;
    cout << "3.\tGia tien" << endl;
    cout << "4.\tPhan tram khuyen mai" << endl;
    cout << "5.\tSo luong" << endl;
    cout << "6.\tIn thong tin san pham" << endl;
    cout << "7.\tMenu" << endl;
    cout << "8.\tThoat chuong trinh" << endl;
    cout << "==========================" << endl;

    while (true)
    {
        cout << "Nhap: " << endl;
        cin >> status;
        if (status == 1)
            NhapMaSanPham();
        else if (status == 2)
            NhapTenSanPham();
        else if (status == 3)
            NhapGia();
        else if (status == 4)
            NhapPhanTramKhuyenMai();
        else if (status == 5)
            NhapSoLuong();
        else if (status == 6)
            InThongTinSanPham();
        else if (status == 7)
        {
            cout << "==========================" << endl;
            cout << "Chon thong tin can thay doi\n\n";
            cout << "1.\tMa san pham" << endl;
            cout << "2.\tTen san pham" << endl;
            cout << "3.\tGia tien" << endl;
            cout << "4.\tPhan tram khuyen mai" << endl;
            cout << "5.\tSo luong" << endl;
            cout << "6.\tIn thong tin san pham" << endl;
            cout << "7.\tMenu" << endl;
            cout << "8.\tThoat chuong trinh" << endl;
            cout << "==========================" << endl;
        }
        else if (status == 8)
            break;
        else
            break;
    }
}