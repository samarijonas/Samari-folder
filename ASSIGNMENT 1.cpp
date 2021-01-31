#include <iostream>

using namespace std;

int main()
{
    string name;
    string unique_ID;
    string item;
    int quantity;
    float vat_amount;
    cout << "Hello Welcome to SamJonas IT Solutions" << endl;
    cout << "TWo Things Are Done In The Company" << endl;
    cout << "1.Purchasing an Item" << endl;
    cout << "2.Make enquiries" << endl;
    cout << "Please Enter Your Name" << endl;
    cin >> name;


cout << "Enter Your unique ID" << endl;
    cin >> unique_ID;

    cout << "We Sell Three Items In This Company" << endl;

cout<< "A.PRINTER," <<endl;
cout << "B.PHONE," << endl;

cout << "C.TABLE" <<endl;
cout << "what do you want to buy one at a time" << endl;
    cin >> item;
    cout << "what quantity do you want do buy?" << endl;
    cin >> quantity;
    double vat =0.12;
     double printer_price = 800;
      double phone_price = 750;
       double table_price = 350;
    cout << "vat amount="<<vat << endl;
    cout << "total amount you owe" << endl;

    return 0;
}
