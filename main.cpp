#include <iostream>
#include <string>
using namespace std;
int main() {
    string operator_name;
    int first_number;
    int second_number;
    int calculate;
    cout << "Welcome To Calculator\n";
    cout << "Enter A Operator\n";
    getline(cin,operator_name);
    if (operator_name == "+") {
    cout << "Enter First Number\n";
    cin >> first_number;
    cout << "Enter Second Number\n";
    cin >> second_number;
    calculate = first_number + second_number;
    cout << "Total Is" << " " << calculate;
    }
    else if (operator_name == "*") {
    cout << "Enter First Number\n";
    cin >> first_number;
    cout << "Enter Second Number\n";
    cin >> second_number;
    calculate = first_number * second_number;
    cout << "Total Is" << " " << calculate;
    }
    else if (operator_name == "-") {
    cout << "Enter First Number\n";
    cin >> first_number;
    cout << "Enter Second Number\n";
    cin >> second_number;
    calculate = first_number - second_number;
    cout << "Total Is" << " " << calculate;
    }
    else if (operator_name == "/") {
    cout << "Enter First Number\n";
    cin >> first_number;
    cout << "Enter Second Number\n";
    cin >> second_number;
    calculate = first_number / second_number;
    cout << "Total Is" << " " << calculate;
    }
   else{
    cout << "Operator Not Found";
   }
}
