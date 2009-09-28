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
        #define STATE                                  'i'                           //uses a given starting state
	//variables
 private:	
        state init_state=0;
	int agent_num=0;
	int field_dim=0;
	char payoff_file[FILESIZE]=0;
	char seq_file[FILESIZE]=0;
	State state=0;

	static final Environment* env;
	Environment();								//ctor is private (env is singleton
	

	
public:

	Environment* getInstance();                                      //returns pointer to singleton env
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
