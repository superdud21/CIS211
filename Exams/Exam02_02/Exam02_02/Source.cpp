/* Chapter 6 - Programming Challenge 14, Multiple Stock Profit - Exam 2
This program uses a function to return the profit, or loss,
from the sale of a previously purchased stock. */
#include <iostream>
#include <iomanip>

// Function prototype
double stockProfit(int, double, double, double, double);

int main()
{
	int typeOfShares;	      // Number of differnt types of shares sold
	int numShares;            // Number of stock shares purchased and later sold
	double buyPrice;          // Price per share when bought
	double sellPrice;         // Price per share when sold
	double buyComm;           // Broker commission to buy the stock
	double sellComm;          // Broker commission to sell the stock
	double profit;            // A negative number indicates a loss
	double totalProfit = 0;   // Total accumulation of profit
	 

						// Input the data
						// The program specs do not request data validation, 
						// though the instructor may ask students to include this.

	std::cout << "This program determines the profit or loss from stock transactions.\n\n";

	std::cout << ("How many different types of shares did you sell: ");
	std::cin >> typeOfShares;

	for (int i = 0; i < typeOfShares; i++)		// For loop to ask the user the prompt equal to number of different shares sold
	{
		std::cout << std::endl << "Number of shares sold: ";
		std::cin >> numShares;

		std::cout << "Price per share when sold: $";
		std::cin >> sellPrice;

		std::cout << "Broker commission paid on the sale: $";
		std::cin >> sellComm;

		std::cout << std::endl <<"Price per share when bought: $";
		std::cin >> buyPrice;

		std::cout << "Broker commission paid on the purchase: $";
		std::cin >> buyComm;


		// Call the stockProfit function to determine the amount of profit or loss
		profit = stockProfit(numShares, buyPrice, buyComm, sellPrice, sellComm);

		// Display the results
		std::cout << std::fixed << std::setprecision(2);

		if (profit > 0.0)
		{
			totalProfit += profit;		// Accumulator for total profit
			std::cout << std::endl << "On share " << i + 1 << " you made a profit of $" << profit << std::endl;		// Display total from that share specifically
			std::cout << ("Your current running total is $") << totalProfit << std::endl;		// Display current running total
		}
		else if (profit < 0.0)
		{
			totalProfit += profit;		// Accumulator for total profit
			std::cout << "\nOn share " << i + 1 << " you had a loss of $" << -profit << std::endl;		// Display total from that share specifically
			std::cout << ("Your current running loss is $") << -totalProfit << std::endl;		// Display current running total
		}
		else
			std::cout << "\nYou broke even on your stock transactions on share number " << i << "." << std::endl;		// Display the seller broke even
	
	}

	system("pause");
	return 0;
}

/*********************************************************************
*                           stockProfit                             *
* This function uses the 5 pieces of data passed to it to calculate *
* and return the profit or loss made on the sale of a previously    *
* purchased stock.                                                  *
*********************************************************************/
double stockProfit(int numShares, double purchasePrice, double purchaseComm,
	double salePrice, double saleComm)
{

	double profit = (numShares * salePrice - saleComm) -
		(numShares * purchasePrice + purchaseComm);
	return profit;
}

/* SAMPLE RUN RESULTS

This program determines the profit or loss from stock transactions.

Number of shares sold: 100
Price per share when sold: $32.20
Broker commission paid on the sale: $10

Price per share when bought: $28.44
Broker commission paid on the purchase: $10

You made a profit of $356.00
*/