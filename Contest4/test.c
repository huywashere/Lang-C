#include <stdio.h>
#include <string.h>

#define MAX_N 1000
#define PASS_SCORE 24

typedef struct {
    char name[101];
    char dob[20];
    char address[51];
    int math, physics, chemistry;
    int total_score;
} Student;

void print_student(Student s, int passed) {
    printf("%s %s %s %d %s\n", s.name, s.dob, s.address, s.total_score, passed ? "DO" : "TRUOT");
}

int main() {
    int n;
    scanf("%d\n", &n);
    Student students[MAX_N];
    for (int i = 0; i < n; i++) {
        fgets(students[i].name, 101, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Xóa ký tự xuống dòng

        fgets(students[i].dob, 20, stdin);
        students[i].dob[strcspn(students[i].dob, "\n")] = 0;

        fgets(students[i].address, 51, stdin);
        students[i].address[strcspn(students[i].address, "\n")] = 0;

        scanf("%d %d %d\n", &students[i].math, &students[i].physics, &students[i].chemistry);
        students[i].total_score = students[i].math + students[i].physics + students[i].chemistry; 
        if (students[i].total_score > max_score) {
            max_score = students[i].total_score;
        }
    }
    printf("DANH SACH THU KHOA :\n");
    for (int i = 0; i < n; i++) {
        if (students[i].total_score == max_score) {
            print_student(students[i], 1);
        }
    }
    printf("KET QUA XET TUYEN:\n");
    for (int i = 0; i < n; i++) {
        print_student(students[i], students[i].total_score >= PASS_SCORE);
    }

    return 0;
}
