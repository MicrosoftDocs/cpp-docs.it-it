---
title: Istruzione for (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- for keyword [C++]
ms.assetid: 6c7d01b3-c4c1-4c6a-aa58-e2d198f33d4a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b38b608d1d254d304c7182d5063f870e2bbfcffe
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940819"
---
# <a name="for-statement-c"></a>Istruzione for (C++)
Esegue ripetutamente un'istruzione finché la condizione non diventa false. Per informazioni su basato su intervallo per l'istruzione, vedere [Range-based per istruzione (C++)](../cpp/range-based-for-statement-cpp.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
for ( init-expression ; cond-expression ; loop-expression )   
    statement;  
```  
  
## <a name="remarks"></a>Note  
 Usare la **per** istruzione per costruire cicli che devono eseguire un numero di volte specificato.  
  
 Il **per** istruzione costituita da tre parti facoltative, come illustrato nella tabella seguente.  
  
### <a name="for-loop-elements"></a>Elementi del ciclo For  
  
|Nome della sintassi|Quando viene eseguito|Descrizione|  
|-----------------|-------------------|-----------------|  
|`init-expression`|Prima di qualsiasi altro elemento del **per** istruzione `init-expression` viene eseguita una sola volta. Il controllo passa a `cond-expression`.|Spesso utilizzato per inizializzare gli indici del ciclo. Può contenere espressioni o dichiarazioni.|  
|`cond-expression`|Prima dell'esecuzione di ogni iterazione di `statement`, inclusa la prima iterazione. `statement` viene eseguito solo se `cond-expression` restituisce true (diverso da zero).|Un'espressione che restituisce un tipo di classe o un tipo integrale con una conversione non ambigua a un tipo integrale. Normalmente utilizzato per verificare i criteri di terminazione del ciclo For.|  
|`loop-expression`|Alla fine di ogni iterazione di `statement`. Dopo l'esecuzione di `loop-expression`, viene valutato `cond-expression`.|Normalmente utilizzato per incrementare gli indici del ciclo.|  
  
 Gli esempi seguenti illustrano diversi modi per usare la **per** istruzione.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
int main() {  
    // The counter variable can be declared in the init-expression.  
    for (int i = 0; i < 2; i++ ){   
       cout << i;  
    }  
    // Output: 01  
    // The counter variable can be declared outside the for loop.  
    int i;  
    for (i = 0; i < 2; i++){  
        cout << i;  
    }  
    // Output: 01  
    // These for loops are the equivalent of a while loop.  
    i = 0;  
    while (i < 2){  
        cout << i++;  
    }  
}  
    // Output: 012  
```  
  
 `init-expression` e `loop-expression` possono contenere più istruzioni separate da virgole. Ad esempio:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
int main(){  
    int i, j;  
    for ( i = 5, j = 10 ; i + j < 20; i++, j++ ) {  
        cout << "i + j = " << (i + j) << '\n';  
    }  
}  
    // Output:  
    i + j = 15  
    i + j = 17  
    i + j = 19  
```  
  
 `loop-expression` può essere incrementato o ridotto oppure modificato in altri modi.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
int main(){  
for (int i = 10; i > 0; i--) {  
        cout << i << ' ';  
    }  
    // Output: 10 9 8 7 6 5 4 3 2 1  
    for (int i = 10; i < 20; i = i+2) {  
        cout << i << ' ';  
    }  
    // Output: 10 12 14 16 18  
```  
  
 Oggetto **per** ciclo termina quando un [interruzione](../cpp/break-statement-cpp.md), [restituire](../cpp/return-statement-cpp.md), o [goto](../cpp/goto-statement-cpp.md) (a un'istruzione con etichetta all'esterno di **per**ciclo) all'interno di `statement` viene eseguita. Oggetto [continuare](../cpp/continue-statement-cpp.md) istruzione in un **per** ciclo termina solo l'iterazione corrente.  
  
 Se `cond-expression` viene omesso, viene considerato true e il **per** ciclo verrà terminato senza una **interruzione**, **restituiscono**, o **goto** all'interno di `statement`.  
  
 Sebbene i tre campi del **per** istruzione vengono normalmente utilizzati per l'inizializzazione, verifica della terminazione e incremento, non sono limitati a questi utilizzi. Ad esempio, il codice seguente consente di stampare i numeri da 0 a 4. In questo caso, `statement` è l'istruzione Null:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    int i;  
    for( i = 0; i < 5; cout << i << '\n', i++){  
        ;  
    }  
}  
```  
  
## <a name="for-loops-and-the-c-standard"></a>per i cicli e lo standard C++  
 Lo standard C++ specifica che una variabile dichiarata in un **per** ciclo uscirà dall'ambito dopo il **per** fine del ciclo. Ad esempio:  
  
```cpp  
for (int i = 0 ; i < 5 ; i++) {  
   // do something  
}  
// i is now out of scope under /Za or /Zc:forScope  
```  
  
 Per impostazione predefinita, sotto [/Ze](../build/reference/za-ze-disable-language-extensions.md), una variabile dichiarata in un **per** ciclo resta nell'ambito finché il **per** termina l'ambito di inclusione del ciclo.  
  
 [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) consente il comportamento standard delle variabili dichiarate nei cicli for senza la necessità di specificare /Za.  
  
 È anche possibile usare le differenze di ambito di **per** ciclo per dichiarare nuovamente le variabili in /Ze come segue:  
  
```cpp  
// for_statement5.cpp  
int main(){  
   int i = 0;   // hidden by var with same name declared in for loop  
   for ( int i = 0 ; i < 3; i++ ) {}  
  
   for ( int i = 0 ; i < 3; i++ ) {}  
}  
```  
  
 Ciò è molto simile al comportamento standard di una variabile dichiarata in un **per** ciclo, che richiede variabili dichiarate in un **per** ciclo esca dall'ambito dopo il ciclo viene completato. Quando una variabile viene dichiarata un **per** ciclo, il compilatore la promuove internamente a una variabile locale nel **per** ciclo dell'ambito che lo contiene anche se è già presente una variabile locale con lo stesso nome.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Istruzione while (C++)](../cpp/while-statement-cpp.md)   
 [Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)   
 [Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)