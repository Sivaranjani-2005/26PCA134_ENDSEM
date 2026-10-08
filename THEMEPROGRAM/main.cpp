#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> rideQueue;
    int choice;
    string name;

    do
    {
        cout << "\n--- Ride Queue ---\n";
        cout << "1. Add a person\n";
        cout << "2. Allow first person to enter the ride\n";
        cout << "3. Display waiting queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (rideQueue.size() == 5)
                {
                    cout << "Queue is full! No more people can wait.\n";
                }
                else
                {
                    cout << "Enter person's name: ";
                    cin >> name;
                    rideQueue.push(name);
                    cout << name << " has been added to the queue.\n";
                }
                break;

            case 2:
                if (rideQueue.empty())
                {
                    cout << "Queue is empty. No one is waiting.\n";
                }
                else
                {
                    cout << rideQueue.front()
                         << " is entering the ride.\n";
                    rideQueue.pop();
                }
                break;

            case 3:
                if (rideQueue.empty())
                {
                    cout << "Queue is empty.\n";
                }
                else
                {
                    cout << "Waiting Queue:\n";

                    queue<string> temp = rideQueue;
                    while (!temp.empty())
                    {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    }
    while (choice != 4);

    return 0;
}
