//defines entry point for the application


#include "resource.h"
#include "string"
using std::string;

int main()
{
    {
        Resource LocalResource("local");
        string local_string = LocalResource.getName();
    }
    Resource* pResource = new Resource("Created with new");
    string net_string = pResource-> getName();
    int j = 3;
    delete pResource;


    return 0;



}
