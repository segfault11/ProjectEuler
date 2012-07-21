#include <iostream>

class Fibonacci 
{
    unsigned int mPreviousValue;
    unsigned int mCurrentValue;
    unsigned int mCounter;
public:
    Fibonacci(): mPreviousValue(0), mCurrentValue(1), mCounter(1) {} ;
    virtual ~Fibonacci() {};
    void computeNext()
    {
        unsigned int sum = mPreviousValue + mCurrentValue;
        
        mPreviousValue = mCurrentValue;
        mCurrentValue  = sum;
        mCounter++;
    }
    unsigned int getCurrentValue()
    {
        return mCurrentValue;
    }
};

int main(int argc, const char *argv[])
{
    Fibonacci f;
    unsigned int v = 0; 
    unsigned int sum = 0;

    while (v <= 4000000) 
    {
        v = f.getCurrentValue();
        f.computeNext();

        if (v % 2 == 0) 
        {
            sum += v;
        }
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
