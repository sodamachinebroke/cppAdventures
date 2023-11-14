#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <iostream>

// Abstract class
class TaskManager {
public:
    // Pure virtual function for adding a task
    virtual void addTask(std::vector<Task> &tl) = 0;

    // Pure virtual function for removing a task
    virtual void removeTask(std::vector<Task> &tl) = 0;

    // Pure virtual function for listing tasks
    virtual void listTasks(std::vector<Task> &tl) = 0;

    // Virtual destructor (important for polymorphism)
    virtual ~TaskManager() {}
};

#endif // TASK_MANAGER_H
