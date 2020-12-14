---
description: 'Ulteriori informazioni su: operatore virgola:,'
title: 'Operatore virgola: ,'
ms.date: 11/04/2016
f1_keywords:
- '%2C'
helpviewer_keywords:
- comma operator
ms.assetid: 38e0238e-19da-42ba-ae62-277bfdab6090
ms.openlocfilehash: 1429e2ce444e0f253bffca795f36f4e6194e0395
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274775"
---
# <a name="comma-operator-"></a>Operatore virgola: ,

Consente di raggruppare due istruzioni dove previsto.

## <a name="syntax"></a>Sintassi

```
expression , expression
```

## <a name="remarks"></a>Osservazioni

L'operatore virgola presenta un'associatività da sinistra verso destra. Due espressioni separate da virgole vengono valutate da sinistra a destra. L'operando sinistro è sempre valutato e tutti gli effetti collaterali vengono completati prima che venga valutato l'operando destro.

Le virgole possono essere utilizzate come separatori in alcuni contesti, ad esempio gli elenchi di argomenti della funzione. Non confondere l'utilizzo della virgola come separatore con il relativo utilizzo come operatore, i due utilizzi sono completamente differenti.

Valutare l'espressione `e1, e2`. Il tipo e il valore dell'espressione sono il tipo e il valore di *e2*; il risultato della valutazione di *E1* viene eliminato. Il risultato è un l-value se l'operando destro è un l-value.

Quando la virgola viene normalmente utilizzata come separatore (ad esempio negli argomenti effettivi alle funzioni o agli inizializzatori di aggregazione), l'operatore virgola e i relativi operandi devono essere racchiusi tra parentesi. Ad esempio:

```cpp
func_one( x, y + 2, z );
func_two( (x--, y + 2), z );
```

Nella chiamata di funzione a `func_one` su riportata, vengono passati tre argomenti, separati da virgole: `x`, `y + 2` e `z`. Nella chiamata di funzione a `func_two`, le parentesi forzano il compilatore a interpretare la prima virgola come operatore di valutazione sequenziale. Questa chiamata di funzione passa due argomenti a `func_two`. Il primo argomento è il risultato dell'operazione di valutazione sequenziale `(x--, y + 2)` che ha il valore e il tipo dell'espressione `y + 2`; il secondo argomento è `z`.

## <a name="example"></a>Esempio

```cpp
// cpp_comma_operator.cpp
#include <stdio.h>
int main () {
   int i = 10, b = 20, c= 30;
   i = b, c;
   printf("%i\n", i);

   i = (b, c);
   printf("%i\n", i);
}
```

```Output
20
30
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatore di valutazione sequenziale](../c-language/sequential-evaluation-operator.md)
