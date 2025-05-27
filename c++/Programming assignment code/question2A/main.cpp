#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Struct for an attendance record
struct AttendanceRecord {
    int day;
    int qualification;
    int count;
    AttendanceRecord* next;
};

// Custom stack class
class Stack {
private:
    AttendanceRecord* top;
    int count; // Keeps track of the stack size

public:
    Stack() {
        top = nullptr;
        count = 0; // Initialize count to 0
    }

    void push(AttendanceRecord* record) {
        record->next = top;
        top = record;
        count++; // Increments count when pushing
    }

    AttendanceRecord* pop() {
        if (isEmpty()) {
            return nullptr;
        }
        AttendanceRecord* temp = top;
        top = top->next;
        count--; // Decrements count when popping
        return temp;
    }

    AttendanceRecord* peek() {
        return top;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int size() { // Added the size function
        return count;
    }
};

// Attendance manager class
class AttendanceManager {
private:
    AttendanceRecord* head;

public:
    AttendanceManager() {
        head = nullptr;
    }

    void addAttendance(int day, int qualification, int count) {
        AttendanceRecord* newRecord = new AttendanceRecord{day, qualification, count, nullptr};
        newRecord->next = head;
        head = newRecord;
    }

    void displayAttendance(int day) {
        AttendanceRecord* current = head;
        cout << "Attendance for Day " << day << ":\n";
        while (current) {
            if (current->day == day) {
                cout << "Qualification " << current->qualification << ": " << current->count << " students\n";
            }
            current = current->next;
        }
    }

    int calculateCumulativeFrequency(int qualification) {
        int cumulativeFrequency = 0;
        AttendanceRecord* current = head;
        while (current) {
            if (current->qualification == qualification) {
                cumulativeFrequency += current->count;
            }
            current = current->next;
        }
        return cumulativeFrequency;
    }
};

int main() {
    Stack attendanceStack;
    AttendanceManager attendanceManager;
    string userChoiceStr; // Use string to handle user input as a string
    AttendanceRecord* recordToPush = nullptr; // Declares the variable outside the switch statement

    while (true) {
        cout << "Attendance Management Menu:\n";
        cout << "1. Record Attendance\n";
        cout << "2. Display Attendance for a Day\n";
        cout << "3. Calculate Cumulative Frequency\n";
        cout << "4. Push (Add an item to the stack)\n";
        cout << "5. Pop (Remove an item from the stack)\n";
        cout << "6. Peek (View the top item in the stack)\n";
        cout << "7. Is Stack Empty?\n";
        cout << "8. Stack Size\n";
        cout << "9. Quit\n";
        cout << "Enter your choice: ";
        cin >> userChoiceStr;

        // Converts the user's input to an integer
        int userChoice;
        try {
            userChoice = stoi(userChoiceStr);
        } catch (const invalid_argument& e) {
            cout << "Invalid input. Please enter a valid choice.\n";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards the input
            continue;
        }

        switch (userChoice) {
            case 1:
                int day, qualification, count;
                cout << "Enter the day: ";
                cin >> day;
                cout << "Enter the qualification (eg:100): ";
                cin >> qualification;
                cout << "Enter the attendance count: ";
                cin >> count;
                attendanceManager.addAttendance(day, qualification, count);
                break;
            case 2:
                cout << "Enter the day to display attendance: ";
                cin >> day;
                attendanceManager.displayAttendance(day);
                break;
            case 3:
                cout << "Enter the qualification to calculate cumulative frequency: ";
                cin >> qualification;
                cout << "Cumulative Frequency for Qualification " << qualification << ": " << attendanceManager.calculateCumulativeFrequency(qualification) << "\n";
                break;
            case 4:
                recordToPush = new AttendanceRecord{}; // Initialize it here
                cout << "Enter a day, qualification, and count to push onto the stack:\n";
                cin >> recordToPush->day >> recordToPush->qualification >> recordToPush->count;
                attendanceStack.push(recordToPush);
                break;
            case 5:
                if (!attendanceStack.isEmpty()) {
                    AttendanceRecord* poppedRecord = attendanceStack.pop();
                    cout << "Popped record: Day " << poppedRecord->day << ", Qualification " << poppedRecord->qualification << ", Count " << poppedRecord->count << "\n";
                    delete poppedRecord;
                } else {
                    cout << "Stack is empty. Cannot pop.\n";
                }
                break;
            case 6:
                if (!attendanceStack.isEmpty()) {
                    AttendanceRecord* topRecord = attendanceStack.peek();
                    cout << "Top record: Day " << topRecord->day << ", Qualification " << topRecord->qualification << ", Count " << topRecord->count << "\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 7:
                cout << "Is stack empty? " << (attendanceStack.isEmpty() ? "Yes\n" : "No\n");
                break;
            case 8:
                cout << "Stack size: " << attendanceStack.size() << "\n";
                break;
            case 9:
                if (recordToPush != nullptr) {
                    delete recordToPush; // Cleans up dynamically allocated memory
                }
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
