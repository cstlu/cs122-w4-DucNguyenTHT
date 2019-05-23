#ifndef nhanVien_H
#define nhanVien_H
class NhanVien
{
	string name;
	string maNhanVien;
	string maSoThue;
public:
	NhanVien();
	NhanVien(string,string,string);
	void setName(string);
	void setMaNhanVien(string);
	void setMaSoThue(string);
	string getName()const;
	string getMaNhanVien()const;
	string getMaSoThue()const;	
	int getluong()const;
};
//constructer
NhanVien::NhanVien() : name(" "),maNhanVien(" "),maSoThue(" ") {};
NhanVien::NhanVien(string a,string b,string c) :name(a),maNhanVien(b),maSoThue(c){};
//setters
void NhanVien::setName(string a)
{
	this->	name=a;
}
void NhanVien::setMaNhanVien(string b)
{
	this->maNhanVien=b;	
}
void NhanVien::setMaSoThue(string c)
{
	this->maSoThue=c;	
}
//getters
string NhanVien::getName() const
{
	return this->name;	
}
string NhanVien::getMaNhanVien()const
{
	return this->maNhanVien	;
}
string NhanVien::getMaSoThue()const
{
	return this->maSoThue;	
}
int NhanVien::getluong()const
{
	return 0;	
}

#endif
