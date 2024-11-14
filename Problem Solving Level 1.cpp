#include <iostream>
using namespace std;
#include <string>
#include <cmath>
// Problem Solving 1
void printName(string name) {
	cout << "Your Name is: " << name << endl;
}

//Problem Solving 2
string readData() {
	string name;
	cout << "Write Your Name..." << endl;
	getline(cin, name);
	return name;
}
void printData(string name) {
	cout << "Your Name is: " << name;
}

//Problem Solving 3
int evenOdd() {
	int num;
	cout << "Enter A Number" << endl;
	cin >> num;
	return num;
}
void check(int num) {
	if (num % 2 == 0) {
		cout << "even";
	}
	else
	{
		cout << "odd";
	}
}
enum enNumber { Odd = 1, Even = 2 };
int Number() {
	int num;
	cout << "Enter The Number.. " << endl;
	cin >> num;
	return num;
}
enNumber checkNumberType(int num) {
	int result = num % 2;
	if (result == 0)
		return enNumber::Even;
	else
		return enNumber::Odd;
}
void print(enNumber numberType) {
	if (numberType == enNumber::Even)
		cout << "The Number Is Even" << endl;
	else
		cout << "The Number is Odd" << endl;
}

//Problem Solving #4
struct stInfo {
	int age;
	bool HasLicense;
	bool hasRecommendation;
};
stInfo readData() {
	stInfo info;
	cout << "Enter Your Age " << endl;
	cin >> info.age;
	cout << "Do You Have A License T/F" << endl;
	cin >> info.HasLicense;
	cout << "Do You Have Recommendations " << endl;
	cin >> info.hasRecommendation;
	return info;

}
bool isAccepted(stInfo info) {
	if (info.hasRecommendation)
		return true;
	else
		return (info.age > 21 && info.HasLicense);
}
void print(stInfo info) {
	if (isAccepted(info)) {
		cout << "Hired";
	}
	else
	{
		cout << "Rejected";
	}
}

//Problem Solving #6
struct fullName {
	string firstName;
	string lastName;
};
fullName read() {
	fullName info;
	cout << "Please Write Your First Name" << endl;
	cin >> info.firstName;
	cout << "Please Write Your Last Name" << endl;
	cin >> info.lastName;
	return info;
}
string getFullName(fullName name) {
	string fullName = "";
	fullName = name.firstName + name.lastName;
	return fullName;
}

void printFullName(string name) {
	cout << "your full name is: " << name;
}

//Problem Solving #7
int readNumber() {
	int num;
	cout << "Write Your Number" << endl;
	cin >> num;
	return num;
}
float calcNumber(int num) {
	return (float)num / 2;
}
void print(int num) {
	string result = "Half Of " + to_string(num) + " is " + to_string(calcNumber(num));
	cout << result;
}

//Problem Solving #8
enum enMark { pass = 1, fail = 2 };
int mark() {
	int mark;
	cout << "Please Enter Your Mark.. " << endl;
	cin >> mark;
	return mark;
}
enMark check(int mark) {
	if (mark >= 50)
		return enMark::pass;
	else
		return enMark::fail;
}
void printMark(int succ) {
	if (check(succ) == enMark::pass)
		cout << "pass";
	else
		cout << "fail";
}

//Problem Solving #9 / 10 / 11
enum enPass { pass = 1, fail = 2 };
void readNum(int& num1, int& num2, int& num3) {
	cout << "Enter The First Number.." << endl;
	cin >> num1;
	cout << "Enter The Second Number.." << endl;
	cin >> num2;
	cout << "Enter The Third Number.." << endl;
	cin >> num3;
}
int calcSum(int num1, int num2, int num3) {

	return num1 + num2 + num3;
}
float calcAvg(int mark1, int mark2, int mark3) {
	return (float)calcSum(mark1, mark2, mark3) / 3;
}
enPass checkAvg(float total) {
	if (total >= 50)
		return enPass::pass;
	else
		return enPass::fail;
}
void print(float total) {
	cout << "Your Average is " << total << endl;

	if (checkAvg(total) == enPass::pass)
		cout << "pass";
	else
		cout << "fail";
}

