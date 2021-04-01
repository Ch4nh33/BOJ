#include<stdio.h>
int main(void)
{
    int home_school;
    int school_PC;
    int pc_academy;
    int ac_home;
    int sum = 0;
    scanf("%d %d %d %d",&home_school,&school_PC,&pc_academy,&ac_home);
    sum = home_school+pc_academy+school_PC+ac_home;
    printf("%d\n%d",sum/60,sum%60);
    return 0;
}
