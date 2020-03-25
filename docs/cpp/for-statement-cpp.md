---
title: Istruzione for (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- for keyword [C++]
ms.assetid: 6c7d01b3-c4c1-4c6a-aa58-e2d198f33d4a
ms.openlocfilehash: e3dfdb45bdf8a508eca9d29e90b3f7c05e7b147d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179913"
---
# <a name="for-statement-c"></a>Istruzione for (C++)

Esegue ripetutamente un'istruzione finché la condizione non diventa false. Per informazioni sull'istruzione for basata su intervallo, vedere l' [istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md).

## <a name="syntax"></a>Sintassi

```
for ( init-expression ; cond-expression ; loop-expression )
    statement;
```

## <a name="remarks"></a>Osservazioni

Utilizzare l'istruzione **for** per costruire cicli che devono eseguire un numero specificato di volte.

L'istruzione **for** è costituita da tre parti facoltative, come illustrato nella tabella seguente.

### <a name="for-loop-elements"></a>Elementi del ciclo For

|Nome della sintassi|Quando viene eseguito|Descrizione|
|-----------------|-------------------|-----------------|
|`init-expression`|Prima di qualsiasi altro elemento dell'istruzione **for** , `init-expression` viene eseguito una sola volta. Il controllo passa a `cond-expression`.|Spesso utilizzato per inizializzare gli indici del ciclo. Può contenere espressioni o dichiarazioni.|
|`cond-expression`|Prima dell'esecuzione di ogni iterazione di `statement`, inclusa la prima iterazione. `statement` viene eseguito solo se `cond-expression` restituisce true (diverso da zero).|Un'espressione che restituisce un tipo di classe o un tipo integrale con una conversione non ambigua a un tipo integrale. Normalmente utilizzato per verificare i criteri di terminazione del ciclo For.|
|`loop-expression`|Alla fine di ogni iterazione di `statement`. Dopo l'esecuzione di `loop-expression`, viene valutato `cond-expression`.|Normalmente utilizzato per incrementare gli indici del ciclo.|

Negli esempi seguenti vengono illustrati diversi modi per utilizzare l'istruzione **for** .

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

Un ciclo **for** termina quando viene eseguita un'istruzione [break](../cpp/break-statement-cpp.md), [return](../cpp/return-statement-cpp.md)o [goto](../cpp/goto-statement-cpp.md) (a un'istruzione con etichetta all'esterno del ciclo **for** ) all'interno di `statement`. Un'istruzione [continue](../cpp/continue-statement-cpp.md) in un ciclo **for** termina solo l'iterazione corrente.

Se `cond-expression` viene omesso, viene considerato true e il ciclo **for** non verrà terminato senza **break**, **return**o **goto** all'interno `statement`.

Sebbene i tre campi dell'istruzione **for** vengano normalmente utilizzati per l'inizializzazione, il test della terminazione e l'incremento, non sono limitati a questi utilizzi. Ad esempio, il codice seguente consente di stampare i numeri da 0 a 4. In questo caso, `statement` è l'istruzione Null:

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

Lo C++ standard dichiara che una variabile dichiarata in un ciclo **for** deve uscire dall'ambito al termine del ciclo **for** . Ad esempio:

```cpp
for (int i = 0 ; i < 5 ; i++) {
   // do something
}
// i is now out of scope under /Za or /Zc:forScope
```

Per impostazione predefinita, in [/ze](../build/reference/za-ze-disable-language-extensions.md), una variabile dichiarata in un ciclo **for** rimane nell'ambito fino alla fine dell'ambito di inclusione del ciclo **for** .

[/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) Abilita il comportamento standard delle variabili dichiarate nei cicli for senza la necessità di specificare `/Za`.

È anche possibile usare le differenze di ambito del ciclo **for** per dichiarare nuovamente le variabili in `/Ze` come indicato di seguito:

```cpp
// for_statement5.cpp
int main(){
   int i = 0;   // hidden by var with same name declared in for loop
   for ( int i = 0 ; i < 3; i++ ) {}

   for ( int i = 0 ; i < 3; i++ ) {}
}
```

Questo consente di simulare più accuratamente il comportamento standard di una variabile dichiarata in un ciclo **for** , che richiede variabili dichiarate in un ciclo **for** per uscire dall'ambito al termine del ciclo. Quando una variabile viene dichiarata in un ciclo **for** , il compilatore lo innalza internamente a una variabile locale nell'ambito di inclusione del ciclo **for** anche se è già presente una variabile locale con lo stesso nome.

## <a name="see-also"></a>Vedere anche

[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione while (C++)](../cpp/while-statement-cpp.md)<br/>
[Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)<br/>
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)
