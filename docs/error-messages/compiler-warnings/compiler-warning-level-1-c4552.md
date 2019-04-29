---
title: Avviso del compilatore (livello 1) C4552
ms.date: 11/04/2016
f1_keywords:
- C4552
helpviewer_keywords:
- C4552
ms.assetid: ebbbb5ee-1c19-45bd-b386-41a19630fc76
ms.openlocfilehash: 1fb2dc7fd4bc685e457898b47c513c21009146ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410356"
---
# <a name="compiler-warning-level-1-c4552"></a>Avviso del compilatore (livello 1) C4552

'operator': operatore non ha effetto. Previsto operatore con effetto collaterale

Se un'istruzione di espressione ha un operatore con nessun effetto collaterale di inizio dell'espressione, si tratta probabilmente di un errore.

Per eseguire l'override di questo avviso, inserire l'espressione tra parentesi.

L'esempio seguente genera l'errore C4552:

```
// C4552.cpp
// compile with: /W1
int main() {
   int i, j;
   i + j;   // C4552
   // try the following line instead
   // (i + j);
}
```