//Problem Solving #12 / 13
void read(int& num1, int& num2, int& num3) {
	cout << "Write Number 1.." << endl;
	cin >> num1;
	cout << "Write Number 2.." << endl;
	cin >> num2;
	cout << "Write Number 3.." << endl;
	cin >> num3;
}
int maxOf2TwoNumber(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

void printNum(int num) {
	cout << "The Greatest Number IS => " << num;
}

//Problem Solving #14
void readNumbers(int& num1, int& num2) {
	cout << "Write The Number 1" << endl;
	cin >> num1;
	cout << "Write The Number 2" << endl;
	cin >> num2;
}
void switchNums(int& num1, int& num2) {
	int trunc = num1;
	num1 = num2;
	num2 = trunc;

}
void printNums(int num1, int num2) {
	cout << "The Number 1 Is => " << num1 << endl;
	cout << "The Number 2 Is => " << num2 << endl << endl;
}

//Problem Solving #15
void readNums(float& num1, float& num2) {
	cout << "Number 1 => " << endl;
	cin >> num1;
	cout << "Number 2 => " << endl;
	cin >> num2;
}
float calcArea(float A, float B) {
	return (float)A * B;
}
void printEqual(float area) {
	cout << "The Equal is = " << area;
}

//Problem Solving #16
void ReadNumbers(float& A, float& B) {
	cout << "Enter The Side Length" << endl;
	cin >> A;
	cout << "Enter The Diagonal" << endl;
	cin >> B;
}
float calcRectangleAreaSide(float A, float B) {
	float area = A * sqrt(pow(B, 2) - pow(A, 2));
	return area;
}
void print(float area) {
	cout << "The Rectangle Is =>  " << area;
}

//Problem Solving #17
void readNumbers(int& A, int& H) {
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter H" << endl;
	cin >> H;
}
float calcTriangle(float A, float H) {
	float area = (A / 2) * H;
	return area;
}
void print(float area) {
	cout << "The Triangle Area is: " << area;
}

//Problem Solving #18
void read(float& r) {
	cout << "write your circle" << endl;
	cin >> r;
}
float calc(float r) {
	float PI = 3.14;
	float area = PI * pow(r, 2);
	return area;
}
void print(float a) {
	cout << "The Equal is : " << a;
}

//Problem Solving #19
float read() {
	float D;
	cout << "Enter A Number =>  ";
	cin >> D;
	return D;
}
float calc(float D) {
	float PI = 3.141592653589793238;
	float area = (PI * pow(D, 2)) / 4;
	return area;
}
void print(float area) {
	cout << "The Equail Is: " << area;
}

//Problem Solving #20
float read() {
	float A;
	cout << "Write A Number" << endl;
	cin >> A;
	return A;
}
float calc(float A) {
	float PI = 3.141592653589793238;
	float area = (PI * pow(A, 2)) / 4;
	return area;
}
void print(float area) {
	cout << "The Equail Is: " << area;
}

//Problem Solving #21
float read() {
	float A;
	cout << "Write A Number" << endl;
	cin >> A;
	return A;
}
float calc(float A) {
	float PI = 3.141592653589793238;
	float area = pow(A, 2) / (4 * PI);
	return area;
}
void print(float area) {
	cout << "The Equail Is: " << area;
}

//Problem Solving #22
void read(float& A, float& B) {
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
}
float calc(float A, float B) {
	float PI = 3.141592653589793238;
	float area = (PI * (pow(B, 2) / 4)) * ((2 * A - B) / (2 * A + B));
	return area;
}
void print(float area) {
	cout << "The Equail Is: " << area;
}
float PI = 3.141592653589793238;

//Problem Solving #23
void read(float& A, float& B, float& C) {
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	cout << "Enter C" << endl;
	cin >> C;

}
float calc(float A, float B, float C) {
	float PI = 3.141592653589793238;
	float p = (A + B + C) / 2;
	float calc = ((A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C))));
	float calcTimes = pow(calc, 2);
	float area = PI * calcTimes;
	return area;
}
void print(float area) {
	cout << "The Equail Is: " << area;
}
float PI = 3.141592653589793238;

