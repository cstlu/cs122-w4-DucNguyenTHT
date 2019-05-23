#ifndef hoahongdb_h
#define hoahongdb_h

#include"nhanvienhh.h"
class nhanVienhhdb:public nhanVienhh
{
	int basesalary;
private:
	nhanVienhhdb();
	nhanVienhhdb(string ,string ,string ,int,int);
	int getluong()const;
	int getluong_fix()const;
	int getbasesalary()const;
	void setbasesalary(int );
};
nhanVienhhdb::nhanVienhhdb() : basesalary(0) {};
nhanVienhhdb::nhanVienhhdb(string a,string b,string c,int base,int salary)
{
	setName(a);
	setMaNhanVien(b);
	setMaSoThue(c);
	this->basesalary=base;
	setdoanhthu(salary);
}
int nhanVienhhdb::getluong()const
{
	return this->getdoanhthu()*0,4+this->basesalary*0,1;
}
int nhanVienhhdb::getluong_fix()const
{	
}
void nhanVienhhdb::setbasesalary(int a)
{
	this->basesalary=a;	
}
int nhanVienhhdb::getbasesalary() const
{
	return this->basesalary;	
}
#endif
