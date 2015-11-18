///////////�l�X�Ȋ֐���ϐ����i�[����ꏊ///////////
////////�����ɂ���̂͂ǂ��̊֐��icpp�t�@�C���j�ł��Q�Ɖ\////////

//color.cpp
GLOBAL int color;
GLOBAL int what_color();        

//servo.cpp
GLOBAL void servo_ini();
GLOBAL void servo_throw();        
GLOBAL void servo_ready();
GLOBAL void servo_up();
GLOBAL void servo_up2();   
GLOBAL void servo_catch();      

//hello_world.cpp
GLOBAL int guhu;
GLOBAL void switch_hello();

//switch�Ŏg�����̏�Ԃ��i�[�C�ォ��0,1,2�Ȋ���
GLOBAL enum state{
    init_state,         //�����ݒ�
    free_ball,          //�X�^�[�g����T���G���A�܂�
    ball_search,        //�{�[���T��
    ball_shoot,         //�e�{�[���V���[�g
    area_move,          //�{�[����������Ȃ��ꍇ�A�T���G���A���ړ�
    finish
}state;

//PSD.cpp
GLOBAL float Get_PSD_high();
GLOBAL float Get_PSD_low();
GLOBAL void PSD_reset();

//encoder.cpp
GLOBAL bool encoder_flag;               //�G���R�[�_���I�h���g���̃t���O
GLOBAL void switch_encoder();
//GLOBAL bool file_flag;
//GLOBAL void switch_file();
//GLOBAL float coordinates[500][3];
GLOBAL void l_odometry_reset();         //���݂̃��{�b�g�̈ʒu����ɂ���֐�
GLOBAL int r_pulses,l_pulses;           //���E�̃p���X
GLOBAL float r_omega,l_omega,omega;    //���E�ւ̉�]�p���x[rad/sec]
GLOBAL float g_X;                      //�O���[�o����x
GLOBAL float g_Y;                      //�O���[�o����y
GLOBAL float g_theta;                  //�O���[�o���Ȋp�x[deg]
GLOBAL float l_X;                      //���[�J����x
GLOBAL float l_Y;                      //���[�J����y
GLOBAL float l_theta;                  //���[�J���Ȋp�x[deg]

//PI.cpp
GLOBAL float l_integral,r_integral;       //���E���ꂼ��̕΍��̍��v
GLOBAL void PID(int l_terget, int r_terget);

//motion.cpp
GLOBAL bool move_flag;                  //�T���G���A�ړ��t���O
GLOBAL void turn(int deg);
GLOBAL void turn(float deg, bool mode);
GLOBAL void g_turn(float deg);
GLOBAL void stop();
GLOBAL void tansaku();
GLOBAL void serch();
GLOBAL void Ball_Catch();
GLOBAL void Ball_Shoot();
GLOBAL float serch_data[2][2];    //0=�߂���  1����     dis�Cdeg

//line_trace.cpp
GLOBAL void Line_Trace(int goal);

//state.cpp
GLOBAL void initialize();
GLOBAL void turn_on1();
GLOBAL void turn_on2();
GLOBAL void fine();  