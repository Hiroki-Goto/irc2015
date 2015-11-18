#include "Comet.h"

DigitalOut L1(LED1),L2(LED2),L3(LED3),L4(LED4);

//�S�̂̏������̏���
void initialize(){
    stop();         wait(1);                    //�d������ꂽ����̓��[�^����]���邽�ߎ~�߂Ă����K�v����                   
    servo_ini();                                //�T�[�{�̏����p�� 
    wait(1);                              
    r_pulses = 0;   l_pulses = 0;               //�p���X�̏�����
    serch_data[1][0] = 0.0;
    g_X = g_Y = g_theta = 0.0;                    //�I�h���g���̏�����
    l_odometry_reset();
    l_theta = 0;                                //���[�J���p�x�̏�����
    serch_data[1][0]= 0.0;    //0=�߂���  1����     dis�Cdeg
    encoder_flag = ON;  switch_encoder();       //�G���R�[�_�̃t���OON   ���������p���X�̏���(�O�̂���)
    move_flag = OFF;    //file_flag = OFF;
}

void turn_on1(){
    L1 = 1;
    wait(0.5);
    L1 = 0;
}

void turn_on2(){
    L2 = 1;
    wait(0.5);
    L2 = 0;
}
void fine(){//�I�������鎞�̏���
            //�p�t�H�[�}���X�Ƃ�����
    servo_throw();
    while(1){
        PID(0,0);
    }
}






