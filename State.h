#ifndef STATE_H_
#define STATE_H_

namespace archipelago
{

class State
{
public:
	State();									//ctor
	virtual ~State();							//dtor
	virtual void display()						//display state information (could update a graphical display)
	
};

}

#endif /*STATE_H_*/
