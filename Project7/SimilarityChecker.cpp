#include <string>
#include <algorithm>

using namespace std;

class similarityChecker
{
public:
	int checkLength(const string& strA, const string& strB)
	{
		int long_length, short_length;

		long_length = (int)max(strA.length(), strB.length());
		short_length = (int)min(strA.length(), strB.length());

		return getLengthScore(long_length, short_length);
				
	}

private:
	int getLengthScore(int long_length, int short_length)
	{
		float score = (1 - ((float)long_length - (float)short_length) / (float)short_length) * 60;
		
		if (score < 0) return 0;

		return (int)score;
	}
};