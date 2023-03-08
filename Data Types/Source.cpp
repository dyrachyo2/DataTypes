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
	cout << "Привет DataTypes" << endl;
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
	//identifire - это имя

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
	//проинициализировать
	//инициализация - это присвоение начального значения.
	int a;      //объявление переменной без инициализации
	int b;      //инициализация переменной при объявлении
	int c;
	c = 0;      //инициализация переменной после объявления,при помощи присвоения.
	int d;
	cout << "Введите число:"; cin >> d; //инициализация вводом с клавиатуры 

#endif // DECLARATTION_AND_INITIALISATION


#ifdef COFFEE
	double price_of_coffe;
	int number_of_cups;
	cout << "Введите стоимость кофе: "; cin >> price_of_coffe;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;
#endif // COFFEE


#ifdef ZADACHA1

	double money, g;
	int k;
	cout << "Введите дробное число: "; cin >> money;
	k = money;
	g = (money - k) * 100;
	cout << k << " Гривен " << g << " Копеек " << endl;

#endif // ZADACHA1


#ifdef ZADACHA2
	double price_of_notebook, numbers_of_notebook, price_of_pencil, numbers_of_pencil;
	cout << "Введите стоимость тетрадки: "; cin >> price_of_notebook;
	cout << "Введите количество тетрадей: "; cin >> numbers_of_notebook;
	cout << "Введите стоимость карандаша: "; cin >> price_of_pencil;
	cout << "Введите количество карандашей: "; cin >> numbers_of_pencil;
	double total_price = price_of_notebook * numbers_of_notebook + price_of_pencil * numbers_of_pencil;
	cout << "Общая стоимость: " << total_price << endl;

#endif // ZADACHA2


#ifdef ZADACHA3
	double notebook_price, cover_price, number_of_sets;
	cout << "Введите стоимость тетради: "; cin >> notebook_price;
	cout << "Введите стоимость обложки: "; cin >> cover_price;
	cout << "Введите количество комплектов: "; cin >> number_of_sets;
	double total_price = (notebook_price + cover_price) * number_of_sets;
	cout << "Общая стоимость: " << total_price << endl;

#endif // ZADACHA3


#ifdef ZADACHA4
	double distance_to_cottage, gasoline_consumption, gasoline_price;
	cout << "Расстояние до дачи: "; cin >> distance_to_cottage;
	cout << "Расход бензина: "; cin >> gasoline_consumption;
	cout << "Цена бензина: "; cin >> gasoline_price;
	double total_price = distance_to_cottage / gasoline_consumption * gasoline_price;
	cout << "Общая стоимость: " << total_price << endl;
#endif // ZADACHA4


#ifdef KONSTANTI
	int speed = 0;
	const int MAX_SPEED = 250; //Константы всегда пишутся с заглавных букв 
	//Литералы это элементы кода которые воспринимаются "как есть".
	cout << 5 << endl; //5 это числовая константа типа "int"
	cout << sizeof(5) << endl;//5 это числовая константа типа "int" 
	cout << typeid(5).name() << endl; //5. это числовая константа типа "double"
	cout << typeid(.5f).name() << endl; //.5f Это числовая константа типа "float"
	//.5ULL Это числовая константа типа "Unsigned long long"

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;

#endif // KONSTANTI


#ifdef TESTIROVCHIK
	int voina;
	cout << "Вопрос 1.Когда началась вторая мировая война: \n\n";
	cout << "Варинаты ответов: 1. 1945 - 5 сентабря | 2. 1943 - 20 марта | 3. Вчера | 4. 1939 - 1 сентября \n\n";
	cout << "Введите соответствующую ответу цифру (от 1 до 4)\n\n";
	cout << "Ваш ответ: ";
	cin >> voina;
	if (voina == 4)
	{
		cout << "Правильно" << endl;
	}
	else
	{
		cout << "Не правильно" << endl;
	}
	cout << "\n\n";
	int prepodavatel;
	cout << "Вопрос 2.Как зовут нашего преподавателя: \n\n";
	cout << "Варианты ответов: 1.Антипов Антон Олегович |2.Сарычев Олег Юрьевич |3.Ковтун Олег Анатольевич |4.Пупкин Кирил Салатович \n\n";
	cout << "Введите соответствующую ответу цифру (от 1 до 4)\n\n";
	cout << "Ваш ответ: ";
	cin >> prepodavatel;
	if (prepodavatel == 3)
	{
		cout << "Правильно" << endl;
	}
	else
	{
		cout << "Не правильно" << endl;
	}
	cout << "\n\n";
	int proc;
	cout << "Вопрос 3.Что лучше INTEL или AMD: \n\n";
	cout << "Варианты ответов: 1. INTEL | 2.AMD | 3.Не знаю | 4.Лучше без процессора \n\n ";
	cout << "Введите соответствующую ответу цифру (от 1 до 4)\n\n";
	cout << "Ваш ответ: ";
	cin >> proc;
	if (proc == 1)
	{
		cout << "Правильно" << endl;
	}
	else
	{
		cout << "Не правильно" << endl;
	}
	cout << "\n\n";
	int time_proc;
	cout << "Вопрос 4.Когда вышел первый процессор INTEL: \n\n";
	cout << "Варианты ответов: 1. 2015 - 2 ноября | 2. 1971 - 15 ноября | 3. 2000 - 25 марта | 4. У INTEL нет процессоров \n\n";
	cout << "Введите соответствующую ответу цифру (от 1 до 4)\n\n";
	cout << "Ваш ответ: ";
	cin >> time_proc;
	if (time_proc == 2)
	{
		cout << "Правильно" << endl;
	}
	else
	{
		cout << "Не правильно" << endl;
	}
	cout << "\n\n";
	int kreshenie;
	cout << "Вопрос 5.Когда крестили Русь: \n\n";
	cout << "Варианты ответов: 1.2000 году | 2. Неделю назад | 3. 988году | 4. Ее не крестили \n\n";
	cout << "Введите соответствующую ответу цифру (от 1 до 4)\n\n";
	cout << "Ваш ответ: ";
	cin >> kreshenie;
	if (kreshenie == 3)
	{
		cout << "Праивльно" << endl;
	}
	else
	{
		cout << "Не правильно" << endl;
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
	cout << "Введите выражение"; cin >> cal; cin >> sign; cin >> cul;
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








