#include<stdio.h>
#include<stdbool.h>
#define dis_1 20
#define shipping_1 30
#define shipping_2 50

void main()
{
    int order, cato, price, total = 0, item = 0, choice, shipping;
    float discount;
    bool overNight;

    /*hello message and inform the user to choose at least 2 items*/

    printf("\t\t/***Welcome to our shop***/\n");
    printf("\t/*******Please choose at least 2 items*******/\n\n");

    /*open loop for choosing the items , calculate the total price and choose between continue or stop shopping*/

    while (true)
    {
        /*catogrization for the items avaliable at the shop*/
        
        printf("1.Mobiles\n2.Laptops\n3.Wearables\n");
        scanf(" %d",&cato);
        
        switch (cato)
        {
        case 1:
            printf("\nChoose the items:\n");
            printf("1.Apple iphone XS  Price:12000\n2.Samsung Galaxy A73  Price:13200\n3.Redmi S8  Price:5000\n");
            scanf(" %d",&order);
            break;
        case 2:
            printf("\nChoose the items:\n");
            printf("1.Asus X515Ep  Price:16349\n2.DELL G15  Price:14780\n3.Lenovo ideapad 3  Price:17000\n");
            scanf(" %d",&order);
            break;
        case 3:
            printf("\nChoose the items:\n");
            printf("1.Xiaomi SmartWatch  Price:579\n2.Samsung Galaxy SmartWatch  Price:5100\n3.Apple Watch  Price:6500");
            scanf(" %d",&order);
            break;
        default:
            printf("/*****You Entered a wrong choice! Please try again*****/\n\n");
            continue; /*using continue instead of break to start the loop from beggining and not excute the rest of the code*/
        }

        /*warn the user from entering the wrong value*/

        if (order < 1 || order > 3)
        {
            printf("/*****You Entered a wrong choice! Please try again****/\n\n");
            continue;
        }
        
        item++; /*counting the no. of items the user choose*/
        
        /*specify every item with its price*/

        switch (cato)
        {
        case 1:
            switch (order)
            {
            case 1:
                price = 12000;
                break;
            case 2:
                price = 13200;
                break;
            case 3:
                price = 5000;
                break;
            }
            break;
        case 2:
            switch (order)
            {
            case 1:
                price = 16349;
                break;
            case 2:
                price = 14780;
                break;
            case 3:
                price = 17000;
                break;
            }
            break;
        case 3:
            switch (order)
            {
            case 1:
                price = 579;
                break;
            case 2:
                price = 5100;
                break;
            case 3:
                price = 6500;
                break;
            }
            break;
        }

        total += price; /*calculate the total fees of the items "without shipping and discount"*/

        /*if the user want to stop or continue shopping*/

        printf("\n1.Continue Shopping\n2.Finish Order\n");
        scanf(" %d",&choice);

        /*ensure the no. of items are 2 before stop shopping*/

        if (choice == 2)
        {
            if (item < 2)
            {
                printf("/**********YOU SHOULD CHOOSE AT LEAST 2 ITEMS**********/\n\n");
                continue;
            }
            else
            {
                break;
            }
        }
        
        
    }
    
    /*ask for overnight shipping*/

    printf("\nYou want the overnight shipping or not?\n1.YES\n2.NO\n");
    scanf(" %d",&overNight);
    if (overNight == 1)
    {
        overNight = true;
    }
    else
    {
        overNight = false;
    }
    
    /*calculate the shipping with or without overnight shipping*/    

    if (price < 19000)
    {
        if (overNight)
        {
            shipping = shipping_1 + dis_1;
        }
        else
        {
            shipping = shipping_1;
        }
    }
    else
    {
        if (overNight)
        {
            shipping = shipping_2 + dis_1;
        }
        else
        {
            shipping = shipping_2;
        }
    }

    /*apply a discount if the total price satisfy the condition below*/
    
    if (item > 5)
    {
        discount = (float) (total + shipping) * 0.02;
    }
    
    /*print the full information of the items for the customer*/

    printf("Order Summary\n");
    printf("Order: %d\n",total);
    printf("Shipping: %d\n",shipping);
    printf("Discount: -%0.2f\n",discount);
    printf("Order after discount: %d\n",total -= discount);
    printf("Total Fees: %d\n\n",total + shipping);    
}