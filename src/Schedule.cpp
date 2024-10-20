#include "../include/Schedule.h"
#include <stdexcept>
#include <string>
#include <vector>

Schedule::Schedule(std::string title) : title(title) {}

bool Schedule::addTask(Task task) {
  tasks.push_back(task);
  return true;
}

bool Schedule::removeTask(int index) {
  if (index >= 0 && index < tasks.size()) {
    tasks.erase(tasks.begin() + index);
    return true;
  }
  return false;
}

std::vector<Task> Schedule::getTasks() { return tasks; }

Task Schedule::getTask(int index) {
  if (index >= 0 && index < tasks.size()) {
    return tasks[index];
  }
  throw std::out_of_range("Invalid task index");
}

void Schedule::setTitle(std::string title) { this->title = title; }

std::string Schedule::getTitle() { return title; }
