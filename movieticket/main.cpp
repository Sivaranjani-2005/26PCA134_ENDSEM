#include <iostream>
#include <queue>
using namespace std;

class MovieTicket
{
    string movieName;
    int seatNumber;
    float ticketPrice;

public:
    MovieTicket(string name, int seat,float price)
    {
        movieName=name;
        seatNumber=seat;
        ticketPrice=price;
    }
    void display()
    {
        cout<<"Movie Name:"<<movieName<<endl;
        cout<<"Seat Number:"<<seatNumber<<endl;
        cout<<"Ticket Price: Rs."<<ticketPrice<<endl;
    }
};
int main()
{
    MovieTicket ticket1("JanaNayagan", 10, 250.00);
    MovieTicket ticket2("Doreamon", 15, 200.00);
    cout << "Ticket 1" << endl;
    ticket1.display();
    cout << "Ticket 2" << endl;
    ticket2.display();
   return 0;
}
