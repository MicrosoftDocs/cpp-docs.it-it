---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4369'
title: Avviso del compilatore (livello 1) C4369
ms.date: 11/04/2016
f1_keywords:
- C4369
helpviewer_keywords:
- C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
ms.openlocfilehash: 97f7882438124e8788559ec1453bd84d3ec371d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339969"
---
# <a name="compiler-warning-level-1-c4369"></a>Avviso del compilatore (livello 1) C4369

' Enumerator ': il valore dell'enumeratore ' value ' non può essere rappresentato come ' type ', il valore è' new_value '

Un enumeratore è stato calcolato in modo che sia maggiore del valore massimo per il tipo sottostante specificato.  Questo ha causato un overflow e il compilatore ha eseguito il wrapper del valore dell'enumeratore al valore minimo possibile per il tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4369.

```cpp
// C4369.cpp
// compile with: /W1
int main() {
   enum Color: char { red = 0x7e, green, blue };   // C4369
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK
}
```
