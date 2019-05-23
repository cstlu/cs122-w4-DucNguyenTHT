#ifndef nhanvienbienche_H
#define nhanvienbienche_H
#include"nhanVien.h"
class nhanVienBienche:public NhanVien
{
	int luongCung;
private:
	nhanVienBienche();
	nhanVienBienche(string ,string ,string ,int );
	int getluong()const;
	int getluong_fix()const;
	void setluong(int );
};
nhanVienBienche::nhanVienBienche() : luongCung(0){};
nhanVienBienche::nhanVienBienche(string a,string b,string c,int luong)
{
	setName(a);
	setMaNhanVien(b);
	setMaSoThue(c);
	this->luongCung=luong;
}
int nhanVienBienche::getluong()const
{
	return this->luongCung;
}
int nhanVienBienche::getluong_fix()const
{
	return this->luongCung;	
}
void nhanVienBienche::setluong(int luong)
{
	this->luongCung=luong;	
}

#endif
