---
description: 'Altre informazioni su: bool (C++)'
title: bool (C++)
ms.date: 11/04/2016
f1_keywords:
- bool_cpp
- __BOOL_DEFINED
helpviewer_keywords:
- bool keyword [C++]
- __BOOL_DEFINED macro
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
ms.openlocfilehash: ea3af17260f21d3724f05b8bbad54091b23203e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229587"
---
# <a name="bool-c"></a>bool (C++)

Questa parola chiave è un tipo incorporato. Una variabile di questo tipo può avere valori [`true`](../cpp/true-cpp.md) e [`false`](../cpp/false-cpp.md) . Le espressioni condizionali hanno il tipo **`bool`** e quindi hanno valori di tipo **`bool`** . Ad esempio, `i != 0` ha ora **`true`** o **`false`** a seconda del valore di `i` .

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un operatore di incremento o di decremento suffisso o prefisso non può essere di tipo **`bool`** . In altre parole, data una variabile `b` di tipo **`bool`** , queste espressioni non sono più consentite:

```cpp
    b++;
    ++b;
    b--;
    --b;
```

I valori **`true`** e **`false`** hanno la relazione seguente:

```cpp
!false == true
!true == false
```

Nell'istruzione seguente:

```cpp
if (condexpr1) statement1;
```

Se `condexpr1` è **`true`** , `statement1` viene sempre eseguito; se `condexpr1` è **`false`** , `statement1` non viene mai eseguito.

Quando un operatore di suffisso o di prefisso **`++`** viene applicato a una variabile di tipo **`bool`** , la variabile viene impostata su **`true`** .

**Visual Studio 2017 versione 15,3 e successive**: `operator++` per **`bool`** è stato rimosso dal linguaggio e non è più supportato.

Non è possibile applicare l'operatore di suffisso o prefisso **`--`** a una variabile di questo tipo.

Il **`bool`** tipo partecipa a promozioni integrali predefinite. Un r-value di tipo **`bool`** può essere convertito in un r-value di tipo **`int`** , con **`false`** diventa zero e **`true`** diventa uno. Come tipo distinto, **`bool`** partecipa alla risoluzione dell'overload.

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi incorporati](../cpp/fundamental-types-cpp.md)
