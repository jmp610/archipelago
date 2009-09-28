#include "Environment.h"

namespace archipelago
{

int main(int argc, char* argv[])
{
	parse(argc, argv);
	
}



Environment::Environment()
{
}

Environment::~Environment()
{
}



Environment:: void addAgent(Agent)
{
}

Environment:: int getPerformanceMeasure()
{
}

Environment:: void start(State)
{
}

Environment:: void initialize()
{
}

Environment:: void parse(int ac, char* av[])
{
	int param = 1;
	while(param < ac)
	{
		parse_cmd(av[param++]);	
	}
	
}

Environment:: void parse_cmd (char* param)
{
	char* p;										//for parsing the parameter
	char sw;										//switch value
	
	p = param;
	
	if(*p == '-')
	{
		p++;										//get next character
		sw = toupper(*p);
		
		if(sw == AGENT_NUM)
		{
			
		}
		else if(sw == FIELD_DIMENSION)
		{
		}
		else if(sw == PAYOFF_MATRIX)
		{
		}
		else if(sw == SEQ_SPACE)
		{
		}
		else if(sw == HELP)
		{
			showHelp();
		}
		else
		{
			cout<<"\"", sw,"\" is an unrecognized command"<<endl<<endl;
			showHelp();
		}	
		
	}
}

Environment:: void check(bool isTrue, int error_num, char* message)
{
	if(!isTrue)
	{
		cout<<"ERROR(", error_num,")",message<<endl;
		exit(error_num);
	}
}

Environment:: void showHelp()
{
	//display the help text here
	
	exit(0);
}


}