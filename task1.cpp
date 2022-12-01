#include <fstream>
#include <iostream>
int divisors(int number);
void output(int number, int counter);
int input();
int main() {
	double numberUser;
	int counter;
	do
	{
		numberUser = input();
		counter = divisors(numberUser);
		output(numberUser, counter);
	} while (numberUser != 0);
	return 0;
}
int divisors(int number)
{
	double sgrtNumber;
	int counter = 0;
	sgrtNumber = sqrt(number);
	for (int i = 1; i <= sgrtNumber; i++)
	{
		if (!(number % i))
			if (i != number / i)
				counter++;
	}
	return counter;
}

void output(int number, int counter)
{
	std::ofstream outfile;
	outfile.open(" divisors.txt", std::ios_base::app);
	outfile << "in number: " << number << "divisors: " << counter << std::endl;
	outfile.close();
}

int input()
{
	int number;
	std::cout << "input  number: ";
	std::cin >> number;
	return number;
}

