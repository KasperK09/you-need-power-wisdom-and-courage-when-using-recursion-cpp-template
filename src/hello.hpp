class TriangleNumberCalculator
{
private:
    
public:
    //which returns the nth triangular number
    int value(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return n + value(n-1);
    }

    //which adds the nth and mth triangular numbers
    int add(int n, int m)
    {
        return value(n) + value(m);
    }
    
    //which subtracts the nth and mth triangular numbers
    int subtract(int n, int m)
    {
        return value(n) - value(m);
    }
};