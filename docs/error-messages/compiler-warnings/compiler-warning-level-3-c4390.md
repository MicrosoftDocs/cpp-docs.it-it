---
title: Compilatore avviso (livello 3) C4390 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4390
dev_langs:
- C++
helpviewer_keywords:
- C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 83131119e360bcf8193c2d6c8ca5a3cd09341516
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054194"
---
# <a name="compiler-warning-level-3-c4390"></a>Avviso del compilatore (livello 3) C4390

';': trovata; istruzione controllata vuota è questo lo scopo?

È stato trovato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.

Se si verificano C4390 a causa di una macro, è consigliabile usare la [avviso](../../preprocessor/warning.md) pragma per disabilitare C4390 nel modulo che contiene la macro.

L'esempio seguente genera l'errore C4390:

```
// C4390.cpp
// compile with: /W3
int main() {
   int i = 0;
   if (i);   // C4390
      i++;
}
```