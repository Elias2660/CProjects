// FreeStore.cpp : Defines the entry point for the console application.
//

#include "Resource.cpp"
#include "header_files/Person.h"
#include <string>
using std::string;

int main()
{
	{
		Resource localResource ("local");
		string localString = localResource.getName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->getName();
	int j =3;
	delete pResource;
	string string3 = pResource->getName();

	return 0;
}

