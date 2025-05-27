#include <iostream>
#include <queue>

using namespace std;

class Concert {
private:
    queue<int> studentQueue;  // Queue to hold student IDs
    int maxCapacity;          // Maximum capacity of the theater

public:
    Concert(int capacity) {
        maxCapacity = capacity;
    }

    void addStudent(int studentID) {
        if (studentQueue.size() < maxCapacity) {
            studentQueue.push(studentID);
            cout << "Student " << studentID << " has been added to the queue and assigned a seat." << endl;
        } else {
            cout << "Sorry, the theater is full. Student " << studentID << " cannot be added." << endl;
        }
    }

    void removeStudent() {
        if (!studentQueue.empty()) {
            int frontStudent = studentQueue.front();
            studentQueue.pop();
            cout << "Student " << frontStudent << " has been removed from the queue and their seat is now available." << endl;
        } else {
            cout << "No students in the queue to remove." << endl;
        }
    }

    int getRemainingSeats() {
        return maxCapacity - studentQueue.size();
    }

    bool isTheaterFull() {
        return studentQueue.size() == maxCapacity;
    }
};

int main() {
    int theaterCapacity = 5; // This sets the maximum capacity of the theater
    Concert concert(theaterCapacity);

    concert.addStudent(1);
    concert.addStudent(2);
    concert.addStudent(3);
    concert.removeStudent();
    concert.addStudent(4);
    concert.addStudent(5);
    concert.addStudent(6); // This student won't be added because the theater is full

    cout << "Remaining seats: " << concert.getRemainingSeats() << endl;
    cout << "Is theater full? " << (concert.isTheaterFull() ? "Yes" : "No") << endl;

    return 0;
}
