#ifndef AGENT_H_
#define AGENT_H_

namespace archipelago
{

class Agent
{
public:
	Agent();									//ctor
	virtual ~Agent();							//dtor
	String getId();								//returns the unique ID associated with agent
	void see(Percept);							//called by environment to give agents percepts
	Action selectAction();						//allows the agent to make a decision on what to do, based on internal state
	
private:
	String agentID;								//unique Agent Identification
	
};

}

#endif /*AGENT_H_*/
