﻿#ifndef RUNGAME_MAP_H_
#define RUNGAME_MAP_H_

#include "../RunGameDefinition.h"
#include "../../../Draw/Drawers/DrawerBase.h"
#include "../../../AllDefinition.h"

/**
* @class GameMap
* @brief　マップの生成、管理を行うクラス
*/
class RunGameMap
{
public:
	RunGameMap();
	~RunGameMap();

	/**
	* @brief 指定フレームのみ行う更新処理関数
	*
	* @param is_count_max_ カウントが指定フレームに達しているか
	*/
	void FixedUpdate(bool is_count_max_);

	/**
	* @brief 初期化関数
	*/
	void Init();

	/**
	* @brief 描画処理関数
	*/
	void Draw(DrawerBase* drawer_);

	/**
	* @brief Player情報をセットする関数
	*
	* @param player_pos_	プレイヤーの座標
	* @param player_		プレイヤーのパラメータ情報
	* @param player_head_	プレイヤーの上半身の情報
	*/
	void SetPlayer(Vec2_Int player_pos_, RunGameObjectParam player_, RunGameObjectParam player_head_);

	/**
	* @brief 地面に当たっているかを返す
	*
	* @param pos_ プレイヤーの座標
	* @return bool プレイヤーが地面に当たっていたらtrue
	*/
	bool IsHitGround(Vec2_Int pos_);

	/**
	* @brief 壁に当たっているか
	*
	* @param pos_ プレイヤーの座標
	* @return bool プレイヤーが壁と当たっていたらtrue
	*/
	bool IsHitWall(Vec2_Int pos_);


private:
	/**
	* @brief マップ生成関数
	*/
	void CreateMap();

	/**
	* @brief マップのパーツをマップに追加する関数
	*
	＊@param parts_ 追加先のマップの配列
	* @param height_ 追加先マップの高さ
	* @param add_num_ 何番目に追加するかの数
	*/
	void AddMapParts(int parts_[][RUNGAME_MAP_PARTS_WIDTH], int height_, int add_num_);

	/**
	* @brief 0、1のマップをパラメータが入ったマップに変換する関数
	*/
	void ConvertGameMap();

	/**
	* @brief カメラの更新関数
	*/
	void UpdateCamera();

	/**
	* @brief マップをクリアする関数
	*/
	void ClearMap();

	/**
	* @brief マップをゼロ初期化する関数
	*/
	void ZeroClearMaps();


private:
	//! 地面の配置のみを格納するマップ
	int m_ground_map[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_WIDTH];

	//! ゲームオブジェクトの情報を格納したマップ
	RunGameObjectParam m_game_map[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_WIDTH];

	//! ゲームオブジェクトの情報を格納したマップ
	RunGameObjectParam m_init_game_map[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_WIDTH];

	//! マップのパターン
	static int m_map_pattern1[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_PARTS_WIDTH];
	static int m_map_pattern2[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_PARTS_WIDTH];
	static int m_map_pattern3[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_PARTS_WIDTH];
	static int m_map_pattern4[RUNGAME_MAP_HEIGHT][RUNGAME_MAP_PARTS_WIDTH];

	//! カメラの座標
	Vec2_Int m_camera_pos;
	//! カメラのスピード
	int m_camera_speed;
};

#endif
