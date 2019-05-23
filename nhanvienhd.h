#ifndef nhanvienhd_H
#define nhanvienhd_h

#include"nhanVien.h"
class nhanVienhd:public NhanVien
{
	int luongtime;
	int time;
	int overtime;
private:
	nhanVienhd();
	nhanVienhd(string ,string ,string ,int ,int,int);
	int getluong()const;
	int getluong_fix()const;
	void setluong(int );
	void settime(int );
	void setovertime(int);
};
nhanVienhd::nhanVienhd() : luongtime(0),time(0),overtime(0){};
nhanVienhd::nhanVienhd(string a,string b,string c,int luong,int time,int over)
{
	setName(a);
	setMaNhanVien(b);
	setMaSoThue(c);
	this->luongtime=luong;
	this->time=time;
	this->overtime=over;
}
int nhanVienhd::getluong()const
{
	if(this->time>40)
		return this->luongtime*time+overtime;
	else 
		return this->luongtime*time;
}
int nhanVienhd::getluong_fix()const
{	
}
void nhanVienhd::setluong(int luong)
{
	this->luongtime=luong;	
}
void nhanVienhd::settime(int time)
{
	this->time=time;	
}
void nhanVienhd::setovertime(int over)
{
	this->overtime=over;	
}
#endif
