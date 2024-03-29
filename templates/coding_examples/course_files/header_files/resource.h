#pragma once
#include "string"


class Resource
{
    private:
        std::string name;
    public:
        Resource(std::string n);
        virtual ~Resource(void);
        virtual std::string getName() const {return name;}
};