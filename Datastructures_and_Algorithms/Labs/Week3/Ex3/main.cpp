#include<iostream>
#include "Stack.h"
#include<string>

using namespace std;

int postfixSolve(const char *postfix);

int main() {
	string s;
	cout << "\nPOSTFIX EXPRESSIONS\n"
		 << "-----------------------\n"
		 << "\nPlease enter postfix expression:\t";

	cin >> s;
	cout << "result: " << postfixSolve(s.c_str()) << endl;

	cout << ("\n\nPress any key to quit...");
	system("pause>nul");
}

int postfixSolve(const char *postfix) {
	Stack s;
	int i = 0, a, b, results;

	while (postfix[i] != '\0') {
		if (postfix[i] >= '0' && postfix[i] <= '9')
			s.push(postfix[i] - '0');
		else
			if (postfix[i] == '+') {
				b = s.peek();
				s.pop();
				a = s.peek();
				s.pop();
				s.push(a + b);
			}
			else if (postfix[i] == '-') {
				b = s.peek();
				s.pop();
				a = s.peek();
				s.pop();
				s.push(a - b);
			}
			else if (postfix[i] == '*') {
				b = s.peek();
				s.pop();
				a = s.peek();
				s.pop();
				s.push(a * b);
			}
			else if (postfix[i] == '/') {
				b = s.peek();
				s.pop();
				a = s.peek();
				s.pop();
				s.push(a / b);
			}
			i++;
	}
	return s.peek();

}