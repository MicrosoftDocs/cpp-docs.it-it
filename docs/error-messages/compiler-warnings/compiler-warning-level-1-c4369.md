---
title: Avviso del compilatore (livello 1) C4369
ms.date: 11/04/2016
f1_keywords:
- C4369
helpviewer_keywords:
- C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
ms.openlocfilehash: b374b67fa3319be35490358d7664bcb45bc640db
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623952"
---
# <a name="compiler-warning-level-1-c4369"></a>Avviso del compilatore (livello 1) C4369

'enumeratore': il valore di enumeratore 'value' non può essere rappresentato come 'type', valore sarà 'nuovo_valore'

Un enumeratore è stato calcolato sia maggiore del valore massimo per il tipo sottostante specificato.  Ciò ha causato un overflow e il compilatore è incluso il valore dell'enumeratore sul valore più basso possibile per il tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4369.

```
// C4369.cpp
// compile with: /W1
int main() {
   enum Color: char { red = 0x7e, green, blue };   // C4369
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK
}
```