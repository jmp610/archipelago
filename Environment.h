#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

namespace archipelago
{

class Environment
{
	
	//command line options
	
	#define AGENT_NUM			'a'				//number of agents in simulation
	#define FIELD_DIMENSION		'd'				//the number of squares per side in the field
	#define PAYOFF_MATRIX		'p'				//location of payoff matrix file
	#define SEQ_SPACE			's'				//location of sequence space file
	#define HELP				'?'				//display the help text
	
	//variables
	
	int agent_num;
	int field_dim;
	char payoff_file[FILESIZE];
	char seq_file[FILESIZE];
	
public:
	Environment();								//ctor
	virtual ~Environment();						//dtor
	void addAgent(Agent);						//Add agent to the environment
	int getPerformanceMeasure();				//returns an indicator of the agent's performance
	void start(State);							//start the system from an initial state
	void initialize();							//canned init function for Environment
	void parse(int, char**);					//parses command line options
	void parse_cmd (char*);						//parses individual command
	void check(bool, int, char*);				//standard check function
	void showHelp();							//displays the help menu for commands
};

}

#endif /*ENVIRONMENT_H_*/
