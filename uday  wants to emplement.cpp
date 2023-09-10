#include <iostream>
#include <string>

class ContactList {
private:
    static const int MAX_CONTACTS = 20;
    std::string contactNames[MAX_CONTACTS];
    std::string contactNumbers[MAX_CONTACTS];
    int numContacts;

public:
    ContactList() : numContacts(0) {}

    void addContact(const std::string& name, const std::string& number) {
        if (numContacts < MAX_CONTACTS) {
            contactNames[numContacts] = name;
            contactNumbers[numContacts] = number;
            numContacts++;
        }
    }

    std::string searchContact(const std::string& nameToSearch) {
        for (int i = 0; i < numContacts; i++) {
            if (contactNames[i] == nameToSearch) {
                return contactNumbers[i];
            }
        }
        return "Contact not found.";
    }
};

int main() {
    int N;
    std::cin >> N;

    ContactList contactList;

    for (int i = 0; i < N; i++) {
        std::string name, number;
        std::cin >> name >> number;
        contactList.addContact(name, number);
    }

    std::string searchName;
    std::cin >> searchName;

    std::string result = contactList.searchContact(searchName);
    std::cout << result << std::endl;

    return 0;
}

