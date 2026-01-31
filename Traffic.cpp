#include <iostream>
#include <string>
using namespace std;

// Vehicle Node Class
class Vehicle {
public:
    int vehicleNumber;
    string type;
    Vehicle* next;

    Vehicle(int num, string t) {
        vehicleNumber = num;
        type = t;
        next = nullptr;
    }
};

// Traffic Signal Queue Class
class TrafficSignal {
private:
    Vehicle* front;
    Vehicle* rear;

public:
    TrafficSignal() {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue operation
    void vehicleArrives(int num, string type) {
        Vehicle* newVehicle = new Vehicle(num, type);
        if (rear == nullptr) {
            front = rear = newVehicle;
        } else {
            rear->next = newVehicle;
            rear = newVehicle;
        }
        cout << " Vehicle " << num << " (" << type << ") has arrived at the signal.\n";
    }

    // Dequeue operation
    void greenSignal() {
        if (front == nullptr) {
            cout << " No vehicles waiting at the signal.\n";
            return;
        }
        Vehicle* temp = front;
        cout << " Green Signal: Vehicle " << temp->vehicleNumber 
             << " (" << temp->type << ") has passed.\n";
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    // Display vehicles
    void displayVehicles() {
        if (front == nullptr) {
            cout << " No vehicles currently waiting.\n";
            return;
        }
        cout << " Vehicles waiting at the signal:\n";
        Vehicle* temp = front;
        while (temp != nullptr) {
            cout << "   Vehicle Number: " << temp->vehicleNumber 
                 << ", Type: " << temp->type << endl;
            temp = temp->next;
        }
    }

    // Destructor to clean memory
    ~TrafficSignal() {
        while (front != nullptr) {
            Vehicle* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

// Main Menu
int main() {
    TrafficSignal signal;
    int choice, num;
    string type;

    do {
        cout << "\n=== Traffic Signal System ===\n";
        cout << "1. Vehicle Arrives\n";
        cout << "2. Green Signal\n";
        cout << "3. Display Vehicles\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Vehicle Number: ";
            cin >> num;
            cout << "Enter Vehicle Type (Car/Bike/Truck/Bus): ";
            cin >> type;
            signal.vehicleArrives(num, type);
            break;
        case 2:
            signal.greenSignal();
            break;
        case 3:
            signal.displayVehicles();
            break;
        case 4:
            cout << " Exiting program. Goodbye!\n";
            break;
        default:
            cout << " Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
