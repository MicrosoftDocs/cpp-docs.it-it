---
title: bool (C++)
ms.date: 11/04/2016
f1_keywords:
- bool_cpp
- __BOOL_DEFINED
helpviewer_keywords:
- bool keyword [C++]
- __BOOL_DEFINED macro
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
ms.openlocfilehash: e481cb9de7c80d147179efceab2fda9b160f3c21
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50638126"
---
# <a name="bool-c"></a>bool (C++)

Questa parola chiave è un tipo incorporato. Una variabile di questo tipo può avere valori [true](../cpp/true-cpp.md) e [false](../cpp/false-cpp.md). Le espressioni condizionali presentano il tipo **bool** e hanno pertanto valori di tipo **bool**. Ad esempio, `i!=0` ora è TRUE o FALSE a seconda del valore di `i`.

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un incremento prefisso o suffisso o di decremento operatore potrebbe non essere di tipo **bool**. In altre parole, data una variabile `b` typu **bool**, queste espressioni non sono più consentite:

```cpp
    b++;
    ++b;
    b--;
    --b;
```

I valori TRUE e FALSE hanno la relazione seguente:

```cpp
!false == true
!true == false
```

Nell'istruzione seguente:

```cpp
if (condexpr1) statement1;
```

Se `condexpr1` è TRUE, `statement1` verrà sempre eseguita; se `condexpr1` è FALSE, `statement1` non viene mai eseguito.

Quando un suffisso o prefisso **++** operatore viene applicato a una variabile di tipo **bool**, la variabile è impostata su TRUE.
**Visual Studio 2017 versione 15.3 e versioni successive**: operator + + per **bool** è stata rimossa dal linguaggio e non è più supportata.

Il prefisso o suffisso **--** operatore non può essere applicato a una variabile di questo tipo.

Il **bool** tipo contribuisce alle promozioni integrali. Un r-value di tipo **bool** può essere convertito in un r-value di tipo **int**, zero con diventando FALSE e TRUE che diventa uno. Come un tipo distinto, **bool** partecipa alla risoluzione dell'overload.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi fondamentali](../cpp/fundamental-types-cpp.md)