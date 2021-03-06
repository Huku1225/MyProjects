﻿#include "TetrisGameMap.h"
#include <cstring>

TetrisGameMap::TetrisGameMap():
	m_game_map{}
{
}

TetrisGameMap::~TetrisGameMap()
{
}

void TetrisGameMap::Update()
{
}

void TetrisGameMap::Draw(DrawerBase* drawer_)
{
	Vec2_Int draw_pos;
	for (draw_pos.m_y = 0; draw_pos.m_y < TETRIS_DRAW_HEIGHT; draw_pos.m_y++) {
		for (draw_pos.m_x = 0; draw_pos.m_x < TETRIS_DRAW_WIDTH; draw_pos.m_x++) {
			drawer_->SetDrawBuffer(draw_pos, m_game_map[draw_pos.m_y][draw_pos.m_x].m_draw_string);
		}
	}
}

void TetrisGameMap::Init()
{
	// 枠初期化
	InitFrame();
}

void TetrisGameMap::InitFrame()
{
	// 枠の定義
	TetrisObjectParam frame = {};
	frame.m_type = TetrisObjectType::FRAME;
	strcpy_s(frame.m_draw_string, TETRIS_DRAW_STRING_SIZE, "□");

	// 枠を埋める処理
	for (int i = 0; i < TETRIS_DRAW_HEIGHT; i++) {
		m_game_map[i][0] = frame;
		m_game_map[i][TETRIS_DRAW_WIDTH - 1] = frame;
	}

	for (int i = 1; i < TETRIS_DRAW_WIDTH - 1; i++) {
		m_game_map[TETRIS_DRAW_HEIGHT - 1][i] = frame;
	}
}
