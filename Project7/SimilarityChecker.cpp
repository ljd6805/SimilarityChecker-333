#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class similarityChecker
{
public:
	int checkAlphaScore(const string& input1, const string& input2)
	{
		int result = 0;
		
		int totalcnt = count_totalAlpha(input1, input2);

		int samecnt = count_sameAlpha(input1, input2);

		return 40*samecnt/totalcnt;
	}

	int count_totalAlpha(const string& input1, const string& input2)
	{
		int arr_alpha[26] = { 0, };
		int totalcnt = 0;
		for (char ch : (input1 + input2)) {
			int index = ch - 'A';
			arr_alpha[index] = 1;
		}

		for(int alpha : arr_alpha)
		{
			totalcnt += alpha;
		}

		return totalcnt;
	}

	int count_sameAlpha(const string& input1, const string& input2)
	{
		int arr_alpha[26] = { 0, };
		int samecnt = 0;
		for(char ch : input1)
		{
			for(char ch2 : input2)
			{
				if(ch == ch2)
				{
					int index = ch - 'A';
					if(arr_alpha[index]==0)
					{
						arr_alpha[index]=1;
						samecnt+=1;
						break;
					}
				}
			}
		}
		return samecnt;
	}
};
