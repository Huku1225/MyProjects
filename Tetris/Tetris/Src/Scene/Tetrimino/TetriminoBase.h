#ifndef TETRIMINO_BASE_H_
#define TETRIMINO_BASE_H_

#include "../../Utility/Utility.h"
#include "../../TetrisDefinition.h"
#include "../../Draw/DrawerBase.h"

/**
* @class TetriminoBase
* @brief テトリミノクラス
*/
class TetriminoBase
{
public:
	TetriminoBase();
	~TetriminoBase();

	/**
	* @brief 更新処理関数
	*/
	void Update();

	/**
	* @brief 初期化関数
	*/
	void Init();

	/**
	* @brief 描画処理関数
	*/
	void Draw(DrawerBase* drawer_);


protected:
	Vec2_Int m_pos;				//! 自身の座標（5×5の左上座標）
	TetrisObjectParam m_param;	//! 自身のパラメータ
	bool m_is_delete;			//! デリートフラグ

	int(*m_p_block_form)[TETRIMINO_WIDTH];		//! テトリミノの形情報

private:
	//! テトリミノの初期座標
	static const int TETRIMINO_INIT_POS_X = 2;
	static const int TETRIMINO_INIT_POS_Y = -2;

};

#endif