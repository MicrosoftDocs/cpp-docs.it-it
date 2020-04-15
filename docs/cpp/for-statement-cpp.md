---
title: Istruzione for (C++)
description: Riferimento all'istruzione standard di C' per in Microsoft Visual Studio.
f1_keywords:
- for_cpp
ms.date: 04/14/2020
helpviewer_keywords:
- for keyword [C++]
ms.assetid: 6c7d01b3-c4c1-4c6a-aa58-e2d198f33d4a
ms.openlocfilehash: 92f7ae4b1f2fbaaf710cd5a8739b78cb98a0accb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375388"
---
# <a name="for-statement-c"></a>Istruzione for (C++)

Esegue ripetutamente un'istruzione finché la condizione non diventa false. Per informazioni sull'istruzione for basata sull'intervallo, vedere [Istruzione for basata su intervallo (C .](../cpp/range-based-for-statement-cpp.md)

## <a name="syntax"></a>Sintassi

> **`for (`***init-expression* **`;`** *cond-expression* **`;`** *loop-expression***`)`**\
> &nbsp;&nbsp;&nbsp;&nbsp;_affermazione_**`;`**

## <a name="remarks"></a>Osservazioni

Utilizzare l'istruzione **for** per costruire cicli che devono eseguire un numero specificato di volte.

L'istruzione **for** è costituita da tre parti facoltative, come illustrato nella tabella seguente.

### <a name="for-loop-elements"></a>Elementi del ciclo For

|Nome della sintassi|Quando viene eseguito|Descrizione|
|-----------------|-------------------|-----------------|
|`init-expression`|Prima di qualsiasi altro elemento `init-expression` dell'istruzione **for,** viene eseguito una sola volta. Il controllo passa a `cond-expression`.|Spesso utilizzato per inizializzare gli indici del ciclo. Può contenere espressioni o dichiarazioni.|
|`cond-expression`|Prima dell'esecuzione di ogni iterazione di `statement`, inclusa la prima iterazione. `statement` viene eseguito solo se `cond-expression` restituisce true (diverso da zero).|Un'espressione che restituisce un tipo di classe o un tipo integrale con una conversione non ambigua a un tipo integrale. Normalmente utilizzato per verificare i criteri di terminazione del ciclo For.|
|`loop-expression`|Alla fine di ogni iterazione di `statement`. Dopo l'esecuzione di `loop-expression`, viene valutato `cond-expression`.|Normalmente utilizzato per incrementare gli indici del ciclo.|

Negli esempi seguenti vengono illustrati diversi modi per utilizzare l'istruzione **for.**

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

Un ciclo **for** termina quando viene eseguita un'interruzione , [,](../cpp/return-statement-cpp.md)o [goto](../cpp/goto-statement-cpp.md) (a un'istruzione con etichetta all'esterno del ciclo **for)** all'interno. `statement` [break](../cpp/break-statement-cpp.md) Un'istruzione [continue](../cpp/continue-statement-cpp.md) in un ciclo **for** termina solo l'iterazione corrente.

Se `cond-expression` viene omesso, viene `true`considerato e il ciclo **for** non terminerà senza **un'interruzione**, **restituire**o **passare a** all'interno `statement`di .

Anche se i tre campi dell'istruzione **for** vengono in genere utilizzati per l'inizializzazione, il test per la terminazione e l'incremento, non sono limitati a questi usi. Ad esempio, il codice seguente consente di stampare i numeri da 0 a 4. In questo caso, `statement` è l'istruzione Null:

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

Lo standard di C, indica che una variabile dichiarata in un ciclo **for** deve uscire dall'ambito dopo la fine del ciclo **for.** Ad esempio:

```cpp
for (int i = 0 ; i < 5 ; i++) {
   // do something
}
// i is now out of scope under /Za or /Zc:forScope
```

Per impostazione predefinita, in [/e](../build/reference/za-ze-disable-language-extensions.md), una variabile dichiarata in un ciclo **for** rimane nell'ambito fino al termine dell'ambito di inclusione del ciclo **for.**

[L'opzione /-c:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) abilita il comportamento standard delle `/Za`variabili dichiarate nei cicli for senza dover specificare .

È anche possibile usare le differenze **for** di ambito del ciclo `/Ze` for per ridichiarare le variabili in seguito a quanto segue:

```cpp
// for_statement5.cpp
int main(){
   int i = 0;   // hidden by var with same name declared in for loop
   for ( int i = 0 ; i < 3; i++ ) {}

   for ( int i = 0 ; i < 3; i++ ) {}
}
```

Questo comportamento simula più da vicino il comportamento standard di una variabile dichiarata in un ciclo **for,** che richiede che le variabili dichiarate in un ciclo **for** escano dall'ambito dopo l'operazione del ciclo. Quando una variabile viene dichiarata in un ciclo **for,** il compilatore la promuove internamente a una variabile locale nell'ambito di inclusione del ciclo **for.** Viene promosso anche se esiste già una variabile locale con lo stesso nome.

## <a name="see-also"></a>Vedere anche

[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[istruzione while (C](../cpp/while-statement-cpp.md)<br/>
[Dichiarazione do-while (C )](../cpp/do-while-statement-cpp.md)<br/>
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)
