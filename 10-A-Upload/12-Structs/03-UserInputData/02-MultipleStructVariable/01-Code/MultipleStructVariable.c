#include <stdio.h>

struct MyPoint
{
    int x;
    int y;
};

int main(void)
{
    struct MyPoint ypp_point_A, ypp_point_B, ypp_point_C, ypp_point_D, ypp_point_E;

    printf("\n\n");
    printf("Enter X-Coordinate or Point 'A' : ");
    scanf("%d", &ypp_point_A.x);
    printf("Enter Y-Coordinate or Point 'A' : ");
    scanf("%d", &ypp_point_A.y);

    printf("\n\n");
    printf("Enter X-Coordinate or Point 'B' : ");
    scanf("%d", &ypp_point_B.x);
    printf("Enter Y-Coordinate or Point 'B' : ");
    scanf("%d", &ypp_point_B.y);

    printf("\n\n");
    printf("Enter X-Coordinate or Point 'C' : ");
    scanf("%d", &ypp_point_C.x);
    printf("Enter Y-Coordinate or Point 'C' : ");
    scanf("%d", &ypp_point_C.y);

    printf("\n\n");
    printf("Enter X-Coordinate or Point 'D' : ");
    scanf("%d", &ypp_point_D.x);
    printf("Enter Y-Coordinate or Point 'D' : ");
    scanf("%d", &ypp_point_D.y);

    printf("\n\n");
    printf("Enter X-Coordinate or Point 'E' : ");
    scanf("%d", &ypp_point_E.x);
    printf("Enter Y-Coordinate or Point 'E' : ");
    scanf("%d", &ypp_point_E.y);

    printf("\n\n");

    printf("Coordinates (x, y) of Point 'A' are : (%d, %d)\n\n", ypp_point_A.x, ypp_point_A.y);

    printf("Coordinates (x, y) of Point 'B' are : (%d, %d)\n\n", ypp_point_B.x, ypp_point_B.y);

    printf("Coordinates (x, y) of Point 'C' are : (%d, %d)\n\n", ypp_point_C.x, ypp_point_C.y);

    printf("Coordinates (x, y) of Point 'D' are : (%d, %d)\n\n", ypp_point_D.x, ypp_point_D.y);

    printf("Coordinates (x, y) of Point 'E' are : (%d, %d)\n\n", ypp_point_E.x, ypp_point_E.y);

    return (0);
}
