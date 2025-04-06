//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	float nadej, yaya, jameji; /* data declaration */
//	nadej = 60.00; /* process */
//	jameji = nadej-nadej*10/100;
//	yaya = (nadej+jameji)/2;
//	printf("nadej = %6.2f, jameji = %6.2f, yaya= %6.2f\n", nadej, jameji, yaya );
//	system("PAUSE");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	float base, height, area;
//	printf("Enter base value: "); /* prompt to input base */
//	scanf("%f", &base); /* input base */
//	printf("Enter height value: "); /* prompt to input height */
//	scanf("%f", &height); /* input height */
//	area = base*height/2; /* compute area */
//	printf("Area = %.3f\n", area); /* display result */
//	system("PAUSE");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char name1[10], name2[10]; /* data declaration */
//	float ht1, ht2;
//	printf("Please enter name and height of the first student: ");
//	/* prompt to input name and height */
//	scanf("%s %f", name1, &ht1); /* input name and height */
//	printf("Please enter name and height of the second student: ");
//	/* prompt to input name and height */
//	scanf("%s %f", name2, &ht2); /* input name and height */
//	printf("%s is taller than %s = %.0f\n", name1, name2, ht1-ht2);
//	system("PAUSE");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	float radius, area;
//	printf("Please input radius : ");
//	scanf("%f", &radius);
//	area = 22/7*radius*radius;
//	if (area < 300) printf("%.4f small\n", area) ;
//	else printf("%.4f large\n", area);
//	system("PAUSE");
//	return 0 ;
//}

//#include <stdio.h>
//int main ()
//{
//	float width , length ; /* Declaration of Variables */
//	float area ;
//	printf("Please enter area: ") ; /* Read data */
//	scanf("%f", &area) ;
//	printf("Please enter width: ") ;
//	scanf("%f", &width) ;
//	length = area / width ; /* Expression Statements */
//	printf ("Area = %.2f , width = %.2f and length = %.2f \n", area, width, length) ;
//	return 0;
//}

