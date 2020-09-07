/************************************************************
************************************************************/
#pragma once

/************************************************************
************************************************************/

/**************************************************
Derivation
	class MyClass : private ofx__NON_COPYABLE {
	private:
	public:
	};
**************************************************/
class ofx__NON_COPYABLE{
protected:
	ofx__NON_COPYABLE() {}
	~ofx__NON_COPYABLE() {}

private:
	void operator =(const ofx__NON_COPYABLE& src);
	ofx__NON_COPYABLE(const ofx__NON_COPYABLE& src);
};


