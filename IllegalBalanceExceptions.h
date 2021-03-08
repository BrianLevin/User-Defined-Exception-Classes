#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException: public std::exception 
{
public:
    IllegalBalanceException() noexcept = default; // default constructor and garenteeing no exceptions being thrown
    ~IllegalBalanceException() = default; // default destructor
     virtual const char *what() const noexcept { //  virtual function called to makesure sure that the correct overridden function is caleld
        return "Illegal balance exception";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
