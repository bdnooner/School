#include<iostream>
#include <string>
#include <queue>

using namespace std;
class Call {
private:
	string phoneNum;
	string date;
	string time;
	string lang;
	int id;
public:
	/* Parametrized Constructor */
	Call(string phoneNum, string date, string time, string lang, int id) :phoneNum(phoneNum), date(date), time(time), lang(lang), id(id) {
	}
	/*Getters implemented for member attributes*/
	string getPhoneNum() { return phoneNum; }
	string getDate() { return date; }
	string getTime() { return time; }
	string getLang() { return lang; }
	int getId() { return id; }
};
class ACD {
private:
	queue<Call*> que;
public:
	ACD() { }
	void addNewCall(Call *obj) {
		que.push(obj);
	}
	Call * processCall() {
		Call *obj = que.front();
		que.pop();
		return obj;
	}
	bool isEmpty() {
		return que.empty();
	}
};
int main() {
	int i = 0, j, ran;
	ACD acd;
	Call *obj;
	string phoneNum;
	string date;
	string time;
	string lang;
	int id;

	cout << "# CALL CENTER PHONE LOG #" << endl;
	cout << "-------------------------" << endl;
	while (i<30) {
		ran = rand() % 3;
		switch (ran) {
		case 0: /* Pop from queue the call and transfer call to agent*/
			if (!acd.isEmpty()) {
				obj = acd.processCall();
				cout << "Call with id " << obj->getId() << " and " << obj->getPhoneNum() << " has been transferred to agent" << endl;
			}
			else {
				cout << " No calls in ACD list " << endl;
			}
			break;
		case 1: /* Add new call to ACD list*/
			
			 
			cout << "\n\nPlease enter caller's phone number : ";
			fflush(stdin);
			getline(cin, phoneNum);
			cout << "Please enter date : ";
			getline(cin, date);
			cout << "Please enter time : ";
			getline(cin, time);
			cout << "Please enter language : ";
			getline(cin, lang);
			obj = new Call(phoneNum, date, time, lang, rand());
			acd.addNewCall(obj);
			break;
			
		case 2: /* Do nothing*/
			break;
		}
		i++;
	}
	return 0;
}