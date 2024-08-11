#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<fstream>
#include<vector>
#include<limits>

using namespace std;

//function to calculate fat%; physical case 2
double calculateBodyFatPercentage(double weight, double height, double waist, int age, char gender)
{

	double FatPercentage;
	if (gender == 'M' || gender == 'm')
	{
		FatPercentage = (1.20 * (weight / (height * height)) + (0.23 * age) - 16.2);
	}

	else
	{
		FatPercentage = (1.20 * (weight / (height * height)) + (0.23 * age) - 5.4);
	}

	return FatPercentage;
}

//function to calculate muscle%; physical case 2
double calculateBodyMusclePercentage(double FatPercentage)
{
	return 100.0 - FatPercentage; //might not be accurate for everyone
}

//function to calculate BMI; physical case 1
double calculateBMI(double weight, double height)
{
	return weight / (height * height);
}

//meal plan obese; physical case 3
void WeeklyMealPlanObese(string allergies)
{
	cout << "\nMonday    | Breakfast - Oatmeal -- Lunch - Grilled Chicken Salad -- Dinner - Baked Salmon" << endl;
	cout << "\nTuesday   | Breakfast - Spinach Smoothie -- Lunch - Chick Pea Salad -- Dinner - Grilled Chicken" << endl;
	cout << "\nWednesday | Breakfast - Two Hard Boiled Eggs -- Lunch - Ceaser Salad -- Dinner - Smoked Prawns  " << endl;
	cout << "\nThursday  | Breakfast - Greek yogurt -- Sliced Apple , Lunch - Chicken Stuffed Peppers  -- Dinner - Chicken Rice" << endl;
	cout << "\nFriday    | Breakfast - Porridge -- Lunch - Grilled Chicken Salad - Dinner - Lemon-Herb Salmon " << endl;
	cout << "\nSaturday  | Breakfast - Poached Eggs -- Lunch - Vegetable Stew -- Dinner - Prawn Rice" << endl;
	cout << "\nSunday    | Breakfast - PBJ sandwich -- Lunch - Red-Bean Salad -- Dinner - Lemon-Herb Chicken " << endl;
}

//meal plan underweight; physical case 3
void WeeklyMealPlanUnderweight(string allergies)
{
	cout << "\nMonday    | Breakfast - Bran Bread Sandwich, Two boiled eggs -- Lunch - Grilled Chicken, White Rice, Cashews -- Dinner - Baked Salmon, " << endl;
	cout << "\nTuesday   | Breakfast - Cucumber Sandwich, Protein Shake -- Lunch - Chick Pea Salad, Chicken Curry -- Dinner - Chicken curry, Chapati" << endl;
	cout << "\nWednesday | Breakfast - Two Hard Boiled Eggs, Banana Shake -- Lunch - Ceaser Salad, Prawn Curry -- Dinner - Prawn Curry, Chapati " << endl;
	cout << "\nThursday  | Breakfast - Poached Eggs , Banana and Strawberry Smoothie -- Lunch - Chicken Stuffed Peppers, Brown Rice -- Dinner - Vegetable Soup and Chicken Rice" << endl;
	cout << "\nFriday    | Breakfast - Porridge, Protein Smoothie -- Lunch - Pulses, White Rice -- Dinner - Lemon-Herb Salmon " << endl;
	cout << "\nSaturday  | Breakfast - Poached Eggs, Butter Toasted Bread, Mango Milkshake -- Lunch - Chicken and Prawn Rice -- Dinner - Prawn Rice" << endl;
	cout << "\nSunday    | Breakfast - Chicken Sandwich, Orange Juice -- Lunch - Grilled Chicken Salad, Soybean Curry -- Dinner - Chicken Curry, Tomato Soup  " << endl;
}

