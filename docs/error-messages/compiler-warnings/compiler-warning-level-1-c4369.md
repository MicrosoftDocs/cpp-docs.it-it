---
title: Avviso del compilatore (livello 1) C4369
ms.date: 11/04/2016
f1_keywords:
- C4369
helpviewer_keywords:
- C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
ms.openlocfilehash: 617cb2cc3774b288581a3868125ced19b28ba45a
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966502"
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