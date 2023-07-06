#include <string>

using namespace std;

class similarityChecker
{
public:
	int checkLength(const string& strA, const std::string& strB)
	{
		int max, min;

		if(strA.size() >= strB.size())
		{
			max = (int)strA.size();
			min = (int)strB.size();
		}
		else
		{
			max = (int)strB.size();
			min = (int)strA.size();
		}

		return getLengthScore(max, min);
				
	}

private:
	int getLengthScore(int max, int min)
	{
		float score = (1 - ((float)max - (float)min) / (float)min) * 60;
		
		if (score < 0) return 0;

		return (int)score;
	}
};