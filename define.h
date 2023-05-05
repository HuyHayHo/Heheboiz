#define TRAN_HUY 1
#define TRONG_NGHIA 2
#define TRUONG_HUY 3
#define KHAC_CONG 4
#define MINH_DUC 5
#define HOANG_HA 6
#define TRUNG_KIEN 7
#define VAN_MANH 8
#define PHUC_THINH 9
#define THANH_NAM 10

#define MAXIMUM_STUDENTS 1000
#define CHARACTERS 10000

typedef struct
{
    int bir;
    int thd;
    int ate;
}day;

struct student{
    char studentID[CHARACTERS];
    char lastName[CHARACTERS];
    char firstName[CHARACTERS];
    day birthdate;
    float algebraGrade;
    float calculusGrade;
    float programmingGrade;
    float gpa;
};
