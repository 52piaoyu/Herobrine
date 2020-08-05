// Copyright 2020 SMS
// License(Apache-2.0)

#ifndef INPUT_STATE_H_
#define INPUT_STATE_H_

///
#include "color.h"
///

typedef char input_t;
class ConsoleInput;

#include <string>

class InputState
{
public:
	virtual void        enter(ConsoleInput&);               // �л�����ǰ״̬ʱִ��
	virtual InputState* handle(ConsoleInput&, input_t) = 0; // �����뵱ǰ״̬�йص�����

	std::string toString() const;

protected:
	std::string str;
};

#endif // INPUT_STATE_H_
