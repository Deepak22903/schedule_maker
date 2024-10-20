#include "Task.h"
#include <iostream>
#include <string>
#include <vector>

class Schedule {
private:
  std::string title;
  std::vector<Task> tasks;

public:
  Schedule(std::string title);
  bool addTask(Task task);
  bool removeTask(int index);
  std::vector<Task> getTasks();
  Task getTask(int index);
  void setTitle(std::string title);
  std::string getTitle();
};
