
#include <iostream> 
using namespace std;

struct BMI {
	float weight, height;
};

float conv_ft_mt(float h)
{

	// Converting feet to meters
	return (h / 3.2808);
}

double bmi_cal(float h, float w = 50.00)
{
	return (w / (h*h));
}
int main()
{
	char ch;

	do
	{

	BMI ob1;
	int bmi;
	cout << "Enter the weight (Kg): ";
	cin >> ob1.weight;
	cout << "\nEnter the height (feet): ";
	cin >> ob1.height;
	ob1.height= conv_ft_mt(ob1.height);
	bmi = bmi_cal(ob1.height, ob1.weight);
	cout << "\nBMI: " << bmi;

	//Switch case 

	switch (bmi) {
	case (0 ... 15):
		cout << "Very severly underweight";
		break;
	case 15 ... 16:
		cout << "Severly underweight";
		break;
		case (16) ... (18.5) :
			cout << "Underweight";
			break;
		case 18.5 ... 25:
			cout << "Normal (healthy weight)";
			break;
		case 25 ... 30:
			cout << "Overweight";
			break;
		case 30 ... 35:
			cout << "Obese Class I (Moderately obese)";
			break;
		case 35 ... 40:
			cout << "Obese Class II (Severly obese)";
			break;
		case 40 ... 100:
			cout << "Obese Class II (Very severly obese)";
			break;
		default:
			cout << "invalid";
			break;
	}
	cout << "Press X to exit :";
	cin >> ch;

	}while (ch != 'X');

	return 0;
}
