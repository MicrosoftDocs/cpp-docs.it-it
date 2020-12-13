---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4319'
title: Avviso del compilatore (livello 1) C4319
ms.date: 01/18/2018
f1_keywords:
- C4319
helpviewer_keywords:
- C4319
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
ms.openlocfilehash: af38714ab506fad389d9d2407b5a83aebf01f7c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340060"
---
# <a name="compiler-warning-level-1-c4319"></a>Avviso del compilatore (livello 1) C4319

> ' ~': zero che estende '*tipo1*' a'*tipo2*' di dimensioni maggiori

Il risultato dell' **~** operatore (complemento bit per bit) è senza segno e quindi esteso a zero quando viene convertito in un tipo più grande.

## <a name="example"></a>Esempio

Nell'esempio seguente, `~(a - 1)` viene valutato come un'espressione long senza segno a 32 bit e quindi convertita nell'estensione 64 bit per zero. Questo potrebbe causare risultati imprevisti per l'operazione.

```cpp
// C4319.cpp
// compile with: cl /W4 C4319.cpp
int main() {
   unsigned long a = 0;
   unsigned long long q = 42;
   q = q & ~(a - 1);    // C4319 expected
}
```
