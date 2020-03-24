---
title: Avviso del compilatore (livello 3) C4018
ms.date: 11/04/2016
f1_keywords:
- C4018
helpviewer_keywords:
- C4018
ms.assetid: 6e8cbb04-d914-4319-b431-cbc2fbe40eb1
ms.openlocfilehash: f5708a9f52b6fc8206094454c352710199437f27
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161698"
---
# <a name="compiler-warning-level-3-c4018"></a>Avviso del compilatore (livello 3) C4018

' Expression ': mancata corrispondenza tra signed e unsigned

Il confronto di un numero con segno e senza segno richiede al compilatore di convertire il valore con segno in senza segno.

Questo avviso può essere risolto se si esegue il cast di uno dei due tipi durante il test di tipi firmati e non firmati.

L'esempio seguente genera l'C4018:

```cpp
// C4018.cpp
// compile with: /W3
int main() {
   unsigned int uc = 0;
   int c = 0;
   unsigned int c2 = 0;

   if (uc < c) uc = 0;   // C4018

   // OK
   if (uc == c2) uc = 0;
}
```
