#pragma once
#include "Dungeon.h"
#include "Randomer.h"

/// <summary>
/// ���@��@�ɂ��_���W��������
/// </summary>
class DiggingDungeon : public Dungeon
{
public:
	using Dungeon::Dungeon;
	~DiggingDungeon();

	/// <summary>
	/// ���@��@�Ń_���W�����𐶐�����
	/// </summary>
	void Generate() override;

private:
	Randomer random_;
};
