---
title: Avviso del compilatore (livello 3) C4267
ms.date: 11/04/2016
f1_keywords:
- C4267
helpviewer_keywords:
- C4267
ms.assetid: 2fa2f13f-fa4f-47bb-ad8f-6cb19cfc91e6
ms.openlocfilehash: b49696632fb567a943b42ac35b8fc244e6cc4fb4
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051692"
---
# <a name="compiler-warning-level-3-c4267"></a>Avviso del compilatore (livello 3) C4267

'var': conversione da 'size_t' a 'type'. Possibile perdita di dati.

Il compilatore ha rilevato una conversione da `size_t` a un tipo più piccolo.

Per risolvere l'avviso, usare `size_t` invece di `type`. In alternativa, usare un tipo integrale che abbia almeno le stesse dimensioni di `size_t`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4267.

```cpp
// C4267.cpp
// compile by using: cl /W4 C4267.cpp
void Func1(short) {}
void Func2(int) {}
void Func3(long) {}
void Func4(size_t) {}

int main() {
   size_t bufferSize = 10;
   Func1(bufferSize);   // C4267 for all platforms
   Func2(bufferSize);   // C4267 only for 64-bit platforms
   Func3(bufferSize);   // C4267 only for 64-bit platforms
   Func4(bufferSize);   // OK for all platforms
}
```