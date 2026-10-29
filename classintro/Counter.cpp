#include "Counter.h"
Counter::Counter() : value{0}, step{1} {}
Counter::Counter(int start) : value{start}, step{1} {}
void Counter::increment() { value += step; }
int Counter::getValue() const { return value; }
