#ifndef INPUT_H_
#define INPUT_H_

#include "Definition.h"

class Input {
public:
	Input();
	~Input();

	// 入力処理
	void InputName();

	// 続行処理
	bool InputContinueOrEnd();
};

#endif
