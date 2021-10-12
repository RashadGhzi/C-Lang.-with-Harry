#include <stdio.h>
typedef struct driver
{
    char name[60];
    char route[60];
    int dlNo;
    int kms;
} sd;
int main()
{
    sd d1, d2, d3;
    printf("Enter the ditails of the drivers:\n");
    printf("Enter the name of first driver:\n");
    scanf("%s", &d1.name);

    printf("Enter the route of first driver:\n");
    scanf("%s", &d1.route);

    printf("Enter the driving licnese No. of first driver:\n");
    scanf("%d", &d1.dlNo);

    printf("Enter the number of kms of first driver:\n");
    scanf("%d", &d1.kms);

    printf("Enter the name of second driver:\n");
    scanf("%s", &d2.name);

    printf("Enter the route of second driver:\n");
    scanf("%s", &d2.route);

    printf("Enter the driving license of second driver:\n");
    scanf("%d", &d2.dlNo);

    printf("Enter the number of kms of second driver:\n");
    scanf("%d", &d2.kms);

    printf("Enter the name of third driver:\n");
    scanf("%s", &d3.name);

    printf("Enter the route of third driver is:\n");
    scanf("%s", &d3.route);

    printf("Enter the driving license no. of third driver :\n");
    scanf("%d", &d3.dlNo);

    printf("Enter the number of kms of third driver:\n");
    scanf("%d", &d3.kms);

    printf("The name of first driver is %s\n", d1.name);
    printf("The route of first driver is %s\n", d1.route);
    printf("The number of first driver driving license is %d\n", d1.dlNo);
    printf("The number of %d kms of first driver drived\n", d1.kms);

    printf("The name of second driver is %s\n", d2.name);
    printf("The route of second driver is %s\n", d2.route);
    printf("The number of second driver driving license is %d\n", d2.dlNo);
    printf("The number of %d kms of second driver drived\n", d2.kms);

    printf("The name of third driver is %s\n", d3.name);
    printf("The route of third driver is %s\n", d3.route);
    printf("The number of third driver driving license is %d\n", d3.dlNo);
    printf("The number of %d kms of third driver drived\n", d3.kms);

    return 0;
}