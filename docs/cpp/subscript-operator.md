---
title: 'Operatore di indice: | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- '[]'
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], subscript
- postfix operators [C++]
- '[] operator'
- subscript operator [C++], syntax
ms.assetid: 69c31494-52da-4dd0-8bbe-6ccbfd50f197
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1fbcb3657af276cdfc9aa05d461c090b76f6de0b
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="subscript-operator"></a>Operatore di indice inferiore:
## <a name="syntax"></a>Sintassi  
  
```  
  
postfix-expression [ expression ]  
```  
  
## <a name="remarks"></a>Note  
 Un'espressione di suffisso (che può anche essere un'espressione primaria) seguita dall'operatore di indice, **[]**, specifica l'indicizzazione di matrice.  
  
 Per informazioni sulle matrici gestite, vedere [matrici](../windows/arrays-cpp-component-extensions.md).  
  
 In genere, il valore rappresentato da *postfix-expression* è un valore di puntatore, ad esempio un identificatore di matrice e *espressione* è un valore integrale (inclusi i tipi enumerati). Tuttavia, l'unica condizione da soddisfare dal punto di vista sintattico è che una delle espressioni sia di tipo puntatore e l'altra di tipo integrale. Pertanto il valore integrale potrebbe essere nella *postfix-expression* posizione e il valore di puntatore potrebbe essere nelle parentesi quadre nel *espressione* o la posizione di indice. Si consideri il frammento di codice riportato di seguito.  
  
```  
int nArray[5] = { 0, 1, 2, 3, 4 };  
cout << nArray[2] << endl;            // prints "2"  
cout << 2[nArray] << endl;            // prints "2"  
```  
  
 Nell'esempio precedente l'espressione `nArray[2]` è identica a `2[nArray]`. Il motivo è che il risultato di un'espressione di indice *e1 * * * [** *e2* **]** si ottengono con:  
  
 **\*( (** *e2* **)** *+* **(***e1***) )**  
  
 Non è l'indirizzo restituito dall'espressione *e2* byte dall'indirizzo *e1*. Piuttosto, l'indirizzo è ridimensionato per ottenere l'oggetto successivo nella matrice *e2*. Ad esempio:  
  
```  
double aDbl[2];  
```  
  
 Gli indirizzi di `aDb[0]` e `aDb[1]` si differenziano 8 byte, ovvero le dimensioni di un oggetto di tipo **double**. Questo ridimensionamento in base al tipo di oggetto viene eseguito automaticamente dal linguaggio C++ ed è definito in [operatori additivi](../cpp/additive-operators-plus-and.md) in cui vengono discusse l'addizione e sottrazione degli operandi del tipo di puntatore.  
  
 Un'espressione di indice può inoltre avere più indici, come nel modo seguente:  
  
 *expression1* **[***expression2***] [***expression3***]**...  
  
 Le espressioni di indice sono associate da sinistra a destra. L'espressione di indice più a sinistra, * expression1***[***expression2 ***]**, viene valutato per primo. L'indirizzo risultante dall'aggiunta di *expression1* ed *expression2* forma un'espressione puntatore; quindi *expression3* viene aggiunta a quest'espressione puntatore per formare una nuova espressione puntatore e così via finché non è stata aggiunta l'ultima espressione di indice. Operatore di riferimento indiretto (**\***) viene applicata dopo l'ultima espressione di indice viene valutata, a meno che il valore del puntatore finale risolve un tipo di matrice.  
  
 Le espressioni con più indici fanno riferimento a elementi di "matrici multidimensionali". Una matrice multidimensionale è una matrice i cui elementi sono matrici. Ad esempio, il primo elemento di una matrice tridimensionale è una matrice con due dimensioni. Nell'esempio seguente viene dichiarata e inizializzata una matrice bidimensionale di caratteri semplice:  
  
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
  
## <a name="positive-and-negative-subscripts"></a>Indici positivo e negativo  
 Il primo elemento di una matrice è l'elemento 0. L'intervallo di matrice C++ proviene da *matrice*[0] per *matrice*[*dimensioni* - 1]. Tuttavia, C++ supporta gli indici positivi e negativi. Gli indici negativi devono essere compresi nei limiti della matrice; in caso contrario, i risultati sono imprevedibili. Il codice seguente mostra indici di matrice positivi e negativi:  
  
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
  
 L'indice negativo nell'ultima riga può produrre un errore di runtime in quanto punta a un indirizzo 256 byte più in basso nella memoria rispetto all'origine della matrice. Il puntatore `midArray` viene inizializzato al centro di `intArray`; è quindi possibile usare gli indici di matrice sia negativi che positivi su di esso. Gli errori dell'indice di matrice non generano errori in fase di compilazione, ma producono solo risultati imprevisti.  
  
 L'operatore di indice è commutativo. Pertanto, le espressioni *matrice*[*indice*] e *matrice*[*matrice*] sono garantite essere equivalenti fino a quando l'indice operatore non è in overload (vedere [operatori di overload](../cpp/operator-overloading.md)). Il primo form è la procedura di codifica più comune, ma entrambi funzionano.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni di suffisso](../cpp/postfix-expressions.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Matrici](../cpp/arrays-cpp.md)   
 [Matrici unidimensionali](../c-language/one-dimensional-arrays.md)   
 [Matrici multidimensionali](../c-language/multidimensional-arrays-c.md)