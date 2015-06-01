// Author: Jazmin Ortiz
//
// Last Modified: 05/31/15

#ifndef STEP_HPP_INCLUDED
#define STEP_HPP_INCLUDED 1

#include <cstddef>
#include <vector>

/**
 * class: step
 * This contains a representation of the set of intervals that are contained
 * within the Cantor set at the nth step.
 **/
class Step {

public:
  
  /**
   * struct: Interval
   * This contains a single valid interval within a given step.
   **/
  struct Interval {
    float interval[2];
  };
  
  // Returns a size_t which represents the step.
  size_t get_step_num() const;

  // Returns a vector which contains all the intervals that are contained in
  // this step.
  std::vector<Interval> get_intervals() const;
  
private:
  
  // size_t which contains the current step 
  size_t step_number_;

  // A vector which contains all of the intervals in the current step.
  std::vector<Interval> interval_;
    
};

#endif // STEP_HPP_INCLUDED