//Problem Solving #24 / 25
int agee() {
	int age;
	cout << "Enter Your Age " << endl;
	cin >> age;
	return age;
}
bool checkAge(int number, int from, int to) {
	return (number >= from && number <= to);
}
int ReadUntilAge(int from, int to) {
	int age = 0;
	do {
		age = agee();
	} while (!checkAge(age, from, to));
	return age;
}
void print(int age) {
	cout << "YOUR Age Is: " << age;
}

//Problem Solving #26
int readNumber() {
	int num;
	cout << "Enter The Number" << endl;
	cin >> num;
	return num;
}
void printForLoop(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
}
void printWhile(int n) {
	int i = 1;
	while (i <= n) {
		cout << i << endl;
		i++;
	}
}
void printDoWhile(int n) {
	int i = 1;
	do {
		cout << i << endl;
		i++;
	} while (i <= n);
}

//Problem Solving #27
int readNumber() {
	int num;
	cout << "Enter The Number" << endl;
	cin >> num;
	return num;
}
void printForLoop(int n) {
	for (int i = n; i >= 1; i--) {
		cout << i << endl;
	}
}

//Problem Solving #28
enum enOddEven { even = 2, odd = 1 };
int readNum() {
	int num;
	cout << "Enter A number.. ";
	cin >> num;
	return num;
}
enOddEven checkEvenOdd(int num) {
	if (num % 2 == 0)
		return enOddEven::even;
	else
		return enOddEven::odd;
}
int loop(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		if (checkEvenOdd(i) == enOddEven::odd) {
			sum += i;
		}
	}
	return sum;
}
int whilee(int num) {
	int sum = 0;
	int i = 1;
	while (i <= num) {
		if (checkEvenOdd(i) == enOddEven::odd) {
			sum += i;
		}
		i++;
	}
	return sum;
}

// Problem Solving #29
enum enOddEven { even = 2, odd = 1 };
int readNum() {
	int num;
	cout << "Enter A number.. ";
	cin >> num;
	return num;
}
enOddEven checkEvenOdd(int num) {
	if (num % 2 == 0)
		return enOddEven::even;
	else
		return enOddEven::odd;
}
int loop(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		if (checkEvenOdd(i) == enOddEven::even) {
			sum += i;
		}
	}
	return sum;
}
int whilee(int num) {
	int sum = 0;
	int i = 1;
	while (i <= num) {
		if (checkEvenOdd(i) == enOddEven::even) {
			sum += i;
		}
		i++;
	}
	return sum;
}

