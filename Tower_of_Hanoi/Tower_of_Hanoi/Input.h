#ifndef INPUT_H_
#define INPUT_H_

/**
* @file Input.h
* @brief Inputクラスのヘッダ
*/


/**
* @class Input
* @brief 入力処理をまとめたクラス
*/
class Input
{
public:
	Input();
	~Input();

	/**
	* @brief 移動元の杭番号入力関数
	* 移動させたい円盤がある杭の番号を入力する
	*
	* @return 入力した杭の番号
	*/
	int SelectSourcePile();


	/**
	* @brief 移動先の杭番号入力関数
	* 
	* @param source_pile_num　移動元の杭番号
	* @return 入力した杭番号
	*/
	int SelectDestinationPile(int source_pile_num);

};

#endif


