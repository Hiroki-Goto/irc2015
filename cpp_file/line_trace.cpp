#include "Comet.h"

//BusOut myled(LED1, LED2, LED3, LED4);

DigitalIn ll(p8),l(p7),r(p6),rr(p5);

/*
 * @brief ���C���g���[�X������֐�
 * 
  * @param[in] goal �����C���̖{���C���̖{�������ʉ߂���ƏI��
 */
void Line_Trace(int goal){
    int e,f,g,h;
    float limit = 0.2;
    int num = 0;
    float timer = 0.0;
    int count = 0;
    
    while( count != goal ){
        
        e = ll.read();
        num += e;
        num = num << 1;
        
        f = l.read();
        num += f;
        num = num << 1;
        
        g = r.read();
        num += g;
        num = num << 1;
        
        h = rr.read();
        num += h;
        
        if(num == 0 || num == 1  || num == 8){
            if(timer > limit){
                timer = 0.0;
                count++;
                l_integral = 0, r_integral = 0;
                //printf("%d\n",count);
            }
            PID(330, 330);
        }    
        if(num == 11)                          //l ������
            PID(-120, 400);                       //-100,600
//        if(num == 3)                           //ll, l ������
//          PID(-450, 450);
        if(num ==  7)                          //ll ������
            PID(-450, 450);
//        if(num == 12)                          //rr, r ������
//            PID(300, -100);
        if(num == 14)                          //rr ������
            PID(450, -450);
        if(num == 13)                          //r ������
            PID(400, 50);
        else{                                   //���̑��͑O�i
//            l_integral = 0;
            PID(380, 380);
        }
        num = 0;
        //�o�O�h�~�p
       //printf("%2.2f\t%2.2f\t%d\n",timer,limit,count);
        timer += DELTA_T;
//        wait_ms(1);
    }
    stop();
    l_odometry_reset();
}