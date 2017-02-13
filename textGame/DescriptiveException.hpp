//
//  DescriptiveException.hpp
//  textGame
//
//  Created by Emma on 2/13/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef DescriptiveException_hpp
#define DescriptiveException_hpp

#include <stdio.h>
#include <exception>
#include <string>

class DescriptiveException : public std::exception {
public:
    DescriptiveException(const std::string& m) : msg_(m) {}
    virtual char const *what() const noexcept { return msg_.c_str(); }

private:
    std::string msg_;
};

#endif /* DescriptiveException_hpp */
