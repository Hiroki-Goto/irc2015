#include "mbed.h"
#include "robo_para.h"  //���{�b�g�̃p�����[�^
#include "define.h"     //���̑��ϐ��p

//�^������
#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"           //�֐��錾