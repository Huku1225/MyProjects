#ifndef DEFINITION_H_
#define DEFINITION_H_

#include <cinttypes>

/**
* @file Definition.h
* @brief ��`���܂Ƃ߂��w�b�_
*/

//! �Y�̃T�C�Y
#define PILE_SIZE 3

//! �Y�̐�
#define PILE_NUM 3

//! �`��o�b�t�@�̃T�C�Y
#define DRAW_BUFFER_WIDTH  19
#define DRAW_BUFFER_HEIGHT 6

//! �`��o�b�t�@��ł̍��Y��X���W
#define LEFT_PILE_POS_X 1

//! �`��o�b�t�@��ł̐^�񒆍Y��X���W
#define CENTER_PILE_POS_X 7

//! �`��o�b�t�@��ł̉E�Y��X���W
#define RIGHT_PILE_POS_X 13

//! �`��o�b�t�@��ł̍Y��Y���W
#define PILE_POS_Y 2


//! �����X�e�b�v�̎��
enum class Step :uint8_t {
	Step_Initialize,	//! �������X�e�b�v
	Step_Update,		//! �X�V�X�e�b�v
	Step_End			//! ����X�e�b�v
};


/**
* @brief �~�Ղ̎��
* �ォ�珇�ɃT�C�Y�̏�������
*/
enum class DiskType :uint8_t {
	Disk_Empty,		//! ��
	Small_Disk,		//! �f�B�X�N��
	Normal_Disk,	//! �f�B�X�N��
	Large_Disk		//! �f�B�X�N��
};


//! �`��^�C�v
enum class DrawType :uint8_t {
	Type_Empty,		//! ��
	Type_Pile,		//! �Y
	Type_Disk,		//! �~��
	Type_Number1,	//! 1
	Type_Number2,	//! 2
	Type_Number3	//! 3
};


#endif
