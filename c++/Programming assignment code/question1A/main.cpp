#include <iostream>
#include <limits> // Checks for input validation

using namespace std;

// Defines a struct to represent a leave day
struct LeaveDay {
    int day;
    LeaveDay* next;
};

// Defines a class to manage leave days using a linked list
class LeaveManager {
private:
    LeaveDay* head = nullptr;

public:
    // Function to add a leave day to the linked list
    void addLeaveDay(int day) {
        LeaveDay* newLeave = new LeaveDay{day, nullptr};
        if (!head) {
            head = newLeave;
        } else {
            LeaveDay* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newLeave;
        }
    }

    // Function to display the selected leave days
    void displayLeaveDays() {
        LeaveDay* current = head;
        cout << "Selected Leave Days: ";
        while (current) {
            cout << current->day << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to free memory when the LeaveManager object is destroyed
    ~LeaveManager() {
        while (head) {
            LeaveDay* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LeaveManager leaveManager;
    int userChoice;

    while (true) {
        // Displays the Leave Management Menu
        cout << "Leave Management Menu:" << endl;
        cout << "1. Select a single leave day" << endl;
        cout << "2. Select multiple leave days" << endl;
        cout << "3. Display selected leave days" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;

        // Checks for invalid input (non-integer or out-of-range)
        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards invalid input
            cout << "Invalid input. Please enter a valid menu choice." << endl;
            continue; // Skips the rest of this iteration
        }

        switch (userChoice) {
            case 1:
                int singleDay;
                cout << "Enter a single leave day: ";
                cin >> singleDay;

                // Checks for invalid input (non-integer or non-positive)
                if (cin.fail() || singleDay <= 0) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a positive integer for the leave day." << endl;
                    continue;
                }

                leaveManager.addLeaveDay(singleDay);
                cout << "Leave day " << singleDay << " selected." << endl;
                break;
            case 2:
                int startDay, endDay;
                cout << "Enter the start and end day of the leave range: ";
                cin >> startDay >> endDay;

                // Checks for invalid input (non-integer, non-positive, or start > end)
                if (cin.fail() || startDay <= 0 || endDay <= 0 || startDay > endDay) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter valid positive integers for the range (start < end)." << endl;
                    continue;
                }

                for (int day = startDay; day <= endDay; ++day) {
                    leaveManager.addLeaveDay(day);
                    cout << "Leave day " << day << " selected." << endl;
                }
                break;
            case 3:
                leaveManager.displayLeaveDays();
                break;
            case 4:
                leaveManager.displayLeaveDays();
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
