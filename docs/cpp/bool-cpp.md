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
ms.openlocfilehash: a3384bbb118c7363a603b5b9b0c8a375cb3dd185
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301626"
---
# <a name="bool-c"></a>bool (C++)

Questa parola chiave è un tipo incorporato. Una variabile di questo tipo può avere valori [true](../cpp/true-cpp.md) e [false](../cpp/false-cpp.md). Le espressioni condizionali hanno il tipo **bool** , quindi hanno valori di tipo **bool**. Ad esempio, `i!=0` ora ha TRUE o FALSE a seconda del valore di `i`.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un operatore di incremento o di decremento suffisso o prefisso non può essere di tipo **bool**. In altre parole, data una variabile `b` di tipo **bool**, queste espressioni non sono più consentite:

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

Se `condexpr1` è TRUE, `statement1` viene sempre eseguito. Se `condexpr1` è FALSE, `statement1` non viene mai eseguita.

Quando un operatore di suffisso o di prefisso **++** viene applicato a una variabile di tipo **bool**, la variabile viene impostata su true.
**Visual Studio 2017 versione 15,3 e successive**: operator + + per **bool** è stato rimosso dal linguaggio e non è più supportato.

Non è possibile applicare l'operatore suffisso o prefix **--** a una variabile di questo tipo.

Il tipo **bool** partecipa a promozioni integrali. Un r-value di tipo **bool** può essere convertito in un r-value di tipo **int**, con false che diventa zero e true diventando uno. Come tipo distinto, **bool** partecipa alla risoluzione dell'overload.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi incorporati](../cpp/fundamental-types-cpp.md)