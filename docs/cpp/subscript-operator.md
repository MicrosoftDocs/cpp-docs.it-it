---
title: "Operatore di indice inferiore: | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "[]"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori [C++], indice inferiore"
  - "operatori suffissi"
  - "[] (operatore)"
  - "operatore di indice inferiore, sintassi"
ms.assetid: 69c31494-52da-4dd0-8bbe-6ccbfd50f197
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore di indice inferiore:
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
postfix-expression [ expression ]  
```  
  
## Note  
 Un'espressione di forma suffissa \(che può anche essere un'espressione primaria\) seguita dall'operatore di indice, **\[ \]**, specifica l'indicizzazione della matrice.  
  
 Per altre informazioni sulle matrici gestite, vedere [Arrays](../windows/arrays-cpp-component-extensions.md).  
  
 In genere, il valore rappresentato da *postfix\-expression* è un valore di puntatore, ad esempio un identificatore di matrice, mentre *expression* è un valore integrale \(inclusi i tipi enumerati\).  Tuttavia, l'unica condizione da soddisfare dal punto di vista sintattico è che una delle espressioni sia di tipo puntatore e l'altra di tipo integrale.  Pertanto il valore integrale potrebbe essere nella posizione *postfix\-expression* e il valore di puntatore potrebbe essere nelle parentesi quadre nella posizione di *expression* o dell'indice.  Si consideri il frammento di codice riportato di seguito.  
  
```  
int nArray[5] = { 0, 1, 2, 3, 4 };  
cout << nArray[2] << endl;            // prints "2"  
cout << 2[nArray] << endl;            // prints "2"  
```  
  
 Nell'esempio precedente l'espressione `nArray[2]` è identica a `2[nArray]`.  Il motivo è che il risultato di un'espressione di indice *e1***\[** *e2* **\]** viene ottenuto da:  
  
 **\*\( \(** *e2* **\)** *\+* **\(***e1***\) \)**  
  
 L'indirizzo restituito dall'espressione non è *e2* byte dall'indirizzo *e1*.  Piuttosto, l'indirizzo è ridimensionato in modo da restituire l'oggetto successivo nella matrice *e2*.  Ad esempio:  
  
```  
double aDbl[2];  
```  
  
 Gli indirizzi `aDb[0]` e `aDb[1]` sono a 8 byte di distanza \(la dimensione di un oggetto di tipo **double**\).  Questo ridimensionamento in base al tipo di oggetto viene eseguito automaticamente dal linguaggio C\+\+ ed è trattato nell'argomento [Operatori additivi](../cpp/additive-operators-plus-and.md) in cui vengono discusse l'aggiunta o l'eliminazione degli operandi del tipo di puntatore.  
  
 Un'espressione di indice può inoltre avere più indici, come nel modo seguente:  
  
 *expression1* **\[***expression2***\] \[***expression3***\]**...  
  
 Le espressioni di indice sono associate da sinistra a destra.  L'espressione di indice più a sinistra, *expression1***\[***expression2***\]**, viene valutata per prima.  L'indirizzo che deriva dall'aggiunta di *expression1* e *expression2* forma un'espressione puntatore; quindi *expression3* viene aggiunta a quest'espressione puntatore per formare una nuova espressione del puntatore e così via fino a che non viene aggiunta l'espressione di indice.  L'operatore di riferimento indiretto \(**\***\) viene applicato dopo la valutazione dell'ultima espressione di indice, a meno che il valore del puntatore finale non indirizzi un tipo di matrice.  
  
 Le espressioni con più indici fanno riferimento a elementi di "matrici multidimensionali".  Una matrice multidimensionale è una matrice i cui elementi sono matrici.  Ad esempio, il primo elemento di una matrice tridimensionale è una matrice con due dimensioni.  Nell'esempio seguente viene dichiarata e inizializzata una matrice bidimensionale di caratteri semplice:  
  
```  
// expre_Subscript_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
#define MAX_ROWS 2  
#define MAX_COLS 2  
  
int main() {  
   char c[ MAX_ROWS ][ MAX_COLS ] = { { 'a', 'b' }, { 'c', 'd' } };  
   for ( int i = 0; i < MAX_ROWS; i++ )  
      for ( int j = 0; j < MAX_COLS; j++ )  
         cout << c[ i ][ j ] << endl;  
}  
```  
  
## Indici positivo e negativo  
 Il primo elemento di una matrice è l'elemento 0.  L'intervallo di matrice C\+\+ proviene da *array*\[0\] a *array*\[*size* – 1\].  Tuttavia, C\+\+ supporta gli indici positivi e negativi.  Gli indici negativi devono essere compresi nei limiti della matrice; in caso contrario, i risultati sono imprevedibili.  Il codice seguente mostra indici di matrice positivi e negativi:  
  
```  
#include <iostream>  
using namespace std;  
  
int main() {  
    int intArray[1024];  
    for (int i = 0, j = 0; i < 1024; i++)  
    {  
        intArray[i] = j++;  
    }  
  
    cout << intArray[512] << endl;// 512  
  
    int *midArray = &intArray[512];  // pointer to the middle of the array  
  
    cout << midArray[-256] << endl;   // 256  
  
    cout << intArray[-256] << endl; // unpredictable  
}  
```  
  
 L'indice negativo nell'ultima riga può produrre un errore di runtime in quanto punta a un indirizzo 256 byte più in basso nella memoria rispetto all'origine della matrice.  Il puntatore `midArray` viene inizializzato al centro di `intArray`; è quindi possibile usare gli indici di matrice sia negativi che positivi su di esso.  Gli errori dell'indice di matrice non generano errori in fase di compilazione, ma producono solo risultati imprevisti.  
  
 L'operatore di indice è commutativo.  Di conseguenza, le espressioni *array*\[*index*\] e *array*\[*array*\] sono garantite essere equivalenti se l'operatore di indice non è sottoposto a overload \(vedere [Operatori di overload](../cpp/operator-overloading.md)\).  Il primo form è la procedura di codifica più comune, ma entrambi funzionano.  
  
## Vedere anche  
 [Espressioni in forma suffissa](../cpp/postfix-expressions.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Matrici](../cpp/arrays-cpp.md)   
 [Matrici unidimensionali](../c-language/one-dimensional-arrays.md)   
 [Matrici multidimensionali](../c-language/multidimensional-arrays-c.md)