#ifndef ACTION_H_
#define ACTION_H_

namespace archipelago
{

class Action
{
public:
	Action();									//ctor
	virtual ~Action();							//dtor
	virtual State execute(Agent, State);		//returns the state of the environment after agent has acted
private:

};

}

#endif /*ACTION_H_*/
