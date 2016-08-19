#include <iostream>

using namespace std;

int main()
{
	//EXERCISE 1

	/*int y = 0;
	int x;

	cin >> y;
	if (y == 0)
	{
		x = 100;
	}
	cout << x << endl;
	system("pause");
	return 0;
*/

	//EXERCISE 2
	//int A;
	//int B;

	//cout << "input 2 numbers"<<endl;
	//cin >> A >> B;

	//if (A > B)
	//{
	//	cout << A << endl;
	//}
	//else if (B > A)
	//{
	//	cout << B << endl;
	//}
	//else
	//{
	//	cout << "you had 1 job >:C" << endl;
	//}
	//system("pause");
	//return 0;

	//EXAMPLE 3
	
	int numbers[3];
	int sum = 0;

	cin >> numbers[0] >> numbers[1] >> numbers[2];

	for (int i = 0; i < 3; i++)
	{
		
		sum = sum + numbers[i];

			
	}
	

	
	if (sum > 0)
	{
		if (numbers[0] < numbers[1] < numbers[2])
			cout << numbers[0] << numbers[1] << numbers[2];
		else if (numbers[0] < numbers[2] < numbers[1])
			cout << numbers[0] << numbers[2] << numbers[1];
		else if (numbers[1] < numbers[2] < numbers[0])
			cout << numbers[1] << numbers[2] << numbers[0];
		else if (numbers[1] < numbers[0] < numbers[2])
			cout << numbers[1] << numbers[0] << numbers[2];
		else if (numbers[2] < numbers[0] < numbers[1])
			cout << numbers[2] << numbers[0] << numbers[1];
		else
			cout << numbers[2] << numbers[1] << numbers[0];

	}
	else if (sum < 0)
	{



	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			cout << numbers[i] << endl;
		}
	}
	system("pause");
	return 0;

	//EXAMPLE 4
	
	/*int(choice);
	cin >> choice;
	switch (choice)
	{
	case 0:
	cout << "1" << endl;
	
	case 1 || 2:
		cout << "2 or 3" << endl;
	case 3:
		cout << "4" << endl;
	default:
		cout << "invalid"<<endl;
	
	
	
	
	}
	system("pause");
	return 0;*/

	//Example5
	/*int x;
	int y;
	int answer;
	cin >> x;

	answer = (x == 0) ? y = 0 : y = 10 / x;
	system("pause");
	return 0;
	cout << answer << endl;*/
	//Example6

	/*int A;
	int B;
	char op;
	int answer;
	
	cin >> A >> op >> B;
	
	switch (op)
	{
	case '+':
		answer = A + B;
		cout << answer << endl;
		break;
	case '-':
		answer = A - B;
		cout << answer << endl;
		break;
	case '/':
		answer = A / B;
		cout << answer << endl;
		break;
	case '*':
		answer = A * B;
		cout << answer << endl;
		break;
	case '%':
		answer = A % B;
		cout << answer << endl;
		break;
	default:
		cout << "invalid input" << endl;
	}
	
	system("pause");
	return 0;*/

//int Month;
//
//for(Month = 1; Month < 13; Month++)
//{ 
//cin >> Month;
//switch (Month)
//{
//case 1:
//	cout << "there are 31 days in January" << endl;
//	break;
//case 2:
//	cout << "there are 28 days in February" << endl;
//	break;
//case 3:
//	cout << "there are 31 days in March" << endl;
//	break;
//case 4:
//	cout << "there are 30 days in April" << endl;
//	break;
//case 5:
//	cout << "there are 31 days in May" << endl;
//	break;
//case 6:
//	cout << "there are 30 days in June" << endl;
//	break;
//case 7:
//	cout << "there are 31 days in July" << endl;
//	break;
//case 8:
//	cout << "there are 30 days in August" << endl;
//	break;
//case 9:
//	cout << "there are 31 days in September" << endl;
//	break;
//case 10:
//	cout << "there are 30 days in October" << endl;
//	break;
//case 11:
//	cout << "there are 31 days in November" << endl;
//	break;
//case 12:
//	cout << "there are 30 days in December" << endl;
//	break;
//default:
//	cout << "error with console" << endl;
//}
//	
//}
//
//system("pause");
//return 0;
}