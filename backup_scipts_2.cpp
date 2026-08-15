
// set up libraries

#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

// set up function backup by linux shell

static bool backup_function(int unsigned& option) {

	switch (option) {

	case 1:

		cout << " PC is coping the folder \n\n ";

		system("rsync -av --delete /your/source/path/ /your/destination/path/");

		return true;

		break;

	case 2:

		cout << " PC is coping  data between the disks \n\n ";

		system("rsync -av --delete /your/source/path/ /your/destination/path/");
		return true;

		break;

	default:

		cout << "option is not valid , you might you try again \n\n ";

		return false;

	}

}

int main() {

	// set up cli

	system("clear");

	system("python -m pyfiglet backups  script");

	// declarations section of variable

	string menu_options[2] = { "1) copy folder projects ", "2) copy all informtion between the disks \n " };

	int unsigned option;

	int i;

	bool state_function;

	// loading the CLI

	for (i = 0; i <= 1; i = i + 1) {

		cout << menu_options[i];

		cout << "\n\n";
	}

	// reding about the option of user

	cout << "insert the your option \n\n";

	cin >> option;

	// backup function  and degub variable

	state_function = backup_function(option);

	cout << " the state of backup process is  \n\n";

	cout << state_function;

	system("read");

}
