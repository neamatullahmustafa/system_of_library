#include <iostream>
using namespace std;
enum BOOK_NAME { medicine=0, pharmacy=1, engineering=2, media=3, science=4, agriculture=5, commerce=6, literature=7, law =8};
void print( int DAY , int MONTH)
{
    cout << " must be this book in the library on the most " << DAY << "/" << MONTH << endl;
}
int main()
{
    int month = 0, day = 0, hour = 0;
    string BOOK;
    BOOK_NAME book = law;
    cout << "please write the book name you want to bear" << endl;
    cin >> BOOK;
    if (book == medicine)
        book = medicine;
    else if (book == pharmacy)
        book = pharmacy;
    else if (book == engineering)
        book = engineering;
    else if (book == media)
        book = media;
    else if (book == agriculture)
        book = agriculture;
    else if (book == commerce)
        book = commerce;
    else if (book == literature)
        book = literature;
    else if (book == science)
        book = science;
    else if (book == law)
        book = law;

    cout << "month =" << endl;
    cin >> month;
    if (month < 0 || month > 12)
    {
        cout << "error in month" << endl;
        cin >> month;
    }
    cout << "day =" << endl;
    cin >> day;
    if (day < 0 || day > 30)
    {
        cout << "error in day" << endl;
        cin >> day;
    }
    cout << "hour =" << endl;
    cin >> hour;
    if (hour < 0 || hour > 24)
    {
        cout << "error in hour" << endl;
        cin >> hour;
    }
    switch (book)
  {
    case medicine:
    {    day += 10;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12;
    }
    print(day , month);
    break;
    case pharmacy:
    {   
        day += 20;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12;
    }
    print(day, month);
    break;
    case engineering:
    {   
        month++;
    if (month > 12)
        month -= 12;
    }
    print(day, month);
    break;
    case media:
    {   
        day += 10, month++;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12;
    }
    print(day, month);
    break;
    case science:
    {    day += 20, month++;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12; 
    }
    print(day, month);
    break;
    case agriculture:
    {   
        month += 2;
    if (month > 12)
        month -= 12; 
    }
    print(day, month);
    break;
    case commerce:
    {    day += 10, month += 2;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12;
    }
    print(day, month);
    break;
    case literature:
    { 
        day += 20;
        month += 2;
    if (day > 30)
    {
        day -= 30;
        month++;
    }
    if (month > 12)
        month -= 12; 
    }
    print(day, month);
    break;
    case law:
    {    month += 3;
    if (month > 12)
        month -= 12;
    }
    print(day, month);
    break;
  };
    return 0;
}
