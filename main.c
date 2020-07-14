#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    /* code */
    char str[5];
    do {
        /* code */

        float startPricePerShare;
        float startVol;
        float finalPricePerShare;
        float desiredPricePerShare;
        printf("%s\n", "Welcome to a simple dollar cost averaging calculator.");
        printf("%s: ", "Please enter the start price per share, then press enter when done");
        scanf("%f", &startPricePerShare);
        printf("%s: ", "Please enter the number of shares you currently own, then press enter when done");
        scanf("%f", &startVol);
        printf("%s: ", "Please enter the current trading price of shares, then press enter when done");
        scanf("%f", &finalPricePerShare);
        printf("%s: ", "Please enter the price you would like to average your position out to, then press enter when done");
        scanf("%f", &desiredPricePerShare);
        float amountToBuy = (startVol*(startPricePerShare-desiredPricePerShare))/(desiredPricePerShare - finalPricePerShare);
        printf("The equation evaluated was: %s\n", "[startVol*(startPricePerShare-desiredPricePerShare)]/[desiredPricePerShare - finalPricePerShare]");
        printf("To reach %.2f, buy %.2f shares at $%.2f per share\n", desiredPricePerShare, amountToBuy, finalPricePerShare);
        printf("Enter a q to quit or an r to restart this program: ");
        scanf("%s", str);
        if(str[0]=='r'){
            printf("%s\n", "restarting");
        }
    } while(str[0] == 'r');
    return 0;
}
