#include <chrono>
#include <future>
#include <iostream>
#include <ratio>
#include <string>

enum task_status {
  PENDING,
  COMPLETED,
};
class Task {
private:
  std::chrono::duration<int, std::ratio<60>> duration;
  std::string description;
  task_status status;

public:
  // Constructor
  Task(std::chrono::duration<int, std::ratio<60>> duration,
       std::string description, task_status status = task_status::PENDING);

  // Setters
  // Setters
  void set_duration(std::chrono::duration<int, std::ratio<60>> duration);
  void set_description(std::string description);
  void set_status(task_status status);
  // Getter
  std::chrono::duration<int, std::ratio<60>> get_duration() const;
  std::string get_description() const;

  task_status get_status() const;
};
