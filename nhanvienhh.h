#ifndef nhanvienhh_H
#define nhanvienhh_H

#include"nhanVien.h"
class nhanVienhh:public NhanVien
{
	int doanhthu;
public:
	nhanVienhh();
	nhanVienhh(string ,string ,string ,int);
	int getluong()const;
	int getluong_fix()const;
	int getdoanhthu()const;
	void setdoanhthu(int );
};
nhanVienhh::nhanVienhh() : doanhthu(0){};
nhanVienhh::nhanVienhh(string a,string b,string c,int doanhthu)
{
	setName(a);
	setMaNhanVien(b);
	setMaSoThue(c);
	this->doanhthu=doanhthu;
}
int nhanVienhh::getluong()const
{
	return this->doanhthu*0,4;
}
int nhanVienhh::getluong_fix()const
{	
}
void nhanVienhh::setdoanhthu(int a)
{
	this->doanhthu=a;	
}
int nhanVienhh::getdoanhthu()const
{
	return this->doanhthu;	
}
#endif
