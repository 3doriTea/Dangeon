#pragma once
#include <random>
#include <cstdint>

class Randomer
{
public:
	/// <summary>
	/// �V�[�h�l�w��
	/// </summary>
	/// <param name="_seed">�V�[�h�l</param>
	Randomer(const uint32_t _seed);
	/// <summary>
	/// �V�[�h�l��{���̃����_��
	/// </summary>
	Randomer();
	~Randomer();

	/// <summary>
	/// ���̗����𐶐�����
	/// </summary>
	/// <param name="_max">�ő�l</param>
	/// <returns>���������l</returns>
	int NextInt(int _max = INT_MAX);

private:
	std::mt19937 randomEngine_;  // �����G���W��
};
