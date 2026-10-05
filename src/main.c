#include <stdio.h>
#include "user.h"
#include "product.h"
#include "order.h"

int main(void)
{
    printf("MAT Management System\n");

    init_user();
    init_product();
    init_order();

    return 0;
}