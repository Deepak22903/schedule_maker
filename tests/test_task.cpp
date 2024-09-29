
#include "../include/Task.h"
#include <cassert>
#include <chrono>
#include <iostream>

void testTaskConstructor() {
  Task task(std::chrono::minutes(30), "Sample Task");

  // Check initial values
  assert(task.get_duration() == std::chrono::minutes(30));
  assert(task.get_description() == "Sample Task");
  assert(task.get_status() == PENDING);
}

void testSetters() {
  Task task(std::chrono::minutes(30), "Sample Task");

  // Set new values
  task.set_duration(std::chrono::minutes(60));
  task.set_description("Updated Task");
  task.set_status(COMPLETED);

  // Check updated values
  assert(task.get_duration() == std::chrono::minutes(60));
  assert(task.get_description() == "Updated Task");
  assert(task.get_status() == COMPLETED);
}

void testGetters() {
  Task task(std::chrono::minutes(45), "Getters Task", COMPLETED);

  assert(task.get_duration() == std::chrono::minutes(45));
  assert(task.get_description() == "Getters Task");
  assert(task.get_status() == COMPLETED);
}

int main() {
  testTaskConstructor();
  testSetters();
  testGetters();

  std::cout << "All tests passed!" << std::endl;
  return 0;
}
