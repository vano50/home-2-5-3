#include <iostream>
#include <string>


class treugolnik {
protected:
	int a, b, c, A, B, C;
	std::string name;
public:
	treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	treugolnik() { a = 10, b = 20, c = 30, A = 50, B = 60, C = 70, name = "Треугольник:"; }
	std::string check(int A, int B, int C) {
		if (A + B + C == 180) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	std::string print_info() { return "Количество сторон: 3"; }
	std::string get_name() { return name; }
	virtual void vivod() { std::cout  << get_name() << "\n" << check(A, B, C) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class pryamougolnii_treugolnik : public treugolnik {
public:
	pryamougolnii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	pryamougolnii_treugolnik() { C = 90, name = "Прямоугольный треугольник:"; }
	std::string check(int C) {
		if (C == 90) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(C) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnobedrenii_treugolnik : public treugolnik {
public:
	ravnobedrenii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	ravnobedrenii_treugolnik() { c = 10, C = 50, name = "Равнобедренный треугольник:"; }
	std::string check(int a, int c, int A, int C) {
		if ((a == c) && (A == C)) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(a, c, A, C) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class ravnostoronii_treugolnik : public treugolnik {
public:
	ravnostoronii_treugolnik(int a, int b, int c, int A, int B, int C, std::string name) {}
	ravnostoronii_treugolnik() { a = 30, b = 30, A = 60, C = 60, name = "Равносторонний треугольник:"; }
	std::string check(int a, int b, int c, int A, int B, int C) {
		if (((a == b) && (b == c)) && ((A == B) && (B == C) && (C == 60))) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(a, b, c, A, B, C) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
};

class kvadrat {
protected:
	int a, b, c, d, A, B, C, D;
	std::string name;
public:
	kvadrat(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	kvadrat() { a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90, name = "Квадрат:"; }
	std::string check(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (((a == b) && (b == c)) && ((c == d)) && ((A == B)) && ((B == C) && (C == D)) && (D == 90)) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	std::string print_info() { return "Количество сторон: 4"; }
	std::string get_name() { return name; }
	virtual void vivod() { std::cout << get_name() << "\n" << check(a, b, c, d, A, B, C, D) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D << "\n" << "\n"; }
};

class pryamougolnik : public kvadrat {
public:
	pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	pryamougolnik() { a = 10, c = 10, name = "Прямоугольник:"; }
	std::string check(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (((a == c) && (b == d)) && (((A == B)) && ((B == C) && (C == D)) && (D == 90))) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(a, b, c, d, A, B, C, D) <<  print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << "\n";
	}
};

class chetyrehugolnik : public kvadrat {
public:
	chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	chetyrehugolnik() { a = 10, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80, name = "Четырёхугольник:"; }
	std::string check(int A, int B, int C, int D) {
		if (A + B + C+ D == 360) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(A, B, C, D) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << "\n";
	}
};


class parallerogramm : public kvadrat {
public:
	parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	parallerogramm() { b = 30, d = 30, A = 30, B = 40, C = 30, D = 40, name = "Параллелограмм:"; }
	std::string check(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (((a == c) && (b == d)) && ((A == C) && (B == D))) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(a, b, c, d, A, B, C, D) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << "\n";
	}
};

class romb : public kvadrat {
public:
	romb(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {}
	romb() { a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40, name = "Ромб:"; }
	std::string check(int a, int b, int c, int d, int A, int B, int C, int D) {
		if ((((a == b) && (b == c)) && (c == d)) && ((A == C) && (B == D))) { return "Правильная\n"; }
		else { return "Не правильная\n"; }
	}
	void vivod() override { std::cout << get_name() << "\n" << check(a, b, c, d, A, B, C, D) << print_info() << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << "\n";
	}
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	treugolnik treug; // Родитель
	pryamougolnii_treugolnik pryamtreug;
	ravnobedrenii_treugolnik ravnobed_treug;
	ravnostoronii_treugolnik ravnostor_treug;
	chetyrehugolnik chetyrehugolnik;
	pryamougolnik pryamoug;
	kvadrat kvad; // Родитель
	parallerogramm paraller;
	romb romb;


	treug.vivod(); // Родитель

	treugolnik* pryamtreug2 = &pryamtreug;
	pryamtreug2->vivod();

	treugolnik* ravnobed_treug2 = &ravnobed_treug;
	ravnobed_treug2->vivod();

	treugolnik* ravnostor_treug2 = &ravnostor_treug;
	ravnostor_treug2->vivod();

	kvad.vivod(); // Родитель

	kvadrat* pryamoug2 = &pryamoug;
	pryamoug2->vivod();

	kvadrat* chetyrehugolnik2 = &chetyrehugolnik;
	chetyrehugolnik2->vivod();

	kvadrat* paraller2 = &paraller;
	paraller2->vivod();

	kvadrat* romb2 = &romb;
	romb2->vivod();
}