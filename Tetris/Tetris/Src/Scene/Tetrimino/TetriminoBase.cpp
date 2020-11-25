#include "TetriminoBase.h"
#include <cstring>

TetriminoBase::TetriminoBase():
	m_pos{TETRIMINO_INIT_POS_X,TETRIMINO_INIT_POS_Y},
	m_param{},
	m_is_delete(false),
	m_p_block_form(nullptr)
{
}

TetriminoBase::~TetriminoBase()
{
}

void TetriminoBase::Update()
{
}

void TetriminoBase::Init()
{
	// パラメータの初期化
	m_param.m_type = TetrisObjectType::BLOCK;
	strcpy_s(m_param.m_draw_string, TETRIS_DRAW_STRING_SIZE, "■");
}

void TetriminoBase::Draw(DrawerBase* drawer_)
{
	for (int y = 0; y < TETRIMINO_HEIGHT; y++) {
		for (int x = 0; x < TETRIMINO_WIDTH; x++) {
			if (m_p_block_form[y][x] == 1) {
				drawer_->SetDrawBuffer(Vec2_Int(m_pos.m_x + x, m_pos.m_y + y), m_param.m_draw_string);
			}
		}
	}
}
