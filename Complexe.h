#pragma once
class Complexe
{
private:
	double re;
	double img;
public:
	Complexe(double, double);
	Complexe(const Complexe& c);
	Complexe operator+(Complexe d);
	Complexe operator+(double a);
	Complexe operator/(double p);
	Complexe operator/(Complexe o);
	Complexe operator*(double k);
	Complexe operator*(Complexe n);
	bool operator==(Complexe c);
	bool operator!=(Complexe c);
	bool operator<(Complexe c);
	bool operator>(Complexe c);
	void afficher() const;
	~Complexe();
};

