#include<iostream>
#include<string>
using namespace std;

void linearSearch(string books[], string title, int size) {
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (books[i] == title) {
			cout << "The book is Available" << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "The book is not available" << endl;
	}
}

int main() {
	string title;
	string books[] = { "Atomic Habits","Discipline", "Alchemist", "The World" };
	int size = sizeof(books) / sizeof(books[0]);

	cout << "Enter a book title you want to find: ";
	getline(cin, title);

	linearSearch(books, title, size);

	return 0;

}