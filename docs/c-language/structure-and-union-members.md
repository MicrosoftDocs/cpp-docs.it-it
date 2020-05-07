---
title: Membri di struttura e di unione
ms.date: 11/04/2016
helpviewer_keywords:
- member-selection operators
- structure members, referencing
- -> operator, structure and union members
- dot operator (.)
- referencing structure members
- . operator
- operators [C], member selection
- structure member selection
ms.assetid: bb1fe304-af49-4f98-808d-afdc99b3e319
ms.openlocfilehash: b22f5a29a4dc088ea4f3db863d635badee048d2c
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825691"
---
# <a name="structure-and-union-members"></a>Membri di struttura e di unione

Un'"espressione di selezione dei membri" si riferisce ai membri di strutture e unioni. Un'espressione di questo tipo ha il valore e il tipo del membro selezionato.

> *suffisso-espressione* **.** *identificatore*\
> *suffisso-identificatore di espressione* **->** *identifier*

In questo elenco vengono descritti i due formati delle espressioni di selezione dei membri:

1. Nel primo form, *postfix-expression* rappresenta un valore di tipo **struct** o **union** e *identifier* assegna un nome a un membro della struttura o unione specificata. Il valore dell'operazione è quello di *identifier* ed è un'espressione l-value se *postfix-expression* è un'espressione l-value. Per altre informazioni, vedere [Espressioni L-value e R-value](../c-language/l-value-and-r-value-expressions.md).

1. Nel secondo form, *postfix-expression* rappresenta un puntatore a un'unione o a una struttura e *identifier* assegna un nome a un membro della struttura o unione specificata. Il valore è quello di *identifier* ed è un l-value.

I due formati delle espressioni di selezione dei membri hanno effetti simili.

Infatti, un'espressione che interessa l'operatore di selezione dei membri (**->**) è una versione abbreviata di un'espressione che utilizza il punto (**.**) se l'espressione prima del periodo è costituita dall'operatore<strong>\*</strong>di riferimento indiretto () applicato a un valore del puntatore. Di conseguenza:

```cpp
expression->identifier
```

equivale a

```cpp
(*expression).identifier
```

quando *expression* è un valore puntatore.

## <a name="examples"></a>Esempi

Negli esempi seguenti viene fatto riferimento a questa dichiarazione della struttura. Per informazioni sull'operatore di riferimento indiretto (<strong>\*</strong>) usato in questi esempi, vedere [operatori di riferimento indiretto e address-of](../c-language/indirection-and-address-of-operators.md).

```
struct pair
{
    int a;
    int b;
    struct pair *sp;
} item, list[10];
```

Un'espressione di selezione dei membri per gli aspetti della struttura `item` sarà:

```
item.sp = &item;
```

Nell'esempio precedente, l'indirizzo della struttura `item` viene assegnato al membro `sp` della struttura. Ciò significa che `item` contiene un puntatore a se stesso.

```
(item.sp)->a = 24;
```

In questo esempio, l'espressione `item.sp` puntatore viene utilizzata con l'operatore di selezione dei membri**->**() per assegnare un valore al membro `a`.

```
list[8].b = 12;
```

In questa istruzione viene illustrato come selezionare un singolo membro della struttura da una matrice di strutture.

## <a name="see-also"></a>Vedere anche

[Operatori di accesso ai membri: . e ->](../cpp/member-access-operators-dot-and.md)
