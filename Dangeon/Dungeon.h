#pragma once
#include <vector>

/// <summary>
/// �_���W�����̃f�[�^�N���X
/// </summary>
class Dungeon
{
public:
	enum struct TileType
	{
		None,  // �� (�Ȃɂ��Ȃ�)
		Wall,  // ��
	};

public:
	Dungeon(const int _width, const int _height);
	~Dungeon();

public:
	virtual void Generate();

	/// <summary>
	/// �w��̃^�C���^�C�v���擾����
	/// </summary>
	/// <param name="_x"></param>
	/// <param name="_y"></param>
	/// <returns></returns>
	const TileType GetTile(const int _x, const int _y) const;

	/// <summary>
	/// �������擾����
	/// </summary>
	/// <returns>����</returns>
	const int GetWidth() const { return width_; }
	/// <summary>
	/// �������擾����
	/// </summary>
	/// <returns>����</returns>
	const int GetHeight() const { return height_; }
protected:
	/// <summary>
	/// �^�C�����Z�b�g����
	/// </summary>
	/// <param name="_type">�^�C���̎��</param>
	/// <param name="_x"></param>
	/// <param name="_y"></param>
	void SetTile(const TileType _type, const int _x, const int _y);

	/// <summary>
	/// �K���O�����ǂł���悤�Ƀ��Z�b�g����
	/// </summary>
	void ResetOuterWall();
	/// <summary>
	/// �K����ʒu���ǂł���悤�Ƀ��Z�b�g����
	/// </summary>
	void ResetPillarWall();

	/// <summary>
	/// �S���𖄂߂�
	/// </summary>
	/// <param name="_type">���߂�^�C��</param>
	void FillAllTile(const TileType _type);

private:
	std::vector<TileType> tiles_;  // �^�C���̃f�[�^
	int width_;   // ����
	int height_;  // ����
};

