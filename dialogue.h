#include <iostream>
#include <map>
#include <string>

#ifndef DIALOGUE_H
#define DIALOGUE_H

class Dialogue {
 public:
  Dialogue();  // CTOR
  void PrintLine(std::string &line) const;
 
 public:
  // Here's all the Phase 1 dialogue!
  std::string intro = "it's a beautiful day outside. birds are singing,\n"
                      "flowers are blooming... on days like these, kids like you...\n"
                      "Should be burning in hell .";
  std::string intro_attack = "huh. always wondered why people never use their strongest\n"
                             "attack first.";
  std::string anomaly = "our reports showed a massive anomaly in the timespace\n"
                        "continuum. timelines jumping left and right, stopping and\n"
                        "starting... until suddenly, everything ends.";
  std::string your_fault = "heh heh heh... that's your fault isn't it?";
  std::string how_it_feels = "you can't understand how this feels.";
  std::string gonna_be_reset = "knowing that one day, without any warning... it's all going to\n"
                               "be reset.";
  std::string cant_go_back = "look. i gave up trying to go back a long time ago.";
  std::string no_surface_either = "and getting to the surface doesn't really appeal anymore, either.";
  std::string no_memory = "cause even if we do...\n"
                          "we'll just end up right back here, without any memory of it, right?";
  std::string blunt_laziness = "to be blunt... it makes it kind of hard to give it my all.";
  std::string poor_excuse = "... or is that just a poor excuse for being lazy...? hell if i know.";
  std::string have_to_care = "all i know is... seeing what comes next...\n"
                             "i can't afford not to care anymore.";
  std::string a = "";
  std::string b = "";
};

#endif