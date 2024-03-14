#include <iostream>




int main(int argc, char** argv)
{
	if (argc==0)
	{
		std::cout<<"Include -s to split or -c to combine"<< std::endl;
		return 1;
	}


	if (argv[0]=="-s")
	{

	}
	else if (argv[0]=="-c")
	{

	}
	else
	{
		std::cout << "Invalid argument" << std::endl;
		return 2;
	}



	return 0;
}