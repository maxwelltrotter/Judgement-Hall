#include "dialogue.h"

#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std::chrono_literals;
Dialogue::Dialogue() {
  //
  PrintLine(this->intro);
  std::this_thread::sleep_for(3000ms);
  PrintLine(this->intro_attack);
  std::this_thread::sleep_for(2200ms);
  PrintLine(this->anomaly);
  std::this_thread::sleep_for(2500ms);
  PrintLine(this->how_it_feels);
  std::this_thread::sleep_for(2000ms);
  PrintLine(this->gonna_be_reset);
  std::this_thread::sleep_for(2300ms);
  PrintLine(this->cant_go_back);
  std::this_thread::sleep_for(2000ms);
  PrintLine(this->no_surface_either);
  std::this_thread::sleep_for(1700ms);
  PrintLine(this->no_memory);
  std::this_thread::sleep_for(2200ms);
  PrintLine(this->blunt_laziness);
  std::this_thread::sleep_for(2000ms);
  PrintLine(this->poor_excuse);
  std::this_thread::sleep_for(2100ms);
  PrintLine(this->have_to_care);
  std::this_thread::sleep_for(2800ms);
}

void Dialogue::PrintLine(std::string &line) const {
  std::cout << "<< " << line << " >>" << std::endl << std::endl;
};