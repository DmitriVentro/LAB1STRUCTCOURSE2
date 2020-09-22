#pragma once
struct datetime
{
	int year;
	int month;
	int day;



	void getNextDay()
	{
		day++;
		if (day > 28)
		{
			if ((day == 29) && (month == 2) && (year % 4 != 0))
			{
				day = 1;
				month++;
			}
			else if ((day == 30) && (month == 2))
			{
				day = 1;
				month++;
			}
			else if (day == 31)
			{
				if ((month != 3) || (month != 5) || (month != 7) || (month != 8) || (month != 10) || (month != 12))
				{
					day = 1;
					month++;
				}
			}
			else if (day > 31)
			{
				day = 1;
				month++;
				if (month > 12)
				{
					month = 1;
					year++;
				}
			}
		}
	}

	void getPreviousDay()
	{
		day--;
		if (day == 0)
		{
			if ((month == 3) && (year % 4 != 0))
			{
				day = 28;
				month--;
			}
			else if ((month == 3) && (year % 4 == 0))
			{
				day = 29;
				month--;
			}
			else if ((month - 1 == 3) || (month - 1 == 5) || (month - 1 == 7) || (month - 1 == 8) || (month - 1 == 10) || (month - 1 == 0))
			{
				day = 31;
				month--;
				if (month == 0)
				{
					month = 12;
					year--;
				}
			}
			else
			{
				day = 30;
				month--;
			}
		}
	}

	void getNextMonth()
	{
		if (month <= 12 && month > 0 && month != 0)
			if (month == 12)
			{
				month = 1;
				year++;
			}
			else month++;
	}

};