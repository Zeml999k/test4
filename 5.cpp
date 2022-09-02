#include <iostream>
#include <fstream>
class work
{
private:
	std::string surname;
	int experience;
	int pay;
	int timeWork;
	int pr;
public:
	work() : experience(0), pay(0), timeWork(0){}
	work(std::string name, int ex, int pa, int time) : surname(name), experience(ex), pay(pa), timeWork(time){}
	void PRINTER()
	{
		if(experience < 1) pr = ((experience * timeWork) / 100) * 0;
		if(experience > 1 && experience < 3) pr = ((experience * timeWork) / 100) * 5;
		if(experience > 3 && experience < 5) pr = ((experience * timeWork) / 100) * 8;
		if(experience > 5) pr = ((experience * timeWork) / 100) * 15;
		std::cout << "\nВаша фамилия: " << surname;
		std::cout << "\nОтработанные часы: " << timeWork;
		std::cout << "\nЗараплата в час: " << pay;
		std::cout << "\nОпыт работы: " << experience;
		std::cout << "\nразмер премии составляет:" << pr << std::endl;
	}
	void entry()
	{
		std::ofstream A("fileof");
	if(!A)
	{
		std::cout << "Файл не открылся!" << std::endl;
	}
	else
	{
		A << surname << "\n" << experience << "\n" << pay << "\n" << timeWork << "\n" << pr;
		
	}

	}

};
int main()
{
	
	std::string surname;
	int time, experience, timePay;
	std::cout << "введите вашу фамилию : " << std::endl;
	std::cin >> surname;
	std::cout << "введите вашу заработную плату в час: " << std::endl;
	std::cin >> timePay;
	std::cout << "введите ваш опыт работы: " << std::endl;
	std::cin >> experience;
	std::cout << "введите количество отработанных вами часов: " << std::endl;
	std::cin >> time;
	work W(surname, experience, timePay, time);
	W.PRINTER();
	W.entry();
	
	return 0;

}	