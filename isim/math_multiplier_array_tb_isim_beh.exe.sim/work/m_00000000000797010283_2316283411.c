/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Coert/Documents/GitHub/fpga-math-multiply-array/math_multiplier_array_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static const char *ng3 = "%d * %d != %d";
static int ng4[] = {1, 0};



static void Initial_16_0(char *t0)
{
    char t8[8];
    char t9[8];
    char t25[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3752);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB6:    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_power(t8, 32, t5, 32, t7, 32, 1);
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB7:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB9;

LAB10:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB12;

LAB13:    goto LAB1;

LAB8:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(20, ng0);
    xsi_set_current_line(20, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3024);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 5);

LAB14:    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_power(t8, 32, t5, 32, t7, 32, 1);
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB16;

LAB15:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB17;

LAB18:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    goto LAB6;

LAB16:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(21, ng0);
    t18 = (t0 + 3752);
    xsi_process_wait(t18, 20000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(21, ng0);
    t19 = (t0 + 2864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 3024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_multiply(t25, 8, t21, 5, t24, 5);
    t26 = (t0 + 1184U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t25 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t27);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t26);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t26);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB24;

LAB23:    if (t39 != 0)
        goto LAB25;

LAB26:    t43 = (t28 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    goto LAB14;

LAB24:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t42 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(22, ng0);
    t49 = (t0 + 2864);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t0 + 3024);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t0 + 1184U);
    t56 = *((char **)t55);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t51, 5, (char)118, t54, 5, (char)118, t56, 8);
    goto LAB29;

}


extern void work_m_00000000000797010283_2316283411_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_00000000000797010283_2316283411", "isim/math_multiplier_array_tb_isim_beh.exe.sim/work/m_00000000000797010283_2316283411.didat");
	xsi_register_executes(pe);
}
