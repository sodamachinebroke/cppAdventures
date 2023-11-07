#include <iostream>
#include <vector>

using namespace std;

struct Task
{
    string description;
    int priority;
};

int main()
{
    vector<Task> taskList; // a vector is a sort of list

    cout << "Hello and welcome!" << endl;

    while (true)
    {
        cout << "Select an option:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Remove task" << endl;
        cout << "3. List tasks" << endl;
        cout << "4. Exit application" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        Task newTask;

            switch (choice)
            {
            case 1:
            {
                cout << "Describe your task!" << endl;
                cin >> newTask.description;
                cout << "Give me the priority for said task!" << endl;
                cin >> newTask.priority;

                taskList.push_back(newTask);
                fflush(stdin);
                break;
            }
            /*case 2:
            {
                {
                int temp;
                cout << "Tell me, which task would you like to remove!" <<endl;
                bool wrong = true;
                while (wrong)
                {
                    cin >> temp;
                    if(temp < 0 && temp > taskList.size()-1)
                }
                
                
                }
                break;
            }*/
            default:
                break;
            }

        if (choice == 4)
        {
            cout << "Byeeee!" << endl;
            break;
        }
    }

    return 0;
}
