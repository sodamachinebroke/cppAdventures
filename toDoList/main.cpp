#include <iostream>
#include <vector>
#include <limits>
#include <header/taskManager.h>
#include <header/common.h>

class concreteTaskManager : public TaskManager
{
private:
    std::vector<std::string> tasks;

public:
    void addTask(std::vector<Task> &tl) override
    {
        Task newTask;

        std::cout << "Describe your task!" << std::endl;
        std::cin >> newTask.description;
        std::cout << "Give me the priority for said task!" << std::endl;
        std::cin >> newTask.priority;

        tl.push_back(newTask);
        fflush(stdin);
    }
    void removeTask(std::vector<Task> &tl) override
    {
        int temp;
        std::cout << "Tell me, which task would you like to remove!" << std::endl;
        std::cin >> temp;
        while (temp < 0 || temp > tl.size() - 1)
        {
            tl.erase(tl.begin() + temp);
        }
    }
    void listTasks(std::vector<Task> &tl) override
    {
        std::cout << "Listing all tasks!" << std::endl;
        for (int i = 0; i < tl.size(); i++)
        {
            std::cout << "Description: " << tl[i].description << "\nPriority: " << tl[i].priority << "\n"
                      << std::endl;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Press enter to continue..." << std::endl;
        std::cin.get();
    }
};

int main()
{
    concreteTaskManager taskManager;
    std::vector<Task> taskList; // a vector is a sort of list

    std::cout << "Hello and welcome!" << std::endl;

    while (true)
    {
        std::cout << "Select an option:" << std::endl
                  << "1. Add task" << std::endl
                  << "2. Remove task" << std::endl
                  << "3. List tasks" << std::endl
                  << "4. Exit application" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            taskManager.addTask(taskList);
            break;
        }
        case 2:
        {
            taskManager.removeTask(taskList);
            break;
        }

        case 3:
        {
            taskManager.listTasks(taskList);
            break;
        }

        case 4:
        {
            std::cout << "Byeeee!" << std::endl;
            return 0;
        }

        default:
        {
            break;
        }
        }
    }
}
