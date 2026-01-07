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
	Observer(std::string name);
	~Observer() = default;
	//默认为int状态，当然也可以在对应子类重载主题和观察者相关函数实现其他类型
	virtual void update(int state) = 0;
protected:
	std::string m_strName;
};

Observer::Observer(std::string name) : m_strName(name)
{
}
