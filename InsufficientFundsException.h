#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

class InsufficientFundsException : public std::exception { // derived publicly from student exception
   InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;


}






#endif // __INSUFFICIENT_FUNDS_EXCEPTION_H__