---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4390'
title: Avviso del compilatore (livello 3) C4390
ms.date: 11/04/2016
f1_keywords:
- C4390
helpviewer_keywords:
- C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
ms.openlocfilehash: 8067d4beae44e098085122968a227f6ff8bc8b4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160441"
---
# <a name="compiler-warning-level-3-c4390"></a>Avviso del compilatore (livello 3) C4390

';': è stata trovata un'istruzione controllata vuota; si tratta della finalità?

È stato trovato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.

Se si ottiene C4390 a causa di una macro, è necessario usare il pragma [warning](../../preprocessor/warning.md) per disabilitare C4390 nel modulo che contiene la macro.

L'esempio seguente genera l'C4390:

```cpp
// C4390.cpp
// compile with: /W3
int main() {
   int i = 0;
   if (i);   // C4390
      i++;
}
```
