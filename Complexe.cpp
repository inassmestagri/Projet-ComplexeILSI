#include "Complexe.h"
#include <iostream>
using namespace std;
Complexe::Complexe(double re, double img):re(re),img(img)
{
}

Complexe::Complexe(const Complexe& c)
{
	this->re = c.re;
	this->img = c.img;
}

Complexe Complexe::operator+(Complexe d)
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re + d.re;
	res->img = this->img + d.img;
	return *res;
}

Complexe Complexe::operator+(double a)
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re +a;
	res->img = this->img +0.0;
	return *res;
}

Complexe Complexe::operator*(double k)
{
	Complexe res(0.0, 0.0);
	res.re = this->re * k;
	res.img = this->img * k;
	return res;
}
Complexe Complexe::operator*(Complexe n)
{
	Complexe res(0.0, 0.0);
	res.re = this->re * n.re - this->img * n.img;
	res.img = this->re * n.img + this->img * n.re;
	return res;
}
bool Complexe::operator==(Complexe c)
{
	return this->re == c.re && this->img == c.img;
}
Complexe Complexe::operator/(double p)
{
	Complexe res(0.0, 0.0);
	if (p != 0) {
		res.re = this->re / p;
		res.img = this->img / p;
	}
	else {
		cout << "divison incorrecte" << endl;
	}
	return res;
}
Complexe Complexe::operator/(Complexe o)
{
	Complexe res(0.0, 0.0);

	double d = o.re * o.re + o.img * o.img;
	if (d != 0) {
		res.re = (this->re * o.re + this->img * o.img) / d;
		res.img = (this->img * o.re - this->re * o.img) / d;
	}
	else {
		cout << "divison incorrecte" << endl;
	}
	return res;
}
bool Complexe::operator!=(Complexe c)
{
	return !(*this == c);
}
bool Complexe::operator<(Complexe c)
{
	return (this->re * this->re + this->img * this->img)
		< (c.re * c.re + c.img * c.img);
}
bool Complexe::operator>(Complexe c)
{
	return c < *this;
}
void Complexe::afficher() const
{
	cout << this->re << "+i" << this->img<<endl;
}

Complexe::~Complexe()
{
}


