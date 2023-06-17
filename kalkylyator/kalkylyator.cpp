

#include <iostream>
using namespace std;

int main()
{
    cout << "kalkylyator"<<endl;
    double operand1, operand2, res;
    char   operation;
    string first = "Input first operand\n", second = "Input second operand\n";
    string legend = "Press 0 for quit\nPress + for addition\npress - for subtracting\npress * for multiplying\npress / for division\npress % for modul\n";
    string zerodiv = "Division by 0";
    string illegal = "Illegal operation";
    string answer = "The result is:  ";
    cout << legend;
    cin >> operation;
    cout << first;
    cin >> operand1;
    cout << second;
    cin >> operand2;
    switch (operation)
    {
    case'0':
        cout << "Kalkylyator closed";
        break;
    case'+':
        res = operand1 + operand2;
        cout<<answer << res;
        break; 
    case'-':
            res = operand1 - operand2;
            cout << answer << res;
            break;
    case'*':
        res = operand1 * operand2;
        cout << answer << res;
        break;
    case'/':
        if (operand2 == 0) {
           cout<< zerodiv;
        }
        else {
            res = operand1 / operand2;
            cout << answer << res;

        }
        break;
    case'%':
        if (operand2 == 0) {
            cout << zerodiv;
        }
        else {
            res = (int)operand1 % (int)operand2;
            cout << answer << res;
        }
        break;


    default:
        cout << illegal;




    }


}