// Problem Solving #29
int number(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
int factorial(int num) {
	int sum = 1;
	for (int i = num; i >= 1; i--) {
		sum *= i;
	}

	return sum;
}
void factorial(int num) {
	int sum = 1;
	for (int i = num; i >= 1; i--) {
		sum *= i;
	}

	cout << sum;
}

//Problem Solving #31
int ReadNumber() {
	int num;
	cout << "Enter A Number" << endl;
	cin >> num;
	return num;
}

void print(int number) {
	int a, b, c;
	a = number * number;
	b = number * number * number;
	c = number * number * number * number;
	cout << a << " " << b << " " << c << endl;
}

//Problem Solving #32
int number() {
	int num;
	cout << "Enter Number" << endl;
	cin >> num;
	return num;
}
int power() {
	int power;
	cout << "enter power" << endl;
	cin >> power;
	return power;
}
int powerOFM(int number, int power) {
	if (power == 0) return 1;


	int sum = 1;
	for (int i = 1; i <= power; i++) {
		sum = sum * number;
	}

	return sum;
}

//Problem Solving #33
int number(int from, int to) {
	int num;
	do {
		cout << "Enter The Grade" << endl;
		cin >> num;
	} while (num <= from || num > to);

	return num;
}
char checkGrade(int number) {
	if (number >= 90)
		return 'A';
	else if (number >= 80)
		return 'B';
	else if (number >= 70)
		return 'C';
	else if (number >= 60)
		return 'D';
	else if (number >= 50)
		return 'E';
	else
		return 'F';
}
void print(int num) {
	cout << checkGrade(num);
}

//Problem Solving #34
float salary() {
	float num;
	cout << "Enter Youe Salary" << endl;
	cin >> num;
	return num;
}
float checkPercentage(float number) {

	if (number >= 1000000) {
		return 0.01;
	}
	else if (number >= 500000) {
		return 0.02;

	}
	else if (number >= 100000) {
		return 0.03;

	}
	else if (number >= 50000) {
		return 0.05;

	}
	else {
		return 0.00;

	}

}
float checkCommision(float number) {
	return checkPercentage(number) * number;
}

//Problem Solving #35
struct stPiggy {
	int pennies, nickels, dimes, quarters, dollars;
};
stPiggy readNumber() {
	stPiggy Numbers;
	cout << "Please Enter The Total Pennies" << endl;
	cin >> Numbers.pennies;
	cout << "Please Enter The Total nickels" << endl;
	cin >> Numbers.nickels;
	cout << "Please Enter The Total dimes" << endl;
	cin >> Numbers.dimes;
	cout << "Please Enter The Total quarters" << endl;
	cin >> Numbers.quarters;
	cout << "Please Enter The Total dollars" << endl;
	cin >> Numbers.dollars;
	return Numbers;

}
int calcTotal(stPiggy number) {
	int total = number.pennies * 1 + number.nickels * 5 + number.dimes * 10 + number.quarters * 25 + number.dollars * 100;
	return total;
}

//Problem Solving #36
enum enOperation {
	Add = '+', Subtract = '-', Divide = '/',
	Multiply = '*'
};
float ReadNumber(string Message) {
	int number = 0;
	cout << Message << endl;
	cin >> number;
	return number;
}
enOperation ReadOpType() {
	char OP = '+';
	cout << "Enter Operation (* , - , + , / ) ? \n";
	cin >> OP;
	return (enOperation)OP;
}
float calc(float number1, float number2, enOperation OP) {
	switch (OP) {
	case enOperation::Add:
		return number1 + number2;
	case enOperation::Subtract:
		return number1 - number2;
	case enOperation::Divide:
		return number1 / number2;
	case enOperation::Multiply:
		return number1 * number2;
	default:
		return 1100;
	};
}

//Problem Solving #37
int numberr(string message) {
	int num;
	cout << message << endl;
	cin >> num;
	return num;
}
int calc() {
	int sum = 0, number = 0, counter = 1;
	do {
		number = numberr("Please Enter Number " + to_string(counter));
		if (number == -99) {
			break;
		}
		sum += number;
		counter++;
	} while (number != -99);
	return sum;
}

//Problem Solving #38
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
int PosNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
enPrimeNotPrime check(int number) {
	int m = round(number / 2);
	for (int i = 2; i <= m; i++) {
		if (number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
void print(int number) {
	switch (check(number)) {
	case enPrimeNotPrime::Prime:
		cout << "Its Prime Number";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "its not prime";
		break;
	}
}

//Problem Solving #39
float numberr(string message) {
	float num;
	cout << message << endl;
	cin >> num;
	return num;
}
float Equal(float num1, float num2) {
	return num2 - num1;
}

//Problem Solving #40
float number() {
	float num;
	cout << "Please Enter A Number" << endl;
	cin >> num;
	return num;
}
float totalBill(float number) {
	number = number * 1.1;
	number = number * 1.16;
	return number;
}

Problem Solving #41
float numberr(string message) {
	float num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
float hoursForDays(float number) {
	return (float)number / 24;
}
float hoursWeeks(float number) {
	return (float)number / 24 / 7;
}
float hoursToWeeks(float number) {
	return (float)number / 7;
}

//Problem Solving #42
float numberr(string message) {
	float num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
float calc(float days, float hours, float minutes, float seconds) {
	return (float)(days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
}
Other Solution;
struct strTask {
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};
int numberr(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
strTask readPos() {
	strTask number;
	number.Days = numberr("Please Enter The Days");
	number.Hours = numberr("Please Enter The Hours");
	number.Minutes = numberr("Please Enter The Minutes");
	number.Seconds = numberr("Please Enter The Seconds");
	return number;
}
int calc(strTask number) {
	return (number.Days * 24 * 60 * 60) + (number.Hours * 60 * 60) + (number.Minutes * 60) + number.Seconds;
}

//Problem Solving #43
struct strTask {
	int NumberDays;
	int NumberHours;
	int NumberMinutes;
	int NumberSeconds;
};
int numberr(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
strTask readPos(int totalSeconds) {
	strTask number;
	const int day = 24 * 60 * 60;
	const int hours = 60 * 60;
	const int minutes = 60;

	int Remainder = 0;
	number.NumberDays = floor(totalSeconds / day);
	Remainder = totalSeconds % day;
	number.NumberHours = floor(Remainder / hours);
	Remainder = Remainder % hours;
	number.NumberMinutes = floor(Remainder / minutes);
	Remainder% minutes;

	number.NumberSeconds = Remainder;

	return number;
}
void print(strTask values) {
	cout << values.NumberDays << ":" << values.NumberHours << ":"
		<< values.NumberMinutes << ":" << values.NumberSeconds;
}

//Problem Solving #44
enum enDay {
	Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4,
	Thursday = 5, Friday = 6, Saturday = 7
};
int numberr(string message, int from, int to) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < from || num > to);

	return num;
}
enDay ReadDay() {
	return (enDay)numberr("Please Enter The Number Of Day 1/7", 1, 7);
}
string print(enDay day) {
	switch (day)
	{
	case enDay::Sunday:
		return "Sunday";
	case enDay::Monday:
		return "Monday";
	case enDay::Tuesday:
		return "Tuesday";
	case enDay::Wednesday:
		return "Wednesday";
	case enDay::Thursday:
		return "Thursday";
	case enDay::Friday:
		return "Friday";
	case enDay::Saturday:
		return "Saturday";
	default:
		return "Not A Day";
	};
}

//Problem Solving #45
enum enMonth {
	January = 1, February = 2, March = 3, April = 4, May = 6
	, June = 6, July = 7, August = 8, September = 9, October = 10
	, November = 11, December = 12
};
int Number(string message, int from, int to) {
	int number = 0;

	do {
		cout << message << endl;
		cin >> number;
	} while (number < from || number > to);
	return number;

}
enMonth TakeNumber() {
	return (enMonth)Number("Please ENter A Number", 1, 12);
}
string printMonth(enMonth Month) {
	switch (Month) {
	case enMonth::January:
		return "January";
	case enMonth::February:
		return "February";
	case enMonth::March:
		return "March";
	case enMonth::April:
		return "April";
	case enMonth::June:
		return "June";
	case enMonth::July:
		return "July";
	case enMonth::August:
		return "August";
	case enMonth::September:
		return "September";
	case enMonth::October:
		return "October";
	case enMonth::November:
		return "November";
	case enMonth::December:
		return "December";
	default:
		return "Not A Month";

	}
}

//Problem Solving #46
void AtoZ() {
	for (int i = 65; i <= 90; i++) {
		cout << char(i) << endl;
	}
}

//Problem Solving #47 / 48
int ReadPositiveNumber(string message) {
	int Number = 0;
	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float calc(float number1, float number2) {
	return (float)number1 / number2;
}

//Problem Solving #49
string ReadPositiveNumber() {
	string pincode;
	cout << "Please Enter Pin Code" << endl;
	cin >> pincode;
	return pincode;
}
bool Login() {
	string pincode;
	int counter = 1;
	do {
		pincode = ReadPositiveNumber();
		if (pincode == "1234") {
			return true;
		}
		else {
			cout << "Wrong pin" << endl;
			cout << "You Have 3 Times" << "3/" << counter << endl;
			system("color 4F");
		}
		counter++;
	} while (pincode != "1234" && counter <= 3);
}
int main()
{

	return 0;
}