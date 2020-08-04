---
title: istruzione for (C++)
description: Riferimento all'istruzione standard C++ for in Microsoft Visual Studio C++.
f1_keywords:
- for_cpp
ms.date: 07/31/2020
helpviewer_keywords:
- for keyword [C++]
ms.assetid: 6c7d01b3-c4c1-4c6a-aa58-e2d198f33d4a
ms.openlocfilehash: b32a50e376113f9f9d550d4984d05fc8c675f14d
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520849"
---
# <a name="for-statement-c"></a>`for`istruzione (C++)

Esegue ripetutamente un'istruzione finché la condizione non diventa false. Per informazioni sull'istruzione basata sull'intervallo **`for`** , vedere [istruzione basata su intervallo `for` (C++)](../cpp/range-based-for-statement-cpp.md).

## <a name="syntax"></a>Sintassi

> **`for (`** *`init-expression`* **`;`** *`cond-expression`* **`;`** *`loop-expression`* **`)`**\
> &emsp;*`statement`*

## <a name="remarks"></a>Commenti

Utilizzare l' **`for`** istruzione per costruire cicli che devono eseguire un numero specificato di volte.

L' **`for`** istruzione è costituita da tre parti facoltative, come illustrato nella tabella seguente.

### <a name="for-loop-elements"></a>elementi del ciclo for

| Nome sintassi | Quando viene eseguito | Description |
|--|--|--|
| *`init-expression`* | Prima di qualsiasi altro elemento dell' **`for`** istruzione, *`init-expression`* viene eseguito una sola volta. Il controllo passa quindi a *`cond-expression`* . | Spesso utilizzato per inizializzare gli indici del ciclo. Può contenere espressioni o dichiarazioni. |
| *`cond-expression`* | Prima dell'esecuzione di ogni iterazione di *`statement`* , inclusa la prima iterazione. *`statement`* viene eseguito solo se *`cond-expression`* restituisce true (diverso da zero). | Un'espressione che restituisce un tipo di classe o un tipo integrale con una conversione non ambigua a un tipo integrale. Normalmente utilizzato per verificare i criteri di terminazione del ciclo For. |
| *`loop-expression`* | Alla fine di ogni iterazione di *`statement`* . Dopo l' *`loop-expression`* esecuzione di, *`cond-expression`* viene valutato. | Normalmente utilizzato per incrementare gli indici del ciclo. |

Negli esempi seguenti vengono illustrati diversi modi per utilizzare l' **`for`** istruzione.

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
    // Output: 01
}
```

*`init-expression`* e *`loop-expression`* possono contenere più istruzioni separate da virgole. Ad esempio:

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

*`loop-expression`* può essere incrementato o decrementato o modificato in altri modi.

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

Un **`for`** ciclo termina quando viene eseguito un oggetto, un valore [`break`](../cpp/break-statement-cpp.md) [restituito](../cpp/return-statement-cpp.md)o [`goto`](../cpp/goto-statement-cpp.md) (a un'istruzione con etichetta all'esterno del **`for`** ciclo) in *`statement`* . Un' [`continue`](../cpp/continue-statement-cpp.md) istruzione in un **`for`** ciclo termina solo l'iterazione corrente.

Se *`cond-expression`* viene omesso, viene considerato **`true`** e il **`for`** ciclo non viene terminato senza **`break`** , **`return`** o **`goto`** all'interno di *`statement`* .

Sebbene i tre campi dell' **`for`** istruzione vengano normalmente utilizzati per l'inizializzazione, il test della terminazione e l'incremento, non sono limitati a questi utilizzi. Ad esempio, il codice seguente consente di stampare i numeri da 0 a 4. In questo caso, *`statement`* è l'istruzione null:

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

## <a name="for-loops-and-the-c-standard"></a>`for`cicli e lo standard C++

Lo standard C++ indica che una variabile dichiarata in un **`for`** ciclo deve uscire dall'ambito al termine del **`for`** ciclo. Ad esempio:

```cpp
for (int i = 0 ; i < 5 ; i++) {
   // do something
}
// i is now out of scope under /Za or /Zc:forScope
```

Per impostazione predefinita, in [/ze](../build/reference/za-ze-disable-language-extensions.md), una variabile dichiarata in un **`for`** ciclo rimane nell'ambito fino al **`for`** termine dell'ambito di inclusione del ciclo.

[/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) Abilita il comportamento standard delle variabili dichiarate nei cicli for senza che sia necessario specificare `/Za` .

È anche possibile usare le differenze di ambito del **`for`** ciclo per dichiarare nuovamente le variabili in `/Ze` come segue:

```cpp
// for_statement5.cpp
int main(){
   int i = 0;   // hidden by var with same name declared in for loop
   for ( int i = 0 ; i < 3; i++ ) {}

   for ( int i = 0 ; i < 3; i++ ) {}
}
```

Questo comportamento simula più accuratamente il comportamento standard di una variabile dichiarata in un **`for`** ciclo, che richiede variabili dichiarate in un **`for`** ciclo per uscire dall'ambito dopo il completamento del ciclo. Quando una variabile viene dichiarata in un **`for`** ciclo, il compilatore lo innalza internamente a una variabile locale nell' **`for`** ambito di inclusione del ciclo. Viene innalzata di livello anche se è già presente una variabile locale con lo stesso nome.

## <a name="see-also"></a>Vedere anche

[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[istruzione while (C++)](../cpp/while-statement-cpp.md)<br/>
[istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)<br/>
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)
