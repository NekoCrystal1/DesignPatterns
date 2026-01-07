/**
 * @file Subject.hpp
 * @brief 抽象观察者实现：观察主题并被更新
 *
 */
#pragma once
#include <string>
class Observer
{
public:
	Observer() = default;
	~Observer() = default;
	virtual void update(int state) = 0;
protected:
	std::string name;
};
