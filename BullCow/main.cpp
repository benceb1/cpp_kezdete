// 26. perctõl folytatni
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int imGlobal = 0;
const double PI = 3.141;

void attempt1();
int assignAge(int age);

void assignAge3(int* pAge);
void pointerek();
void doubleArray(int *arr, int size);

int main(int argc, char** argv)
{
	cout << "welcome to the summoner's rift! " << endl;
	int age2 = 43;
	int* pAge2 = NULL;
	pAge2 = &age2;
	cout << "Address: " << pAge2 << endl;
	cout << "Value: " << *pAge2 << endl;

	int intArray[] = { 1,2,3,4 };
	int* pIntArray = intArray;
	cout << "1st " << pIntArray << endl;
	cout << "value of 1st " << *pIntArray << endl;
	pIntArray++;
	cout << "2nd " << pIntArray << endl;
	cout << "value of 2nd " << *pIntArray << endl;

	doubleArray(intArray, 4);
	for (auto a : intArray) {
		cout << "Array "<< a << endl;
	}

	return 0;

}

void doubleArray(int *arr, int size) {
	for (int i = 0; i < size; ++i)
	{
		arr[i] = arr[i] * 2;
	}
}

int assignAge(int age) {
	age = 24;
	return 24;
}

void assignAge3(int* pAge) {
	*pAge = 23;
}

void pointerek() {

}

void attempt1()
{
	cout << numeric_limits<unsigned short int>::min() << endl;

	bool married = true;
	char myGrade = 'A';
	cout << numeric_limits<unsigned short int>::max() << endl;

	float f1 = 1.1111111;
	float f2 = 1.1111111;

	printf("Sum = %.7f\n", (f1 + f2));

	double d1 = 1.1111111111111111;
	double d2 = 1.1111111111111111;

	printf("Sum = %.16f\n", (d1 + d2));

	auto whatAmI = true;

	cout << "int Byte: " << sizeof(int) << endl;
}

void attempt2()
{
	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "hello world"); //%5d 5 space-el arrébb
	string q1 = "Enter a number: ";
	string num1, num2;
	cout << q1;
	cin >> num1;
	cout << "Enter Another Number: ";
	cin >> num2;
	int nNum1 = stoi(num1); //stof <- convert to float
	int nNum2 = stoi(num2);
	printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2)); 
}

void attempt3()
{
	bool a = (5 > 3) ? true : false;
	cout.setf(ios::boolalpha); //írja ki, hogy true
	cout << a << endl;
	
}

void attempt4() {
	int arrNums[10] = { 1 };
	int arrNums2[] = { 1,2,3 };
	int arrNums3[5] = { 8,9 };
	cout << "1st value: " << arrNums3[0] << endl;
	int arrNums4[2][2][2] = { {{1,2},{3,4}}, {{5,6}, {7,8}} };

	cout << arrNums4[0][1][1] << endl;
}

void basicvector() {
	vector<int> vNums(2);
	vNums[0] = 1;
	vNums[1] = 2;
	vNums.push_back(3);
	cout << "size: " << vNums.size() << endl;
}

void attempt5() {
	vector<string> words;
	stringstream ss("some random words");
	string word;
	while (getline(ss, word, ' ')) { //' ' <- itt a spacek szerint szedi szét
		words.push_back(word);
	}

	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}

	//attempt1();

	int age43 = 43;
	//age43 = assignAge(age43);
	assignAge3(&age43); //& send a place of memory
	cout << age43;
}