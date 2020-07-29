---
title: Operatori di moltiplicazione e operatori modulo
ms.date: 11/04/2016
f1_keywords:
- '%'
- /
helpviewer_keywords:
- operators [C++], multiplicative
- arithmetic operators [C++], multiplicative operators
- modulus operator [C++]
- '* operator'
- division operator [C++], multiplicative operators
- '% operator'
- multiplication operator [C++], multiplicative operators
- multiplicative operators [C++]
- division operator
ms.assetid: b53ea5da-d0b4-40dc-98f3-0aa52d548293
ms.openlocfilehash: c277c93640201de69a4cb29060bc5191aa91629c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227361"
---
# <a name="multiplicative-operators-and-the-modulus-operator"></a>Operatori di moltiplicazione e operatori modulo

## <a name="syntax"></a>Sintassi

```
expression * expression
expression / expression
expression % expression
```

## <a name="remarks"></a>Osservazioni

Gli operatori moltiplicativi sono:

- Moltiplicazione ( <strong>\*</strong> )

- Divisione ( **/** )

- Modulo (resto della divisione) ( **%** )

Questi operatori binari hanno un'associatività da sinistra a destra.

Gli operatori moltiplicativi accettano gli operandi di tipi aritmetici. Il modulo operator ( **%** ) ha un requisito più restrittivo in quanto gli operandi devono essere di tipo integrale. Per ottenere il resto di una divisione a virgola mobile, utilizzare la funzione di runtime [fmod](../c-runtime-library/reference/fmod-fmodf.md). Le conversioni descritte in [conversioni standard](standard-conversions.md) vengono applicate agli operandi e il risultato è del tipo convertito.

L'operatore di moltiplicazione produce il risultato moltiplicando il primo operando per il secondo.

L'operatore di divisione produce il risultato dividendo il primo operando per il secondo.

L'operatore modulo restituisce il resto fornito dall'espressione seguente, dove *E1* è il primo operando ed *E2* è il secondo: *E1* -(*E1*  /  *E2*) \* *E2*, dove entrambi gli operandi sono di tipo integrale.

La divisione per 0 in una divisione o in un'espressione di modulo non è definita e provoca un errore di runtime. Pertanto, le espressioni seguenti generano risultati errati non definiti:

```cpp
i % 0
f / 0.0
```

Se entrambi gli operandi in una moltiplicazione, divisione o espressione di modulo hanno lo stesso segno, il risultato è positivo. In caso contrario, il risultato sarà negativo. Il risultato del segno di un'operazione modulo è definito dall'implementazione.

> [!NOTE]
> Poiché le conversioni eseguite dagli operatori di moltiplicazione non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di moltiplicazione non può essere rappresentato nel tipo degli operandi in seguito alla conversione.

**Specifico di Microsoft**

In Microsoft C++, il risultato di un'espressione di modulo è sempre uguale al segno del primo operando.

**TERMINA specifica Microsoft**

Se la divisione calcolata di due interi non è esatta e un solo operando è negativo, il risultato è l'intero più grande (in termini di grandezza, non considerando il segno) che è minore del valore esatto che produrrebbe l'operazione di divisione. Ad esempio, il valore calcolato di-11/3 è-3,666666666. Il risultato della divisione integrale è-3.

La relazione tra gli operatori di moltiplicazione è determinata dall'identità (*E1*  /  *E2*) \* *E2*  +  *E1*  %  *E2*  ==  *e1*.

## <a name="example"></a>Esempio

Nel programma seguente vengono illustrati gli operatori moltiplicativi. Si noti che è `10 / 3` necessario eseguire il cast esplicito di uno degli operandi di al tipo **`float`** per evitare il troncamento, in modo che entrambi gli operandi siano di tipo **`float`** prima della divisione.

```cpp
// expre_Multiplicative_Operators.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
int main() {
   int x = 3, y = 6, z = 10;
   cout  << "3 * 6 is " << x * y << endl
         << "6 / 3 is " << y / x << endl
         << "10 % 3 is " << z % x << endl
         << "10 / 3 is " << (float) z / x << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori di moltiplicazione C](../c-language/c-multiplicative-operators.md)
