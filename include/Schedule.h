#include "Task.h"
#include <iostream>
#include <string>
#include <vector>

class Schedule {
private:
  std::string title;
  std::vector<Task> tasks;

public:
  int addTask(Task task);
  int removeTask(int index);
  std::vector<Task> getTasks();
  Task getTask(int index);
};