//meal plan dairy allergy; physical case 3
void WeeklyMealPlanDairy(string allergies)
{
	cout << "\nMonday    | Breakfast - Cucumber Sandwich -- Lunch - Grilled Chicken Salad -- Dinner - Baked Salmon" << endl;
	cout << "\nTuesday   | Breakfast - Spinach Smoothie -- Lunch - Chick Pea Salad -- Dinner - Grilled Chicken" << endl;
	cout << "\nWednesday | Breakfast - Two Hard Boiled Eggs -- Lunch - Ceaser Salad -- Dinner - Smoked Prawns  " << endl;
	cout << "\nThursday  | Breakfast - Prawn Sandwich, Sliced Apple -- Lunch - Chicken Stuffed Peppers  -- Dinner - Chicken Rice" << endl;
	cout << "\nFriday    | Breakfast - Bran Bread and Avocado -- Lunch - Grilled Chicken Salad - Dinner - Lemon-Herb Salmon " << endl;
	cout << "\nSaturday  | Breakfast - Poached Eggs -- Lunch - Vegetable Stew -- Dinner - Prawn Rice" << endl;
	cout << "\nSunday    | Breakfast - PBJ sandwich -- Lunch - Red-Bean Salad -- Dinner - Lemon-Herb Chicken " << endl;


}

//meal plan seafood allergy; physical case 3
void WeeklyMealPlanSeaFood(string allergies)
{
	cout << "\nMonday    | Breakfast - Oatmeal -- Lunch - Grilled Chicken Salad -- Dinner - Vegetable Soup, Chicken Curry" << endl;
	cout << "\nTuesday   | Breakfast - Spinach Smoothie -- Lunch - Chick Pea Salad -- Dinner - Grilled Chicken" << endl;
	cout << "\nWednesday | Breakfast - Two Hard Boiled Eggs -- Lunch - Ceaser Salad -- Dinner - Cherry Tomato Pasta  " << endl;
	cout << "\nThursday  | Breakfast - Chicken Sandwich, Sliced Apple -- Lunch - Chicken Stuffed Peppers  -- Dinner - Chicken Rice" << endl;
	cout << "\nFriday    | Breakfast - Porridge -- Lunch - Grilled Chicken Salad - Dinner - Lemon-Herb Salmon " << endl;
	cout << "\nSaturday  | Breakfast - Poached Eggs -- Lunch - Vegetable Stew -- Dinner - Red-Beans Rice" << endl;
	cout << "\nSunday    | Breakfast - PBJ sandwich -- Lunch - Red-Bean Salad -- Dinner - Lemon-Herb Chicken " << endl;


}

//meal plan nuts allergy; physical case 3
void WeeklyMealPlanNuts(string allergies)
{
	cout << "\nMonday    | Breakfast - Cucumber Sandwich -- Lunch - Grilled Chicken Salad -- Dinner - Vegetable Soup, Baked Salmon" << endl;
	cout << "\nTuesday   | Breakfast - Spinach Smoothie -- Lunch - Chick Pea Salad -- Dinner - Grilled Chicken" << endl;
	cout << "\nWednesday | Breakfast - Two Hard Boiled Eggs -- Lunch - Ceaser Salad -- Dinner - Cherry Tomato Pasta  " << endl;
	cout << "\nThursday  | Breakfast - Chicken Sandwich, Sliced Apple -- Lunch - Chicken Stuffed Peppers  -- Dinner - Chicken Rice" << endl;
	cout << "\nFriday    | Breakfast - Porridge -- Lunch - Grilled Chicken Salad - Dinner - Lemon-Herb Salmon " << endl;
	cout << "\nSaturday  | Breakfast - Poached Eggs -- Lunch - Vegetable Stew -- Dinner - Prawn & Shrimp Rice" << endl;
	cout << "\nSunday    | Breakfast - PBJ sandwich -- Lunch - Red-Bean Salad -- Dinner - Lemon-Herb Chicken " << endl;
}

// Struct to represent an item and its calorie value
struct Item
{
	string name;
	double caloriePer100g;
};

// Function to calculate calories for a specific category
double calculateCategoryCalories(double quantity, double caloriePer100g)
{
	return (quantity * caloriePer100g);
}

