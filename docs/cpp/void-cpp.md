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
ms.openlocfilehash: 7d01d5b50cb347736bbd2a42fb76811bdfdb546c
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245200"
---
# <a name="void-c"></a>void (C++)

Quando viene usato come tipo restituito da una funzione, la parola chiave **void** specifica che la funzione non restituisce un valore. Se utilizzato per l'elenco di parametri di una funzione, **void** specifica che la funzione non accetta parametri. Quando viene utilizzato nella dichiarazione di un puntatore, **void** specifica che il puntatore è "universale".

Se il tipo di un puntatore è **void\*** , il puntatore può puntare a qualsiasi variabile non dichiarata con la parola chiave **const** o **volatile** . Non è possibile dereferenziare un puntatore **\*void** a meno che non ne venga eseguito il cast a un altro tipo. Un puntatore **\*void** può essere convertito in qualsiasi altro tipo di puntatore dati.

Un puntatore **void** può puntare a una funzione, ma non a un membro della classe C++in.

Non è possibile dichiarare una variabile di tipo **void**.

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
[Tipi fondamentali](../cpp/fundamental-types-cpp.md)