//#include <stdio.h>
//#define commission 5000.00
//#define percent 0.05
//#define no_of_day 7
//
//int main(){
//	printf("rate:   %.2f%  \n", commission);
//	printf("comm  :%.2f \n", percent);
//	printf("no.of day:%ddays\n", no_of_day);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//	float tem1, tem2, tem3;
//	float re1,re2,re3;
//	printf("Please input temperature1 (F): ");
//	scanf("%f", &tem1);
//	printf("Please input temperature2 (F): ");
//	scanf("%f", &tem2);
//	printf("Please input temperature3 (F): ");
//	scanf("%f", &tem3);
//	
//	re1 = 5*(tem1-32)/9;
//	re2 = 5*(tem2-32)/9;
//	re3 = 5*(tem3-32)/9;
//	
//	printf("Result:\n");
//	printf("\ttemperature1:%.0f F is %.2f C\n", tem1, re1);
//	printf("\ttemperature2:%.0f F is %.2f C\n", tem2, re2);
//	printf("\ttemperature3:%.0f F is %.2f C\n", tem3, re3);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	float x1,x2,x3,x4;
//	float median;
//	printf("Please input data (x1-x4): ");
//	scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
//	median = (x1+x2+x3+x4)/4;
//	printf("Result:\n");
//	printf("\tMedian is %.1f", median);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	float height,radius;
//	float volumn;
//	printf("Enter height and radius of the cylinder in cm: ");
//	scanf("%f %f", &height, &radius);
//	volumn = 3.1416*height*radius*radius;
//	printf("Volume of the cylinder is %.1f\n", volumn);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    // Input invoice details
//    char invoiceNumber[50], date[50], dueDate[50], customerName[100];
//    printf("Please enter the invoice number: ");
//    fgets(invoiceNumber, sizeof(invoiceNumber), stdin);
//    invoiceNumber[strcspn(invoiceNumber, "\n")] = 0; // Remove newline character
//
//    printf("Please enter date: ");
//    fgets(date, sizeof(date), stdin);
//    date[strcspn(date, "\n")] = 0;
//
//    printf("Please enter due date: ");
//    fgets(dueDate, sizeof(dueDate), stdin);
//    dueDate[strcspn(dueDate, "\n")] = 0;
//
//    printf("Please enter the customer name: ");
//    fgets(customerName, sizeof(customerName), stdin);
//    customerName[strcspn(customerName, "\n")] = 0;
//
//    // Input item details
//    const int itemCount = 3;
//    char itemName[itemCount][50];
//    int quantity[itemCount];
//    double unitPrice[itemCount];
//
//    for (int i = 0; i < itemCount; i++) {
//        printf("Please enter the name of item %d: ", i + 1);
//        fgets(itemName[i], sizeof(itemName[i]), stdin);
//        itemName[i][strcspn(itemName[i], "\n")] = 0;
//
//        printf("Please enter the quantity of item %d: ", i + 1);
//        scanf("%d", &quantity[i]);
//
//        printf("Please enter the unit price of item %d: ", i + 1);
//        scanf("%lf", &unitPrice[i]);
//
//        getchar(); // Clear newline character from input buffer
//    }
//
//    // Calculate totals
//    double totalPrice[itemCount];
//    double totalAmount = 0.0;
//
//    for (int i = 0; i < itemCount; i++) {
//        totalPrice[i] = quantity[i] * unitPrice[i];
//        totalAmount += totalPrice[i];
//    }
//
//    double vat = totalAmount * 0.07;
//    double amountDue = totalAmount + vat;
//
//    // Output invoice
//    printf("\nInvoice No.: %s\tDate: %s\n", invoiceNumber, date);
//    printf("Customer: %s\tDue Date: %s\n", customerName, dueDate);
//    printf("# | Item Name   | Unit Price | Quantity | Total Price\n");
//    printf("________________________________________________________________________\n");
//    for (int i = 0; i < itemCount; i++) {
//        printf("%d | %-11s | %10.2lf | %8d | %11.2lf\n", i + 1, itemName[i], unitPrice[i], quantity[i], totalPrice[i]);
//    }
//    printf("________________________________________________________________________\n");
//    printf("Total Amount : %.2lf\n", totalAmount);
//    printf("VAT: %.2lf\n", vat);
//    printf("Amount Due: %.2lf\n", amountDue);
//    printf("________________________________________________________________________\n");
//
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	float unit_price, number;
//	float vat, Total;
//	printf("Please enter unit price: ");
//	scanf("%f", &unit_price);
//	printf("Please enter number: ");
//	scanf("%f", &number);
//	vat = ((unit_price*number)*7/100)+unit_price*number;
//	printf("Total amount = %.2f", vat);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#define PI 3.14159265359
//
//int main(){
//	float angle_degree, angle_radius;
//	float sine, cosine;
//	printf("Please enter angle in degree: ");
//	scanf("%f", &angle_degree);
//	angle_radius = angle_degree*(PI/180.0);
//	sine = sin(angle_radius);
//	cosine = cos(angle_radius);
//	printf("sine of %.1f degree is %.4f\n", angle_degree, sine);
//	printf("cos of %.1f degree is %.4f\n", angle_degree, cosine);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//	int money;
//	scanf("%d", &money);
//	if(0<=money<=1000000){
//		printf("%d ", money/1000);
//		money = money % 1000;
//		
//		printf("%d", money/500);
//		money = money % 500;
//		
//		printf(" %d", money/100);
//		money = money % 100; 
//		
//		printf(" %d", money/50);
//		money = money % 50;
//		
//		printf(" %d", money/20);
//		money = money % 20;
//		
//		printf(" %d", money/10);
//		money = money % 10;
//		
//		printf(" %d", money);
//	} else {
//		printf("Error!\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//	float a,b;
//	scanf("%f %f", &a, &b);
//	float c = pow(a,2) + pow(b,2);
//	c = sqrt(c);
//	printf("%f", c);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//	int a,b,gcd=1;
//	scanf("%d %d", &a, &b);
//	int x = abs(a), y = abs(b);
//	while(y!=0){
//		int t = y;
//		y = x%y;
//		x = t;
//	}
//	gcd = x;
//	printf("%d", abs(gcd));
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int jumps = (int)ceil((double)y/x);
//	printf("%d\n", jumps);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	int a, b, c;
//	char order[4];
//	int arr[3];
//	
//	scanf("%d %d %d", &a, &b, &c);
//	scanf("%s", order);
//	
//	arr[0] = a, arr[1] = b, arr[2] = c;
//	
//	for(int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			if(arr[j] > arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for(int i=0; i<3; i++){
//		if(order[i] == 'A') printf("%d ", arr[0]);
//		else if(order[i] == 'B') printf("%d ", arr[1]);
//		else if(order[i] == 'C') printf("%d ", arr[2]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int x = 1, y = 2;
//    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int *ip, *iq;
//    ip = &x;
//   	printf("*ip = %d\n", *ip);
//   	y = *ip;
//   	printf("y = %d\n", y);
//   	*ip = 0;
//   	printf("x = %d\n", x);
//   	ip = &a[0];
//   	printf("*ip = %d\n", *ip);
//    ip = ip + 3;
//    printf("*ip = %d\n", *ip);
//    *ip = 0;
//    printf("a[3] = %d\n", a[3]);
//    *ip = *ip + 10;
//    printf("a[3] = %d\n", a[3]);
//    iq = ip;
//    printf("*iq = %d\n", *iq);
//    *iq = 0;
//    printf("*ip = %d\n", *ip);
//	return 0;
//}

#include <stdio.h>
#include <string.h>

typedef struct {
	char Name[20];
	char Surname[20];
	char Id[13];
	int Age;
	char Gender[10];
}Student;

int main(){
	Student student1;
	int n;
	printf("Enter number of student = ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Please input student [%d] Name : ", i+1);
		scanf("%s", student1.Name);
		printf("Please input student [%d] Surname : ", i+1);
		scanf("%s", student1.Surname);
		printf("Please input student [%d] Id : ", i+1);
		scanf("%s", student1Id);
		printf("Please input student [%d] Age : ", i+1);
		scanf("%d", &student1.Age);
		printf("Please input student [%d] Gender : ", i+1);
		scanf("%s", student1.Gender);
		printf("\n");
	}
	printf("\nThe Data of Student is \n\n");
	for(int i=0; i<n; i++){
		printf("student [%d] Name : %s\n", i+1, student1.Name);
		printf("student [%d] Surname : %s\n", i+1, student1.Surname);
		printf("student [%d] Id : %s\n", i+1, student1.Id);
		printf("student [%d] Age : %d\n", i+1, student1.Age);
		printf("student [%d] Gender : %s\n", i+1, student1.Gender);
		printf("\n");
	}
	return 0;
}

