#include <stdio.h>
#include "Stack.h"


void prnMenu() {
	cout << "*******************************************" << endl;
	cout << "* 1. insert  2. delete  3. print   4.exit *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "Select Menu : ";
}

int main() {
	int mode, selectNumber, tmpItem;
	LinkedList<int> *p;
	bool flag = false;

	cout << "Select (1: Stack, Other: Linked List): ";
	cin >> mode;

	if (mode == 1)
		p = new Stack<int>();    // 정수를 저장하는 스택

	else
		p = new LinkedList<int>();


	do {
		prnMenu();
		cin >> selectNumber;

		switch (selectNumber) {
		case 1:
			cout << "input data : ";
			cin >> tmpItem;    p->Insert(tmpItem);
			cout << tmpItem << " input" << endl;
			break;

		case 2:
			if (p->Delete(tmpItem) == true)
				cout << tmpItem << " delete" << endl;

			else cout << "empty. delete fail" << endl;
			break;

		case 3:
			cout << "Size: " << p->GetSize() << endl;
			p->Print();
			break;

		case 4:
			flag = true;     break;

		default:
			cout << "Error : input error" << endl;
			break;

		}

		if (flag) break;

	} while (1);

	return 0;
}
