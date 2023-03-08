#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define LOGICAL_TYPES
//#define DATA_TYPES
//#define DECLARATION_AND_INITIALISATION
//#define COFFEE
//#define ZADACHA1
//#define ZADACHA2
//#define ZADACHA3
//#define ZADACHA4
//#define KONSTANTI
//#define KALKULATOR
//#define TESTIROVCHIK
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������ DataTypes" << endl;
#if defined 
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.0000000001 << endl;
#endif


#if defined
	cout << "long long:\n";
	cout << sizeof(long long) << endl;;
	cout << " signed long long:" << LLONG_MIN << "..." << LLONG_MAX << endl;;
	cout << "unsigned long long:" << 0 << "..." << ULLONG_MAX << endl;
	cout << "\n----------------------------\n";
	cout << sizeof(float) << endl;;
	cout << FLT_MIN << "..." << FLT_MAX << endl;;
	cout << "\n----------------------------\n";

	cout << "double:\n";
	cout << sizeof(double) << endl;;
	cout << DBL_MIN << "..." << DBL_MAX << endl;;

#endif // DATA_TYPES


#if defined
	//               type name;
	//identifire - ��� ���

	int _1stPlace;
	//int namespace;    //expected an indentifier

	int a;
	int t;
	double price_of_coffe; //snake_case_style
	//int PascalCaseStyle;
	//int CamelCaseStyle;
	//int BigCamel;
	//int smallCamel;
	cout << price_of_coffe << endl;
	//�������������������
	//������������� - ��� ���������� ���������� ��������.
	int a;      //���������� ���������� ��� �������������
	int b;      //������������� ���������� ��� ����������
	int c;
	c = 0;      //������������� ���������� ����� ����������,��� ������ ����������.
	int d;
	cout << "������� �����:"; cin >> d; //������������� ������ � ���������� 

#endif // DECLARATTION_AND_INITIALISATION


#ifdef COFFEE
	double price_of_coffe;
	int number_of_cups;
	cout << "������� ��������� ����: "; cin >> price_of_coffe;
	cout << "������� ���������� �����: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "����� ���������: " << total_price << endl;
#endif // COFFEE


#ifdef ZADACHA1

	double money, g;
	int k;
	cout << "������� ������� �����: "; cin >> money;
	k = money;
	g = (money - k) * 100;
	cout << k << " ������ " << g << " ������ " << endl;

#endif // ZADACHA1


#ifdef ZADACHA2
	double price_of_notebook, numbers_of_notebook, price_of_pencil, numbers_of_pencil;
	cout << "������� ��������� ��������: "; cin >> price_of_notebook;
	cout << "������� ���������� ��������: "; cin >> numbers_of_notebook;
	cout << "������� ��������� ���������: "; cin >> price_of_pencil;
	cout << "������� ���������� ����������: "; cin >> numbers_of_pencil;
	double total_price = price_of_notebook * numbers_of_notebook + price_of_pencil * numbers_of_pencil;
	cout << "����� ���������: " << total_price << endl;

#endif // ZADACHA2


#ifdef ZADACHA3
	double notebook_price, cover_price, number_of_sets;
	cout << "������� ��������� �������: "; cin >> notebook_price;
	cout << "������� ��������� �������: "; cin >> cover_price;
	cout << "������� ���������� ����������: "; cin >> number_of_sets;
	double total_price = (notebook_price + cover_price) * number_of_sets;
	cout << "����� ���������: " << total_price << endl;

#endif // ZADACHA3


#ifdef ZADACHA4
	double distance_to_cottage, gasoline_consumption, gasoline_price;
	cout << "���������� �� ����: "; cin >> distance_to_cottage;
	cout << "������ �������: "; cin >> gasoline_consumption;
	cout << "���� �������: "; cin >> gasoline_price;
	double total_price = distance_to_cottage / gasoline_consumption * gasoline_price;
	cout << "����� ���������: " << total_price << endl;
#endif // ZADACHA4


#ifdef KONSTANTI
	int speed = 0;
	const int MAX_SPEED = 250; //��������� ������ ������� � ��������� ���� 
	//�������� ��� �������� ���� ������� �������������� "��� ����".
	cout << 5 << endl; //5 ��� �������� ��������� ���� "int"
	cout << sizeof(5) << endl;//5 ��� �������� ��������� ���� "int" 
	cout << typeid(5).name() << endl; //5. ��� �������� ��������� ���� "double"
	cout << typeid(.5f).name() << endl; //.5f ��� �������� ��������� ���� "float"
	//.5ULL ��� �������� ��������� ���� "Unsigned long long"

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;

#endif // KONSTANTI


#ifdef TESTIROVCHIK
	int voina;
	cout << "������ 1.����� �������� ������ ������� �����: \n\n";
	cout << "�������� �������: 1. 1945 - 5 �������� | 2. 1943 - 20 ����� | 3. ����� | 4. 1939 - 1 �������� \n\n";
	cout << "������� ��������������� ������ ����� (�� 1 �� 4)\n\n";
	cout << "��� �����: ";
	cin >> voina;
	if (voina == 4)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
	cout << "\n\n";
	int prepodavatel;
	cout << "������ 2.��� ����� ������ �������������: \n\n";
	cout << "�������� �������: 1.������� ����� �������� |2.������� ���� ������� |3.������ ���� ����������� |4.������ ����� ��������� \n\n";
	cout << "������� ��������������� ������ ����� (�� 1 �� 4)\n\n";
	cout << "��� �����: ";
	cin >> prepodavatel;
	if (prepodavatel == 3)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
	cout << "\n\n";
	int proc;
	cout << "������ 3.��� ����� INTEL ��� AMD: \n\n";
	cout << "�������� �������: 1. INTEL | 2.AMD | 3.�� ���� | 4.����� ��� ���������� \n\n ";
	cout << "������� ��������������� ������ ����� (�� 1 �� 4)\n\n";
	cout << "��� �����: ";
	cin >> proc;
	if (proc == 1)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
	cout << "\n\n";
	int time_proc;
	cout << "������ 4.����� ����� ������ ��������� INTEL: \n\n";
	cout << "�������� �������: 1. 2015 - 2 ������ | 2. 1971 - 15 ������ | 3. 2000 - 25 ����� | 4. � INTEL ��� ����������� \n\n";
	cout << "������� ��������������� ������ ����� (�� 1 �� 4)\n\n";
	cout << "��� �����: ";
	cin >> time_proc;
	if (time_proc == 2)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
	cout << "\n\n";
	int kreshenie;
	cout << "������ 5.����� �������� ����: \n\n";
	cout << "�������� �������: 1.2000 ���� | 2. ������ ����� | 3. 988���� | 4. �� �� �������� \n\n";
	cout << "������� ��������������� ������ ����� (�� 1 �� 4)\n\n";
	cout << "��� �����: ";
	cin >> kreshenie;
	if (kreshenie == 3)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
#endif // TESTIROVCHIK


#ifdef KALKULATOR

	int cal;
	int cul;
	char sign = '+'; '-'; '*'; '/';
	int amount;
	int difference;
	int multip;
	int share;
	cout << "������� ���������"; cin >> cal; cin >> sign; cin >> cul;
	if (sign == '+')
	{
		amount = cal + cul;
		cout << amount << endl;
	}
	else if (sign == '-')
	{
		difference = cal - cul;
		cout << difference;
	}
	else if (sign == '*')
	{
		multip = cal * cul;
		cout << multip;
	}
	else if (sign == '/')
	{
		share = cal / cul;
		cout << share;
	}
#endif // KALKULATOR



}








