#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void mainMenu();
int back;
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};
class Details
{
public:
    static string name, gender;
    int phoneno;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\n Enter the customer ID:" << endl;
        cin >> cId;
        cout << "\n Enter the customer name:" << endl;
        cin >> name;
        cout << "\n Enter the customer address:" << endl;
        cin >> add;
        cout << "\n Enter the customer gender:" << endl;
        cin >> gender;
        cout << "your details are saved with us" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubaai", "canada", "Australia", "Euprope"};

        for (int a = 0; a < 4; a++)
        {
            cout << (a + 1) << ".flight to"
                 << " " << flightN[a] << endl;
        }

        cout << "\n welcome to the Indigo Airline!!" << endl;
        cout << "press the number of the country of which you want to book the flight" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "________________Welcome to Dubai Emirates" << endl;
            cout << "Your comfort is  our priority,enjoy the journey!!" << endl;
            cout << "following are the flights\n"
                 << endl;

            cout << "1.DUB-498 " << endl;
            cout << "\t28|11|2022 8:30Am 10hours Rs.14000" << endl;
            cout << "2.DUB-658 " << endl;
            cout << "\t28|11|2022  12:00Am 12hours Rs.9000" << endl;
            cout << "3.DUB-567 " << endl;
            cout << "\t28|11|2022  5:00Pm 14hour Rs.8000" << endl;

            cout << "\nselect the flight you want to book:" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "\n you have successfully booked the flight to DUB-498" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 9000;
                cout << "\n you have successfully booked the flight to DUB-658" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 8000;
                cout << "\n you have successfully booked the flight to DUB-567" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input go back to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 2:
        {
            cout << "______________Welcome to the Canadian flight_____________" << endl;
            cout << "Your comfort is  our priority,enjoy the journey!!" << endl;
            cout << "following are the flights\n"
                 << endl;

            cout << "1.CA-198 " << endl;
            cout << "\t30|11|2022 8:30Am 17hours Rs.39000" << endl;
            cout << "2.CA-323 " << endl;
            cout << "\t30|11|2022  12:00Am 15hours Rs.23000" << endl;
            cout << "3.CA-222 " << endl;
            cout << "\t30|11|2022  5:00Pm 12hour Rs.20000" << endl;

            cout << "\nselect the flight you want to book:" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 39000;
                cout << "\n you have successfully booked the flight to CA-198" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 23000;
                cout << "\n you have successfully booked the flight to CA-323" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 20000;
                cout << "\n you have successfully booked the flight to CA-222" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input go back to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 3:
        {
            cout << "______________Welcome to the Australian flight_____________" << endl;
            cout << "Your comfort is  our priority,enjoy the journey!!" << endl;
            cout << "following are the flights\n"
                 << endl;

            cout << "1.Au-136 " << endl;
            cout << "\t1|12|2022 8:30Am 15hours Rs.50000" << endl;
            cout << "2.AU-336 " << endl;
            cout << "\t1|12|2022  12:00Am 14hours Rs.45000" << endl;

            cout << "\nselect the flight you want to book:" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 50000;
                cout << "\n you have successfully booked the flight to AU-136" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 45000;
                cout << "\n you have successfully booked the flight to Au-336" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input go back to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 4:
        {
            cout << "___________________Welcome to Europe Airline____________________" << endl;
            cout << "Your comfort is  our priority,enjoy the journey!!" << endl;
            cout << "following are the flights\n"
                 << endl;

            cout << "1.Eu-458 " << endl;
            cout << "\t2|12|2022 9:30Am 15hours Rs.60000" << endl;
            cout << "\nselect the flight you want to book:" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\n you have successfully booked the flight to Eu-458" << endl;
                cout << "you can go back to the menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input go back to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
        {
            cout << "Invalid input go back to the previous menu" << endl;
            mainMenu();
            break;
        }
        }
    }
};

float registration::charges;
int registration::choice;

 
class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "________________Indigo Airline__________________" << endl;
            outf << "______________Ticket______________" << endl;
            outf << "________________________________________________" << endl;

            outf << "Customer ID-" << Details::cId << endl;
            outf << "Customer name-" << Details::name << endl;
            outf << "Customer gender-" << Details::gender << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (registration::choice == 3)
            {
                destination = "Australia";
            }
            else if (registration::choice ==4)
            {
                destination = "Europe";
            }
            else{
                cout<<"ivalid input"<<endl;
            }

            cout << "Destination\t\t" << destination << endl;
            cout << "flight cost\t\t" << registration::charges << endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "file error" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t                  Indigo Airlines\n"
         << endl;
    cout << "______________MainMenu______________" << endl;
    cout << "\t__________________________________" << endl;
    cout << "\t\t\t\t\t\t" << endl;
    cout << "\t|\t  press 1 to add the customer details   \t|" << endl;
    cout << "\t|\t  press 2 for flight registration       \t|" << endl;
    cout << "\t|\t  press 3 for ticket and charges        \t|" << endl;
    cout << "\t|\t  press 4 for exit                      \t|" << endl;
    cout << "\t\t\t\t\t\t" << endl;
    cout << "\t__________________________________" << endl;

    cout << "Enter the choice:" << endl;
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "________________Customer____________\n"
             << endl;
        d.information();
        cout << "press any key to go back to the main menu" << endl;
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "______________Book a flight_________________\n"
             << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "____Get your ticket____\n"
             << endl;
        t.Bill();

        cout << "your ticket is printed,you can collect it" << endl;
        cout << "press 1 to display your ticket" << endl;
        cin >> back;
        if (back == 1)
        {
            t.dispBill();
            cout << "press any key to go back to mainMenu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t__________Thank you_________" << endl;
        break;
    }
    default:
    {
        cout << "Invalid input,please try again!" << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management Mobj;
    return 0;
}