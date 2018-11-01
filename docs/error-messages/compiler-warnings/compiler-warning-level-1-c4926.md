---
title: Avviso del compilatore (livello 1) C4926
ms.date: 11/04/2016
f1_keywords:
- C4926
helpviewer_keywords:
- C4926
ms.assetid: 5717fce0-146f-4ef2-bde0-e9a01c0922d1
ms.openlocfilehash: 839d0b8ffad947e7031ca618b255588f54b82770
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50634902"
---
# <a name="compiler-warning-level-1-c4926"></a>Avviso del compilatore (livello 1) C4926

'identifier': simbolo già definito. Attributi ignorati.

È stata trovata una dichiarazione con prototipo ma un costrutto con attributi con lo stesso nome esiste già. Gli attributi per la dichiarazione con prototipo vengono ignorati.

L'esempio seguente genera l'errore C4926:

```
// C4926.cpp
// compile with: /W1
[module(name="MyLib")];

[coclass]
struct a {
};

[coclass]
struct a;   // C4926

int main() {
}
```