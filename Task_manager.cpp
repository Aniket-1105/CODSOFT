#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool isCompleted = false;
};

void showTasks(const vector<Task>& tasks) {
    if (tasks.empty()) 
    cout << "List is empty\n";
    else {
        cout << "\nYour Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i)
            cout << i + 1 << ". " << (tasks[i].isCompleted ? "[Completed] " : "[Pending] ") << tasks[i].description << "\n";
    }
}

void addTask(vector<Task>& tasks) {
    cin.ignore();
    cout << "Task Description: ";
    string desc; getline(cin, desc);
    tasks.push_back({desc});
    cout << "Task has been added successfully"<<endl;
}

void markTask(vector<Task>& tasks) {
    showTasks(tasks);
    if (tasks.empty()) 
    return;
    cout << "Enter task number= ";
    size_t num; cin >> num;
    if (num > 0 && num <= tasks.size()) {
        tasks[num - 1].isCompleted = true;
        cout << "Task marked as complete"<<endl;
    } 
    else
    cout << "Invalid task number.\n";
}

void removeTask(vector<Task>& tasks) {
    showTasks(tasks);
    if (tasks.empty()) return;
    cout << "Enter task number= ";
    size_t num; cin >> num;
    if (num > 0 && num <= tasks.size()) {
        cout << "Task has been removed successfully"<<endl;
        tasks.erase(tasks.begin() + num - 1);
    } 
    else 
    cout << "Invalid choice"<<endl;
}

int main() {
    vector<Task> tasks;
    cout<<"**********TASK MANAGER**********"<<endl;
    while (true) {
        cout << "\n1.Add Tasks\n2.View Tasks\n3.Mark Tasks as Completed\n4.Remove Tasks\n5.Exit";
        cout<<"\nEnter your choice= ";
        int choice; 
        cin >> choice;
        if (choice == 1) 
        addTask(tasks);
        else if (choice == 2) 
        showTasks(tasks);
        else if (choice == 3) 
        markTask(tasks);
        else if (choice == 4) 
        removeTask(tasks);
        else if (choice == 5) 
        break;
        else 
        cout << "Try again.\n";
    }
    cout << "\nExitting.....\n";
    return 0;
}
