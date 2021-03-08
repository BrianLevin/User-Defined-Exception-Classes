#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException: public std::exception 
{
public:
    IllegalBalanceException() noexcept = default; // default constructor and garenteeing no exceptions being thrown
    ~IllegalBalanceException() {}
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
