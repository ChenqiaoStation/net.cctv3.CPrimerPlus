#include <stdio.h>
#include <string.h>

typedef struct {
    char name[21];
    int score;
}Student;

/**
 * @brief 比较规则，如果成绩相同，姓名按照字典序排列
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int compare(Student a, Student b) {
    return a.score < b.score ? 1 : (a.score == b.score ? (strcmp(a.name, b.name) >0 ? 1 : 0) : 0);
}

int main() {
    Student students[20];
    int n;
    scanf("%d", &n);
    int i, j;
    for(i=0;i<n;i++) {
        scanf("%s%d", students[i].name, &students[i].score);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            Student s;
            if(compare(students[i], students[j]) == 1) {
                s = students[i];
                students[i] = students[j];
                students[j] = s;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%s %d\n", students[i].name, students[i].score);
    }
    return 0;
}
