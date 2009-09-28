#include "Environment.h"

namespace archipelago
{

int main(int argc, char* argv[])
{

  //this will be implemented once I have time, but for now, everything will be hardcoded
  //parse(argc, argv);

  initialize()
    
  
	
}


Environment::Environment()
{
}

Environment::~Environment()
{
}

  Environment::Environment* getInstance()
  {
    if(env == NULL)
      {
	env = new Environment();
      }
    return env;
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
  Environment* inst;
  

  if(init_state)
    {
      
    }
  
  
}


Environment:: void parse(int ac, char* av[])
{
	int param = 1;
	while(param < ac)
	{
		parse_cmd(av[param++]);	
	}
	
}

  Environment:: void setState(State* st)
  {
    
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
		  p++;
		  agent_num = (int)sw;
		}
		else if(sw == STATE)
		  {
		    p++;
		    init_state = (state)sw;
		  }
		else if(sw == FIELD_DIMENSION)
		{
		  p++;
		  field_dim = (int)sw;
		}
		else if(sw == PAYOFF_MATRIX)
		{
		  //OPEN payoff matrix file here
		}
		else if(sw == SEQ_SPACE)
		{
		  //open sequence space file here
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
