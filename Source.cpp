#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;


int main() {
	int cases, beats;
	double seconds;


	cin >> cases;
	while (cases--)
	{
		cin >> beats >> seconds;
		double bpm = (60.0 / seconds);
		double bpm_beats = bpm * beats;

		std::cout << setprecision(4) << fixed << bpm_beats - bpm << " " << bpm_beats << " " << bpm_beats + bpm << endl;
	}

	return 0;
}