#ifndef _CHAINE_HPP_
#define _CHAINE_HPP_

#include <sstream>
#include <iomanip>  //setprecision

class ExceptionChaine : public std::exception {
private:
    std::string errorMessage;

public:
    ExceptionChaine(const std::string &message) : errorMessage(message) {}

    virtual const char* what() const throw() {
        return errorMessage.c_str();
    }
};

template <typename T>
std::string chaine(const T & x) {
    throw ExceptionChaine("Conversion en chaine impossible pour '" + demangle(typeid(x).name()) + "'");
};

std::string chaine(const std::string & x) {
    return x;
};

std::string chaine(const int & x) {
    std::stringstream flux;
    flux << x;
    return flux.str();
};

std::string chaine(const double & x) {
    std::stringstream flux;
    flux << std::fixed << std::setprecision(6) << x; // 6 numéros après la virgule
    return flux.str();
};

template<typename... Args>
std::string chaine(const Args&... args) {
    std::stringstream ss;
    ((ss << chaine(args) << " "), ...);
    std::string result = ss.str();

    return result;
}

template<typename... Args>
std::string chaine(const std::tuple<Args...>& t) {
    std::stringstream ss;
    std::apply([&ss](const Args&... args) { ((ss << chaine(args) << " "), ...); }, t);
    auto result = ss.str();
    if (!result.empty()) {
        result.pop_back();
    }
    return result;
}

#endif