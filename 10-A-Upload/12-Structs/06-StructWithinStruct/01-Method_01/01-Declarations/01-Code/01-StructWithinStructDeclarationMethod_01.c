#include <stdio.h>

struct Rectangle
{
    struct MyPoint
    {
        int x;
        int y;
    } point_01, point_02;
} ypp_rect;

int main(void)
{
    int ypp_length, ypp_bredth, ypp_area;

    printf("\n\n");
    printf("Enter LeftMost X-Coordinate of Rectangle: ");
    scanf("%d", &ypp_rect.point_01.x);

    printf("Enter BottomMost Y-Coordinate of Rectangle: ");
    scanf("%d", &ypp_rect.point_01.y);

    printf("Enter RightMost X-Coordinate of Rectangle: ");
    scanf("%d", &ypp_rect.point_02.x);

    printf("Enter TopMost Y-Coordinate of Rectangle: ");
    scanf("%d", &ypp_rect.point_02.y);

    ypp_length = ypp_rect.point_02.y - ypp_rect.point_01.y;
    if (ypp_length < 0)
        ypp_length = -1*ypp_length;

    ypp_bredth = ypp_rect.point_02.x - ypp_rect.point_01.x;
    if (ypp_bredth < 0)
        ypp_bredth = -1*ypp_bredth;

    ypp_area = ypp_length * ypp_bredth;

    printf("\n\n");
    printf("Length of Rectangle = %d\n\n", ypp_length);
    printf("Bredth of Rectangle = %d\n\n", ypp_bredth);
    printf("Area of Rectangle = %d\n\n", ypp_area);

    return (0);
}
