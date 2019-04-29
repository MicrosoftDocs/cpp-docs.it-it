---
title: Avviso del compilatore (livello 1) C4319
ms.date: 1/18/2018
f1_keywords:
- C4319
helpviewer_keywords:
- C4319
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
ms.openlocfilehash: 20b268bacd6e7e259e9b4fa1c9e98fa6fd353718
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385472"
---
# <a name="compiler-warning-level-1-c4319"></a>Avviso del compilatore (livello 1) C4319

> ' ~': zero estensione '*type1*'a'*type2*' di dimensioni maggiori

Il risultato del **~** operatore (complemento bit per bit) è senza segno e quindi esteso da zero quando viene convertito in un tipo più grande.

## <a name="example"></a>Esempio

Nell'esempio seguente, `~(a - 1)` viene valutata come un'espressione lunga senza segno a 32 bit e quindi convertito a 64 bit mediante l'estensione zero. Questo potrebbe causare risultati imprevisti per l'operazione.

```cpp
// C4319.cpp
// compile with: cl /W4 C4319.cpp
int main() {
   unsigned long a = 0;
   unsigned long long q = 42;
   q = q & ~(a - 1);    // C4319 expected
}
```
