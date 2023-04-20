#include <stdexcept>

class NegativeNumberException : public std::runtime_error {
   public:
    NegativeNumberException()
        : std::runtime_error{"Negative number detected"} {}
};