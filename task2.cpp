#include <fstream>
#include <iostream>
int digit_Counter(int number);
void output( int counter1,int counter2,int counter3);

int main() {
	int number, counter1=0, counter2=0, counter3=0, num;
	std::ifstream f_input;
	f_input.open("numbers.txt");
	while(!f_input.eof())
	{
		f_input >> number;
		num = digit_Counter(number);
		if (num == 1)
			counter1++;
		else if (num == 2)
			counter2++;
		else if (num == 3)
			counter3++;
	}
	f_input.close();
	output( counter1, counter2, counter3);
	return 0;
}
int digit_Counter(int number)
{
	int counter = 0;
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return counter;
}

void output( int counter1,int counter2, int counter3)
{
	std::ofstream outfile;
	outfile.open(" result.txt", std::ios_base::app);
	outfile 
		<< "digit counter1 = " << counter1 << std::endl
		<< "digit counter2 = " << counter2 << std::endl 
		<< "digit counter3 = " << counter3 << std::endl;
	outfile.close();
}

