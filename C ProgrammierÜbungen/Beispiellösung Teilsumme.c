
/*
Gegeben ist ein Feld (arr) mit n Integer-Werten. Ist es möglich, daraus eine Teilmenge von Werten so auszuwählen, dass die Summe dieser Werte dem angegebenen Zielwert (target) entspricht? Und falls ja, wie sieht diese Teilmenge aus?
Hierbei handelt es sich um ein klassisch rekursiv (ohne Schleifen) zu lösendes Backtracking-Problem. Statt des gesamten Feldes wird dabei jeweils immer nur der Teil des Arrays ab einem Startindex (index) betrachtet. Dabei wird zunächst das gesamte Array genommen, indem die Funktion initial mit Index 0 aufgerufen wird usw.

Der Basisfall liegt vor, wenn das Feldende erreicht ist und der Zielwert 0 ist. In diesem Fall wird true zurückgegeben. Andernfalls betrachtet man das aktuelle Feldelement. Die Idee ist, dass es nur zwei Möglichkeiten gibt: entweder wird das Feld ausgewählt oder nicht. Für beide Möglichkeiten wird ein rekursiver Aufruf durchgeführt, wobei in einer Variante der aktuelle Wert vom Zielwert subtrahiert wird und in der anderen nicht.

Neben der Frage, ob generell eine solche Teilsumme existiert, soll dabei ebenfalls die "beweisende" Teilmenge von Zahlen bestimmt werden. Dazu soll ein weiteres boolesches Array (lut) zur Markierung der verwendeten Werte genutzt werden, welches mit false initialisiert wurde. Der korrespondierende Eintrag soll dabei auf true gesetzt werden, wenn der Feldwert zur Teilsumme gehört.

Lösen Sie das beschriebene Teilsummenproblem via Backtracking. Der zu verwendende Funktionsprototyp sieht folgendermaßen aus:
bool groupSum(int arr[], bool lut[], int n, int target, int index);
*/

#include <stdio.h>
#include <stdbool.h>

// Nach Beendigung in lut für jede Position markiert, ob Wert zur Menge gehört
bool groupSum(int arr[], bool lut[], int n, int target, int index)
{
	if (index == n)
		return target == 0;

	lut[index] = true;
	bool found = groupSum(arr, lut, n, target - arr[index], index + 1);

	if (!found)
	{
		lut[index] = false;
		found = groupSum(arr, lut, n, target, index + 1);
	}

	return found;
}

//int main(void)
//{
//	//int array[] = {1};
//	//int array[] = {2, 4, 8};
//	int array[] = { 17, -2, 13, 18, 9, 8, 0 };
//	//int array[] = {-4, -2, 1, 3, 5, 9, 12};
//	int i, val, n = sizeof(array) / sizeof(int);
//	bool ret, table[n];
//
//	for (i = 0; i < n; i++)
//		table[i] = false;
//	//val = 1;
//	val = 20;
//	//val = 18;
//	//val = 10;  //9
//
//	ret = groupSum(array, table, n, val, 0);
//
//	if (ret)
//	{
//		printf("%d ist Summe aus ", val);
//		for (i = 0; i < n; i++)
//			if (table[i])
//				printf("%d ", array[i]);
//		printf("\n");
//	}
//	else
//	{
//		printf("Nicht loesbar fuer %d\n", val);
//	}
//}