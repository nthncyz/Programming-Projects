#include <iostream> 
#include <string>

using namespace std;

int main() {
    string name, eventType, location, theme, keyGuest;
    int numberofGuest;

    cout << "Please enter your name: ";
    cout << "\n";
    getline(cin, name);

    cout << "Please enter the type of event you are planning: ";
    cout << "\n";
    getline(cin, eventType);

    cout << "Please enter the location of the event: ";
    cout << "\n";
    getline(cin, location);

    cout << "Please enter the main theme or color scheme of the event: ";
    cout << "\n";
    getline(cin, theme);

    cout << "Please enter the name of a key guest or speaker. ";
    cout << "\n";
    getline(cin, keyGuest);

    cout << "Please enter the number of guests expected: ";
    cin >> numberofGuest;

    cout << "\nHello " << name << "!\n";
    cout << "Your " << eventType << " is all set to happen at " << location << ".\n";
    cout << "You can expect around " << numberofGuest << " guests to join the celebration.\n";
    cout << "The event will be adorned with a " << theme << " theme, making it a memorable day.\n";
    cout << "Special guest " << keyGuest << " will be the highlight of the event.\n";
    cout << "We are looking forward to helping you make your event successful!\n";

    // Prevents instant exit
    cin.ignore();
    cin.get();

    return 0;
}
