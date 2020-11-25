#include "TetriminoManager.h"

TetriminoManager::TetriminoManager():
	m_active_tetrimino(nullptr),
	m_waiting_tetrimino(nullptr)
{
}

TetriminoManager::~TetriminoManager()
{
	if (m_active_tetrimino != nullptr) {
		delete m_active_tetrimino;
		m_active_tetrimino = nullptr;
	}
	if (m_waiting_tetrimino != nullptr) {
		delete m_waiting_tetrimino;
		m_waiting_tetrimino = nullptr;
	}
}

void TetriminoManager::Update()
{
	if (m_active_tetrimino != nullptr) {
		m_active_tetrimino->Update();
	}
}

void TetriminoManager::Draw(DrawerBase* drawer_)
{
	if (m_active_tetrimino != nullptr) {
		m_active_tetrimino->Draw(drawer_);
	}
}

void TetriminoManager::CreateTetrimino()
{
	if (m_waiting_tetrimino == nullptr) {
		// ランダムで1つテトリミノを生成
	}
}

void TetriminoManager::DestroyActiveTetrimino()
{
	if (m_active_tetrimino != nullptr) {
		delete m_active_tetrimino;
		m_active_tetrimino = nullptr;
	}
}
