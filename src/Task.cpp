#include "../include/Task.h"

// Constructor
Task::Task(std::chrono::duration<int, std::ratio<60>> duration,
           std::string description, task_status status)
    : duration(duration), description(description), status(status) {}

// Setters
void Task::set_duration(std::chrono::duration<int, std::ratio<60>> duration) {
  this->duration = duration;
}

void Task::set_description(std::string description) {
  this->description = description;
}

void Task::set_status(task_status status) { this->status = status; }

// Getters
std::chrono::duration<int, std::ratio<60>> Task::get_duration() const {
  return duration;
}

std::string Task::get_description() const { return description; }

task_status Task::get_status() const { return status; }
