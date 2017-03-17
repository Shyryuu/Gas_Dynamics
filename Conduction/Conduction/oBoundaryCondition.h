#pragma once

struct sRule
{
	oBoundaryCondition condition_;
	short flag_;

	double applyCondition(double _cond, double _x, double _y, double _z)
	{
		switch (this->flag_)
		{
		case 1:
			_cond += condition_.getConditionAt(_x, _y, _z);
			break;
		case 2:
			_cond += condition_.getConditionAt(_x, _y, _z);
			break;
		}

		return _cond;
	}
};

class oBoundaryCondition
{
private:


public:
	virtual double getConditionAt(double x, double y, double z);
};