//funtion for calorie calculator 
void getCategoryInput(const string& category, const vector<Item>& items, vector<double>& calories)
{
	cout << "-----------------------------" << endl;
	cout << "Select items for " << category << ":" << endl;

	for (size_t i = 0; i < items.size(); ++i)
	{
		cout << i + 1 << ". " << items[i].name << endl;
	}

	while (true)
	{
		int choice;

		cout << "Enter the number of the item you want to input (or 0 to move to the next category): ";
		cin >> choice;

		if (choice == 0)
		{
			break;
		}

		if (choice >= 1 && choice <= items.size())
		{
			string itemName = items[choice - 1].name;
			double quantity;

			cout << "Enter the quantity of " << itemName << " (100 grams): ";
			cin >> quantity;
			cout << endl;
			if (cin.fail())
			{
				cout << "Invalid quantity. Please enter a valid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			calories[choice - 1] += calculateCategoryCalories(quantity, items[choice - 1].caloriePer100g);
		}
		else
		{
			cout << endl;
			cout << "Invalid choice. Please enter a valid item number." << endl;
		}

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}

// Function to calculate total calories for a category
double calculateTotalCalories(const vector<double>& calories)
{
	if (calories.empty())
	{
		return 0.0;
	}

	double totalCalories = 0.0;
	for (double calorie : calories)
	{
		totalCalories += calorie;
	}

	return totalCalories;
}

int main()
{
	int menu, physical, emotional;
	char choice;
	char gender;
	int age;
	string name;

	// Get user name
	cout << "Enter your name: ";
	getline(cin, name);

	// Create file name with .txt extension
	string filename = name + ".txt";

	// Check if file exists
	ifstream file(filename);
	bool fileExists = file.is_open();
	file.close();

	if (fileExists) 
	{
		cout << "Hello " << name << endl;
		cout << "My name is Baymax and I am your personal healthcare companion.\n";
		cout << endl;
		cout << "How may I help you today?\n";
		cout << endl;
	}
	else //creating a new patient file 
	{
		cout << "Welcome to the program for the first time, " << name << "!" << endl;

		cout << "Hello my name is Baymax and I am your personal healthcare companion.\n";
		cout << endl;
		cout << "How may I help you today?\n";
		cout << endl;

		cout << "Before we begin, Baymax would like to know your gender(M/F): ";
		cin >> gender;
		while (gender != 'm' && gender != 'f' && gender != 'M' && gender != 'F')
		{
			cout << "Baymax is confused. Enter the correct gender. " << endl;
			cin >> gender;
		}

		do
		{
			cout << "and your age: ";
			cin >> age;

			if (cin.fail() || age <= 0 && age > 150)
			{
				cout << "Invalid age. Please enter a valid age:\n";
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		} while (age <= 0 && age > 150);

		cin.ignore();
		cout << endl;

		// Open file for writing
		ofstream dataFile(filename);

		// Write user activity to file
		dataFile << "Name: " << name << endl;
		dataFile << "Age: " << age << endl;
		dataFile << "Gender: " << gender << endl;
		dataFile.close();
	}

	do
	{
		do
		{
			cout << "What concerns would you like me to address?\n";   //menu 1: main functions 
			cout << "1. Physical Support\n2. Emotional Support\n3. Patient Information\n";
			cin >> menu;

			if (menu != 1 && menu != 2 && menu != 3 || cin.fail())
			{
				cout << "Baymax is confused. Enter the correct choice. \n" << endl;
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}

		} while (menu != 1 && menu != 2 && menu != 3);

		cin.ignore();
		cout << endl;

		switch (menu)
		{
		case 1:
		{
			do
			{
				cout << "Enter the number of the task you want me to perform.\n";
				cout << "1. Diagnosis\n2. BMI Calculator\n3. Meal Customization\n4. Calories/Fat/Glucose Consumed\n"; //menu 1.1
				cin >> physical;

				if (physical != 1 && physical != 2 && physical != 3 && physical != 4 && physical != 5 || cin.fail()) {
					cout << "Baymax is confused. Enter the correct choice.\n" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}

			} while (physical != 1 && physical != 2 && physical != 3 && physical != 4 && physical != 5);

			cin.ignore();
			cout << endl;

			switch (physical)
			{
			case 1:
			{
				int symptoms;

				do {
					cout << "I heard a sound of distress. What seems to be the problem? (Choose your symptoms from the menu below)\n";
					cout << "1. cough, runny nose, sneezing\n";
					cout << "2. watery stool, abdominal pain\n";
					cout << "3. fever, joint pain, headache\n";
					cout << "4. fever, chills, sweating\n";
					cout << "5. fatigue, pale skin, weakness\n";
					cout << "6. sensitivity to light, nausea, headache\n";
					cout << "7. Others\n";

					cin >> symptoms;

					if (symptoms != 1 && symptoms != 2 && symptoms != 3 && symptoms != 4 && symptoms != 5 && symptoms != 6 && symptoms != 7 || cin.fail()) {
						cout << "Baymax is confused. Enter the correct symptoms.\n" << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

				} while (symptoms != 1 && symptoms != 2 && symptoms != 3 && symptoms != 4 && symptoms != 5 && symptoms != 6 && symptoms != 7);

				cin.ignore();
				cout << endl;

				bool Cold = false, Diarrhea = false, Dengue = false, Malaria = false, Anemia = false, Migraine = false, doctor = false;

				// Check for specific symptoms to identify the disease
				if (symptoms == 1)
				{
					Cold = true;
				}

				if (symptoms == 2)
				{
					Diarrhea = true;
				}

				if (symptoms == 3)
				{
					Dengue = true;
				}

				if (symptoms == 4)
				{
					Malaria = true;
				}

				if (symptoms == 5)
				{
					Anemia = true;
				}

				if (symptoms == 6)
				{
					Migraine = true;
				} 

				if (symptoms == 7)
				{
					doctor = true;
				}

				if (Cold)
				{
					cout << "You might be experiencing a case of cold.\n";
				}

				if (Diarrhea)
				{
					cout << "You might be experiencing a case of diarrhea.\n";
				}

				if (Dengue)
				{
					cout << "You might be experiencing a case of dengue.\n";
				}

				if (Malaria)
				{
					cout << "You might be experiencing a case of malaria.\n";
				}

				if (Anemia)
				{
					cout << "You might be experiencing a case of nutritional anemia.\n";
				}

				if (Migraine)
				{
					cout << "You might be experiencing a case of migraines.\n";
				}

				if ((!Cold && !Diarrhea && !Dengue && !Malaria && !Anemia && !Migraine) || doctor)
				{
					cout << "Baymax is unable to identify the disease based on the provided symptoms. Please seek a healthcare professional.\n";
				}
			}
			break;

			case 2:
			{
				double weight, height, waist;

				cout << "Enter your weight in kilograms: ";
				while (!(cin >> weight) || weight < 1) {
					cout << "Baymax is confused. Enter the correct weight: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << endl;

				cout << "Enter your height in meters: ";
				while (!(cin >> height) || height < 1) {
					cout << "Baymax is confused. Enter the correct height: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << endl;

				cout << "Enter your waist circumference in centimeters: ";
				while (!(cin >> waist) || waist < 1) {
					cout << "Baymax is confused. Enter the correct measurements: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << endl;


				double bodyFatPercentage = calculateBodyFatPercentage(weight, height, waist, age, gender);

				double musclePercentage = calculateBodyMusclePercentage(bodyFatPercentage);

				double bmi = calculateBMI(weight, height);
				cout << "Your BMI is: " << bmi << endl;

				if (bmi < 18.5)
				{
					cout << "Underweight" << endl;
					cout << "BAYMAX suggests:" << endl;
					cout << "1) You need to take more nutritiuos meals." << endl;
					cout << "2) You need to be physically active." << endl;
					cout << endl;
				}

				else if (bmi >= 18.5 && bmi < 25)
				{
					cout << "Normal weight" << endl;
					cout << "You are doing great! I am proud of you." << endl;
					cout << endl;
				}

				else if (bmi >= 25 && bmi < 30)
				{
					cout << "Overweight" << endl;
					cout << "BAYMAX suggests:" << endl;
					cout << "1) You need to be more aware of the nutritiuos values of the meals you take." << endl;
					cout << "2) You need to be physically active throughout the day." << endl;
					cout << endl;
				}

				else
				{
					cout << "Obese" << endl;
					cout << "BAYMAX suggests:" << endl;
					cout << "1) You need to follow a proper diet plan." << endl;
					cout << "2) You need to be physically active throughout the day." << endl;
					cout << endl;
				}

				cout << "Your estimated body fat percentage is: " << bodyFatPercentage << "%" << endl;
				cout << "Your estimated body muscle percentage is: " << musclePercentage << "%" << endl;
				cout << endl;
			}
			break;

			case 3:
			{
				string allergies;
				int weeks;

				cout << "Enter your allergy (dairy, seafood, nuts, none): ";
				cin >> allergies;

				while (allergies != "nuts" && allergies != "seafood" && allergies != "dairy" && allergies != "none")
				{
					cout << "These allergies are out of my scope. Enter the correct choice: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> allergies;
				}

				if (allergies == "nuts")
				{
					for (int i = 1; i <= weeks; i++)
					{
						cout << "\nWeek " << i << " Meal Plan:" << endl;
						WeeklyMealPlanNuts(allergies); // call to function
						cout << "-----------------------------------------------------------------------------------------------------------";
						cout << endl;
					}
				}
				else if (allergies == "seafood")
				{
					cout << "Enter the duration of the meal plan (2, 4, or 6 weeks): ";
					while (!(cin >> weeks) || (weeks != 2 && weeks != 4 && weeks != 6))
					{
						cout << "Enter the correct time period: ";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

					for (int i = 1; i <= weeks; i++)
					{
						cout << "\nWeek " << i << " Meal Plan:" << endl;
						WeeklyMealPlanSeaFood(allergies); // call to function
						cout << "-----------------------------------------------------------------------------------------------------------";
						cout << endl;
					}
				}
				else if (allergies == "dairy")
				{
					cout << "Enter the duration of the meal plan (2, 4, or 6 weeks): ";
					while (!(cin >> weeks) || (weeks != 2 && weeks != 4 && weeks != 6))
					{
						cout << "Enter the correct time period: ";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

					for (int i = 1; i <= weeks; i++)
					{
						cout << "\nWeek " << i << " Meal Plan:" << endl;
						WeeklyMealPlanDairy(allergies); // call to function
						cout << "-----------------------------------------------------------------------------------------------------------";
						cout << endl;
					}
				}
				else if (allergies == "none")
				{
					cout << "Enter the duration of the meal plan (2, 4, or 6 weeks): ";
					while (!(cin >> weeks) || (weeks != 2 && weeks != 4 && weeks != 6))
					{
						cout << "Enter the correct time period: ";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

					char gainlose;

					cout << "Do you want a meal plan to gain weight or to lose weight? (if gain enter 'g', if lose enter 'l'): ";
					while (!(cin >> gainlose) || (gainlose != 'l' && gainlose != 'g' && gainlose != 'L' && gainlose != 'G'))
					{
						cout << "Enter the correct character: ";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

					if (gainlose == 'l' || gainlose == 'L')
					{
						for (int i = 1; i <= weeks; i++)
						{
							cout << "\nWeek " << i << " Meal Plan:" << endl;
							WeeklyMealPlanObese(allergies); // call to function
							cout << "-----------------------------------------------------------------------------------------------------------";
							cout << endl;
						}
					}
					else if (gainlose == 'g' || gainlose == 'G')
					{
						for (int i = 1; i <= weeks; i++)
						{
							cout << "\nWeek " << i << " Meal Plan:" << endl;
							WeeklyMealPlanUnderweight(allergies); // call to function
							cout << "-----------------------------------------------------------------------------------------------------------";
							cout << endl;
						}
					}

					cout << "\nYou have been a good person. Have a lollipop!" << endl;
				}
			}
			break;

			case 4:
			{
				vector<Item> fruits =
				{
				   { "Mango", 49.0 },
				   { "Banana", 56.0 },
				   { "Orange", 75.0 },
				   { "Apple", 50.0 },
				   { "Grape", 52.0 },
				   { "Pomegranate", 67.0 },
				   { "Watermelon", 35.0 },
				   { "Guava", 48.0 },
				   { "Peach", 53.0 },
				   { "Plum", 35.0 },
				};

				vector<Item> vegetables =
				{
					{ "Cauliflower", 25.0 },
					{ "Cabbage", 25.0 },
					{ "Carrots", 41.0 },
					{ "Bell Peppers", 31.0 },
					{ "Tomatoes", 18.0 },
					{ "Spinach", 23.0 },
					{ "Onions", 40.0 },
					{ "Lettuce", 5.0 },
					{ "Cucumber", 15.0 },
					{ "Radish", 16.0 },
				};

				vector<Item> grains =
				{
					{"Rice ",121.0 },
					{" Quinoa",120.0 },
					{"Oats ",389.0 },
					{"Barley",123.0 },
					{"Whole Wheat",240 },
					{"Corn(maize) ",86.0 },
					{"Millet ",378.0 },
					{"Couscous",112.0 },
					{"Brown Rice ",111.0 },

				};

				vector<Item> dairy =
				{
					{"Milk(whole)",61.0 },
					{"Yougurt(whole)",61.0 },
					{"Cheese(cheddar)",402.0 },
					{"Cream(heavy)",340.0 },
					{"Cheese(mozzarella)",300.0},
					{"Cheese(parmesan)",431.0},
					{"Cheese(cottage)",98.0},

				};

				vector<Item>  protein =
				{
					{ "Chicken Breast", 165.0 },
					{ "Salmon", 206.0 },
					{ "Cod", 105.0 },
					{ "Mackerel", 305.0 },
					{ "Beef", 250.0 },
					{ "Turkey", 135.0 },
					{ "Eggs", 155.0 },
					{ "Mutton", 143.0 },
					{ "Duck", 337.0 },
					{ "Lamb", 250.0 },
				};

				vector<Item> Nuts =
				{
					{ "Almonds", 576.0 },
					{ "Peanuts", 567.0 },
					{ "Walnuts", 654.0 },
					{ "Cashews", 553.0 },
					{ "Pecans", 691.0 },
					{ "Brazil nuts", 656.0 },
					{ "Hazelnuts", 628.0 },
					{ "Pine nuts", 673.0 },
					{ "Pistachios", 673.0 },
				};

				vector<Item> Oils
				{
					{ "Olive oil", 120.0 },
					{ "Canola oil", 117.0 },
					{ "Vegetable oil", 120.0 },
					{ "Sesame oil", 120.0 },
					{ "Corn oil", 120.0 },
				};

				vector<double> totalFruitCalories(fruits.size(), 0);
				vector<double> totalVegetableCalories(vegetables.size(), 0);
				vector<double>  totalGrainCalories(grains.size(), 0);
				vector<double> totalDairyCalories(dairy.size(), 0);
				vector<double> totalProteinCalories(protein.size(), 0);
				vector<double>  totalNutsCalories(Nuts.size(), 0);
				vector<double> totalOilsCalories(Oils.size(), 0);

				while (true)
				{
					cout << "Categories:" << endl;
					cout << "1. Fruits" << endl;
					cout << "2. Vegetables" << endl;
					cout << "3. Grains" << endl;
					cout << "4. Dairy Products" << endl;
					cout << "5. Proteins" << endl;
					cout << "6. Nuts" << endl;
					cout << "7. Oils" << endl;

					int categoryChoice;
					cout << "Enter the number of the category you want to input (or 0 to exit): " << endl;
					cin >> categoryChoice;
					cout << endl;
					if (cin.fail())
					{
						cout << "Invalid choice. Please enter a valid category number." << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						continue;
					}

					if (categoryChoice == 0)
					{
						break;
					}

					switch (categoryChoice)
					{
					case 1:
					{
						getCategoryInput("Fruits", fruits, totalFruitCalories);
					}
					break;

					case 2:
					{
						getCategoryInput("Vegetables", vegetables, totalVegetableCalories);
					}
					break;

					case 3:
					{
						getCategoryInput("Grains", grains, totalGrainCalories);
					}
					break;

					case 4:
					{
						getCategoryInput("Dairy Products", dairy, totalDairyCalories);
					}
					break;

					case 5:
					{
						getCategoryInput("Protein", protein, totalProteinCalories);
					}
					break;

					case 6:
					{
						getCategoryInput("Nuts", Nuts, totalNutsCalories);
					}
					break;

					case 7:
					{
						getCategoryInput("Oils", Oils, totalOilsCalories);
					}
					break;

					default:
						cout << endl;
						cout << "Invalid choice. Please enter a valid category number." << endl;
						break;
					}
				}

				// Calculate total calories for each category
				double totalFruits = calculateTotalCalories(totalFruitCalories);
				double totalVegetables = calculateTotalCalories(totalVegetableCalories);
				double totalGrains = calculateTotalCalories(totalGrainCalories);
				double totalDairy = calculateTotalCalories(totalDairyCalories);
				double totalProtein = calculateTotalCalories(totalProteinCalories);
				double totalNuts = calculateTotalCalories(totalNutsCalories);
				double totalOils = calculateTotalCalories(totalOilsCalories);

				// Calculate overall total calories
				double overallTotalCalories = totalFruits + totalVegetables + totalGrains +
					totalDairy + totalProtein + totalNuts + totalOils;

				// Display total calories for each category and overall total
				cout << "-----------------------------" << endl;
				cout << "Total calories from Fruits: " << totalFruits << " calories" << endl;
				cout << "Total calories from Vegetables: " << totalVegetables << " calories" << endl;
				cout << "Total calories from Grains: " << totalGrains << " calories" << endl;
				cout << "Total calories from Dairy Products: " << totalDairy << " calories" << endl;
				cout << "Total calories from Protein: " << totalProtein << " calories" << endl;
				cout << "Total calories from Nuts: " << totalNuts << " calories" << endl;
				cout << "Total calories from Oils: " << totalOils << " calories" << endl;
				cout << "-----------------------------" << endl;
				cout << "Overall Total calories intake: " << overallTotalCalories;
			}
			break;
			}
		}
		break;

		case 2:
		{
			char better;

			do
			{
				do 
				{
					cout << "On a scale of 1 - 10 how would bad you rate your mental health? 1 being the best and 10 being the worst.\n";  //menu 1.2
					cin >> emotional;

					if (cin.fail() || emotional != 1 && emotional != 2 && emotional != 3 && emotional != 4 && emotional != 5 && emotional != 6 && emotional != 7 && emotional != 8 && emotional != 9 && emotional != 10)
					{
						cout << "Enter the correct choice.\n" << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}

				} while (emotional != 1 && emotional != 2 && emotional != 3 && emotional != 4 && emotional != 5 && emotional != 6 && emotional != 7 && emotional != 8 && emotional != 9 && emotional != 10);

				cin.ignore();
				cout << endl;

				switch (emotional)
				{
				case 1:
				{
					cout << "Bah-a-la-la-la. Fist Bump\n";
					cout << "You are doing great! Here have a lollipop.\n";
					cout << endl;
				}
				break;

				case 2:
				{
					do
					{
						cout << "We all have a bad day once in a while.\n";
						cout << "Let's do some breathing excercies.\n";
						cout << "Breathe in:\n";
						cout << "1\n";
						cout << "2\n";
						cout << "3\n";
						cout << "4\n";
						cout << "5\n";
						cout << "6\n";
						cout << "7\n";
						cout << "8\n";
						cout << "9\n";
						cout << "10\n";
						cout << "Now breathe out:\n";
						cout << "1\n";
						cout << "2\n";
						cout << "3\n";
						cout << "4\n";
						cout << "5\n";
						cout << "6\n";
						cout << "7\n";
						cout << "8\n";
						cout << "9\n";
						cout << "10\n";
						cout << endl;

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 3:
				{
					do
					{
						cout << "There there. It is alright to cry. Hug\n";
						cout << "Here have a tissue.\n";
						cout << endl;

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 4:
				{
					do
					{
						cout << "I have some concerns.\n";
						cout << "Go for a walk.\nBaymax suggests: https://maps.app.goo.gl/xxUh2sjT23AUioZi8\n";

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 5:
				{
					do
					{
						char book;
						char movies;

						cout << "This is not looking very good.\n";
						cout << "Try doing a fun activity to take your mind off things\n";
						cout << "Baymax suggests:\n";

						cout << "1. Reading a book.Do you want me to suggest some books that might make you feel better ? (Y / N)\n";
						cin >> book;
						if (book == 'Y' || book == 'y')
						{
							cout << "a) The Perks of Being a Wallflower\nb) Me Talk Pretty One Day\nc) The Women Widowed to Themselves\nd) Born to Run\ne) Americanah\nf) Wild\ng) Eat, Pray, Love\n";
						}

						else if (book == 'N' || book == 'n')
						{
							cout << "2. Watching a movie. Do you want me to suggest some movies that might make you feel better ? (Y / N)\n";
							cin >> movies;
							if (movies == 'Y' || movies == 'y')
							{
								cout << "a) Chronicles of Narnia\nb) Jumanji\nc) Home Alone\nd)The Social Network\ne)Homeless to Harvard: The Lizz Murray Story\nf) Life of Pi\ng) Forrest Gump\n";
							}
						}

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 6:
				{
					do
					{
						cout << "It looks serious.\n";
						cout << "You should try calming activities like journaling and planning.\n";
						cout << "Inspiration: https://youtu.be/yiJyoknTj1E\nSupplies:\n1. @_flamingojournals on instagram\n2. thepaperworm.com";

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 7:
				{
					do
					{
						cout << "It's ok, life can feel a bit overwhelming at times.\n";
						cout << "Baymax suggests hitting pause(Sleep for a few hours and ignore everyone)\n";
						cout << endl;

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 8:
				{
					do
					{
						cout << "EEH this is bad\n";
						cout << "Take a deep breath and shout like your life depends on it.\n";
						cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHH\n";
						cout << endl;

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 9:
				{
					do
					{
						char talk;

						cout << "It seems like you need help.\n";
						cout << "Baymax suggests you to rant and share your feelings.\n";
						cout << "(a) Call a friend\n(b) Talk to me?\n";
						cin >> talk;

						while (talk != 'A' && talk != 'a' && talk != 'B' && talk != 'b')
						{
							cout << "Invalid option.\n";
						}

						if (talk == 'a' || talk == 'A')
						{
							cout << "Do you feel better now?If yes(Y) else no(N)\n";
							cin >> better;
							cout << endl;
						}
						else if (talk == 'b' || talk == 'B')
						{
							char rant[100];

							cout << "I'm all ears:\n";
							cin.getline(rant, 100);

							cout << "Do you feel better now?If yes(Y) else no(N)\n";
							cin >> better;
							cout << endl;
						}

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N');
				}
				break;

				case 10:
				{
					do
					{
						cout << "Are you ok? I suggest you seek professional help:\n";
						cout << "Ms Asia Nazir\nCall: 042-38900939\n";
						cout << endl;

						cout << "Do you feel better now?If yes(Y) else no(N)\n";
						cin >> better;
						cout << endl;

						while (better != 'Y' && better != 'y' && better != 'n' && better != 'N')
						{
							cout << "You can either feel better or not(Y/N)" << endl;
							cin >> better;
						}

					} while (better == 'N' || better == 'n');
				}
				break;
				}
			} while (better == 'N' || better == 'n');
		}
		break;

		case 3:
		{
			// Read previous activity
			string previousActivity;
			ifstream dataFile(filename);
			cout << "Patient Information: " << endl;
			while (dataFile)
			{
				getline(dataFile, previousActivity);
				cout << previousActivity << endl;
			}
			dataFile.close();
		}
		break;
		}

		cout << "\nAre you satisfied with your care? I will deactivate if you say yes(y) or continue to provide care if you say no(n).\n";
		cin >> choice;
		if (choice != 'n' && choice != 'y' && choice != 'N' && choice != 'Y')
		{
			cout << "Baymax is confused. Please enter the correct choice " << endl;
			cin >> choice;
		}
		cout << endl;

	} while (choice == 'n' || choice == 'N');

	cout << "Baymax is deactivating.\n";
	cout << endl;

	return 0;
}