#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
#define _most_pattern_question_2019_
#define _Aditya_2019

using namespace std;
void reps();
void again();

class stars
{
    int x;
    int y;

public:
    int part_1()
    {
        cout << "******Rectangle Pattern*******" << endl;
        cout << "Enter row: ";
        cin >> x;
        cout << "Enter columb: ";
        cin >> y;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    };
    void part_2();
    void part_3();
    void part_4();
    void part_5();
    void part_6();

} final;

void stars ::part_2()
{
    cout << "*********Hollow Rectangle***********" << endl;
    cout << "Enter row: ";
    cin >> x;
    cout << "Enter columb: ";
    cin >> y;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (i == 1 || x == i || j == 1 || j == y)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
};
void stars ::part_3()
{

    cout << "********Half - Pyramid Print ***************" << endl;
    cout << "Enter Number: ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
};
void stars ::part_4()
{

    cout << "********Half - Pyramid inverted Print ***************" << endl;
    cout << "Enter Number: ";
    cin >> x;

    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
};
void stars::part_5()
{
    cout << "********Half - Pyramid 180 degree converted Print ***************" << endl;
    cout << "Enter Number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j <= x - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
};
void stars::part_6()
{
    cout << "*********Number Pyramid***********" << endl;
    cout << "Enter number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }
};

int main()
{

    cout << "===========Enter your choice(1-6)===============@Aditya-19" << endl;
    reps();
    int choice;
    cout << "Enter: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        final.part_1();
        cout<<endl<<endl<<endl;
        main();
    case 2:
        final.part_2();
        cout<<endl<<endl<<endl;
        main();
    case 3:
        final.part_3();
        cout<<endl<<endl<<endl;
        main();
    case 4:
        final.part_4();
        cout<<endl<<endl<<endl;
        main();
    case 5:
        final.part_5();
        cout<<endl<<endl<<endl;
        main();
    case 6:
        final.part_6();
        cout<<endl<<endl<<endl;
        main();
    case 7:
        cout<<"Have a nice day, thank you for using this program.";
        exit(1);    
    default:
        again();
        break;
    }

    return 0;
}

void reps()
{
    cout << "Option 1 = Rectangle Pattern Question\nOption 2 = Hollow-Rectangle Pattern Question" << endl;
    cout << "Option 3 = Half-Pyramid Question\nOption 4 = Half-Pyramid inverted Question" << endl;
    cout << "Option 5 = Half - Pyramid 180 degree converted Question\nOption 6 = Number Pyramid Question" << endl;
    cout<<"Option 7 to exit."<<endl;
}
void again()
{
    cout << "You have entered an invalid Option" << endl;
    cout << "You want to exit? \nPress 1 to continue\nPress 2 to exit" << endl;
    cout << "Enter option: ";
    int r;
    cin >> r;
    if (r == 1)
    {
        main();
    }
    else if (r == 2)
    {
        cout << "Have a nice day, thank you for using this program.";
    }
    else
    {
        again();
    }
}