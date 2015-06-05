
#include "cantorset.hpp"
#include <ostream>

using namespace std;

std::vector<CantorSet::Interval> next_step(std::vector<CantorSet::Interval> current_s)
{
  vector<CantorSet::Interval> next_step;

  // Two intervals that are initialized that will be used in the loop
  // to store the two intervals that are created for a given interval at the
  // step.
  CantorSet::Interval first_int;
  CantorSet::Interval second_int;
  for(int i ; i < current_s.size(); ++i) {
  
    first_int.begin  = (current_s[i].begin)/3;
    first_int.end = (current_s[i].end)/3;

    second_int.begin = (2/3) + ((current_s[i].begin)/3);
    second_int.end = (2/3) + ((current_s[i].end)/3);
    
    next_step.push_back(first_int);
    next_step.push_back(second_int);  
  }
  return next_step;
}

int main () {

  CantorSet::Interval first_interval;
  first_interval.begin = 0;
  first_interval.end = 1;
  vector<CantorSet::Interval> first_iter;
  first_iter.push_back(first_interval);

  CantorSet c_set;
  c_set.iterations_.push_back(first_iter);

  return 0;
}
