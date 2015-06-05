
#ifndef CANTORSET_HPP_INCLUDED
#define CANTORSET_HPP_INCLUDED 1

#include <vector>

/**
 * class: CantorSet
 * This contains a representation of the intervals for
 * the first n steps of the construction of the cantor set.
 **/
class CantorSet {

public:

  // Default constructor for CantorSet
  CantorSet() = default;
  
  // Default destructor for CantorSet
  ~CantorSet() = default;
  
  // Struct to contain the two doubles which define an interval, that is
  // included in a given iteration.
  struct Interval {
    double begin;
    double end;
  };
    
  // Takes in the intervals for a given set and returns the intervals for the
  // the next step
  std::vector<Interval> next_step(std::vector<Interval> current_s);
  
  std::vector<std::vector<Interval> > iterations_;
};


#endif // CANTORDUST_HPP_INCLUDED
