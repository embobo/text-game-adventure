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
#include <string.h>

class DescriptiveException : public std::exception {
public:
    DescriptiveException(const std::string& m) : msg_(m), src_("") {}
    DescriptiveException(const std::string& m,
                         const std::string& s) : msg_(m), src_(s) {}
    virtual char const *what() const noexcept {
        //std::string str = "<" + src_ + "> " + msg_;
        return ("<" + src_ + "> " + msg_).c_str(); }

private:
    std::string msg_;
    std::string src_;
};

#endif /* DescriptiveException_hpp */
