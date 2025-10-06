//Danyel Quintana
//New change
#include <iostream>
using namespace std;

void showDrive();
void showYards(int arr[], int size);
struct Drive {
	int yards;
	int plays;
};

int main()
{
	const int SIZE = 10;
	Drive drives[SIZE] = { 67,11 }, { 98, 18 }, { 60, 10 }, { 94,12 }, { 35,5 },
	{ 25,4 }, { 45,6 }, { 50,7 }, { 30,5 }, { 40,6 };

	cout << "Detroit Lions at Baltimore Ravens" << endl
		<< "Sept 29, 2025 Game Statistics" << endl;

	int yards[SIZE] = { 67, 98, 60, 94, 35, 25, 45, 50, 30, 40 };
	cout << "First drive yards: " << yards[0] << endl;
	cout << "Epic second drive: " << yards[1] << " yards" << endl;

	for (int i = 0; i < SIZE; i++) {

		cout << "Drive " << i + 1 << ": " << yards[i] << " yards" << endl;

	}

	showDrive();
	showDrive();
	// Display array memory size
	cout << "Array memory: ~" << sizeof(yards) << " bytes" << endl;

	cout << "All yards: ";
	for (int val : yards) {
		cout << val << " ";
	}
	cout << endl;

	double total = 0;

	for (int val : yards) {
		total += val;
	}
	cout << "Total yards: " << total << endl;
	cout << "Average yards: " << total / SIZE << endl;

	//Find longest drive
	int maxYards = yards[0];

	for (int i = 0; i < SIZE; i++) {
		if (yards[i] > maxYards)
			maxYards = yards[i];
	}
	cout << "Max yards: " << maxYards << endl;

	int plays[SIZE] = { 11, 18, 10, 12, 5, 4, 6, 7, 5, 6 };

	for (int i = 0; i < SIZE; i++) {

		cout << "Drive " << i + 1 << ": " << plays[i] << "plays. ";

	}
	cout << "Yards via a function: ";



	return 0;
}

void showDrive() {

    static int driveNum = 1;
	cout << "Showing drive " << driveNum << endl;
	driveNum++;

}

void showYards(int arr[], int size){
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}