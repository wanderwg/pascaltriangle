#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>>PascalTriangle(size_t nRows)
{
	vector<vector<int>>vRet;
	if (nRows == 0)
		return vRet;
	vRet.resize(nRows);
	for (size_t i = 0; i < nRows; ++i){
		vRet[i].resize(i + 1);
		vRet[i][0] = vRet[i][i] = 1;
	}
	for (size_t i = 2; i < nRows; ++i)
	{
		for (size_t j = 1; j < i; ++j)
			vRet[i][j] = vRet[i - 1][j - 1] + vRet[i - 1][j];
	}
	return vRet;
}

int main1()
{
	vector<vector<int>>vRet = PascalTriangle(9);
	for (size_t i = 0; i < vRet.size(); ++i)
	{
		for (size_t j = 0; j < vRet[i].size(); ++j)
			cout << vRet[i][j] << " ";
		cout << endl;
	}
	return 0;
}