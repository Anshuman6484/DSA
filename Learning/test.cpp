#include <iostream>
#include <vector>

using namespace std;

void assignHostelRooms(vector<int>& hostels, const vector<int>& groups) {
    for (int roomsRequired : groups) {
        bool assigned = false;
        for (size_t i = 0; i < hostels.size(); ++i) {
            if (hostels[i] >= roomsRequired) {
                hostels[i] -= roomsRequired;
                assigned = true;
                cout << i + 1 << endl;
                break;
            }
        }
        if (!assigned) {
            cout << 0 << endl;
        }
    }
}

int main() {
    // Assuming the initial number of free rooms in each hostel
    vector<int> hostels = {10, 15, 8, 12};

    // Groups of students and their room requirements
    vector<int> groups = {5, 10, 3, 6};

    assignHostelRooms(hostels, groups);

    return 0;
}
