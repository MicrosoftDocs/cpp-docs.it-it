---
title: Compilatore avviso (livello 1) C4319 | Documenti Microsoft
ms.custom: 
ms.date: 1/18/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4319
dev_langs:
- C++
helpviewer_keywords:
- C4319
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2a492194003a639f684e84d125450067cd425276
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="compiler-warning-level-1-c4319"></a>Avviso del compilatore (livello 1) C4319

> ' ~': zero estensione '*type1*'a'*type2*' di dimensioni maggiori

Il risultato di  **~**  (complemento bit per bit) è senza segno e quindi esteso zero quando viene convertito in un tipo più grande.

## <a name="example"></a>Esempio

Nell'esempio seguente, `~(a - 1)` viene valutato come un'espressione lunga senza segno a 32 bit e quindi convertito in 64 bit mediante l'estensione zero. Questo potrebbe causare risultati imprevisti per l'operazione.

```cpp
// C4319.cpp
// compile with: cl /W4 C4319.cpp
int main() {
   unsigned long a = 0;
   unsigned long long q = 42;
   q = q & ~(a - 1);    // C4319 expected
}
```
