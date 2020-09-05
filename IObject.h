#pragma once

class IObject {
public:
	virtual void draw() = 0;
	virtual void update() = 0;
	virtual void clear() = 0;
};