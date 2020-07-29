---
title: void (C++)
ms.date: 11/04/2016
f1_keywords:
- void_cpp
helpviewer_keywords:
- void keyword [C++]
- functions [C++], void
- pointers, void
ms.assetid: d203edba-38e6-4056-8b89-011437351057
ms.openlocfilehash: fddfc2e3295552414a00692006ab12725dc07d52
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213112"
---
# <a name="void-c"></a>void (C++)

Quando viene usato come tipo restituito da una funzione, la **`void`** parola chiave specifica che la funzione non restituisce un valore. Quando viene usato per un elenco di parametri di una funzione, **`void`** specifica che la funzione non accetta parametri. Quando viene utilizzato nella dichiarazione di un puntatore, **`void`** specifica che il puntatore è "universale".

Se il tipo di un puntatore **è \* void**, il puntatore può puntare a qualsiasi variabile non dichiarata con **`const`** la **`volatile`** parola chiave o. Non è possibile dereferenziare un puntatore **void \* ** a meno che non ne venga eseguito il cast a un altro tipo. Un **puntatore \* void** può essere convertito in qualsiasi altro tipo di puntatore dati.

Un **`void`** puntatore può puntare a una funzione, ma non a un membro di classe in C++.

Non è possibile dichiarare una variabile di tipo **`void`** .

## <a name="example"></a>Esempio

```cpp
// void.cpp
void vobject;   // C2182
void *pv;   // okay
int *pint; int i;
int main() {
   pv = &i;
   // Cast optional in C required in C++
   pint = (int *)pv;
}
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi incorporati](../cpp/fundamental-types-cpp.md)
