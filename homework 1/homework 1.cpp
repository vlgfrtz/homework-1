
#include <iostream>
using namespace std;

int main()
{
	//ZADANIE 1
	string nrAlbumu = "w66680";

	cout << "Nr albumu: " << nrAlbumu << endl;
	cout << "\n";

	//ZADANIE 2
	int liczba;

	cout << "Wprowadz liczbe, aby sprawdzic, czy jest parzysta: \n";
	cin >> liczba;
	if (liczba % 2 == 0)
		cout << "Liczba " << liczba << " jest parzysta." << endl;
	else
		cout << "Liczba " << liczba << " jest nieparzysta." << endl;
	cout << "\n";

	//ZADANIE 2
	float g, h;

	cout << "Wprowadz 2 liczby, aby sprawdzic, ktora jest wieksza: \n";
	cin >> g >> h;
	if (g > h)
		cout << "Liczba " << g << " jest wieksza od liczby " << h << "." << endl;
	if (h > g)
		cout << "Liczba " << h << " jest wieksza od liczby " << g << "." << endl;
	if (g == h)
		cout << "Liczby sa rowne." << endl;
	cout << "\n";

	//ZADANIE 4
	float c, d, e, f;

	cout << "Wpisz 4 liczby, aby wyliczyc z nich srednia arytmetyczna\n";
	cin >> c >> d >> e >> f;
	cout << "Srednia artymetyczna Twoich liczb wynosi " << (c + d + e + f) / 2 << "." << endl;
	cout << "\n";

	//ZADANIE 5
	float a, b;
	int wybor;

	cout << "Podaj 2 liczby: \n";
	cin >> a >> b;
	cout << "\nDzialanie: \n 1. Suma\n 2. Roznica\n 3. Iloczyn\n 4. Iloraz\n";
	cout << "Wybierz opcje: ", cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Suma " << a << " + " << b << " = " << a + b << endl;
		break;
	case 2:
		cout << "Roznica " << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << "Iloczyn " << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		cout << "Iloraz " << a << " / " << b << " = " << a / b << endl;
		break;
	default:
		cout << "Nie ma takiej opcji.\n";
		break;

	}
}