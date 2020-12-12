---
description: 'Altre informazioni su: void (C++)'
title: void (C++)
ms.date: 11/04/2016
f1_keywords:
- void_cpp
helpviewer_keywords:
- void keyword [C++]
- functions [C++], void
- pointers, void
ms.assetid: d203edba-38e6-4056-8b89-011437351057
ms.openlocfilehash: e49dfa03e289cdbace50a24cf6854d25c51b3426
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213351"
---
# <a name="void-c"></a>void (C++)

Quando viene usato come tipo restituito da una funzione, la **`void`** parola chiave specifica che la funzione non restituisce un valore. Quando viene usato per un elenco di parametri di una funzione, **`void`** specifica che la funzione non accetta parametri. Quando viene utilizzato nella dichiarazione di un puntatore, **`void`** specifica che il puntatore è "universale".

Se il tipo di un puntatore è **void \* *_, il puntatore può puntare a qualsiasi variabile non dichiarata con la* `const`** **`volatile`** parola chiave _ o. Non è possibile dereferenziare un puntatore **void \** _ a meno che non ne venga eseguito il cast a un altro tipo. Un _*puntatore \* void*_ può essere convertito in qualsiasi altro tipo di puntatore dati.

Un *`void`* puntatore _ * può puntare a una funzione, ma non a un membro di classe in C++.

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
