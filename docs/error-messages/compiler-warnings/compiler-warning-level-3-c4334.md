---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4334'
title: Avviso del compilatore (livello 3) C4334
ms.date: 11/04/2016
f1_keywords:
- C4334
helpviewer_keywords:
- C4334
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
ms.openlocfilehash: 3c7a84efc3c98779c5b50dc1b3fb28e687f856eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344029"
---
# <a name="compiler-warning-level-3-c4334"></a>Avviso del compilatore (livello 3) C4334

' operator ': il risultato dello spostamento a 32 bit è stato convertito in modo implicito in 64 bit (era previsto lo spostamento a 64 bit?)

Il risultato dello spostamento a 32 bit è stato convertito in modo implicito in 64 bit e il compilatore sospetta che sia stato previsto uno spostamento a 64 bit.  Per risolvere il problema, usare Maiusc a 64 bit oppure eseguire il cast esplicito del risultato dello spostamento a 64 bit.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4334.

```cpp
// C4334.cpp
// compile with: /W3 /c
void SetBit(unsigned __int64 *p, int i) {
   *p |= (1 << i);   // C4334
   *p |= (1i64 << i);   // OK
}
```
