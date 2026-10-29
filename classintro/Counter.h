#ifndef COUNTER_H
#define COUNTER_H
class Counter {
private:
    int value;
    int step;
public:
    Counter();
    explicit Counter(int start);
    void increment();
    int getValue() const;
};
#endif
