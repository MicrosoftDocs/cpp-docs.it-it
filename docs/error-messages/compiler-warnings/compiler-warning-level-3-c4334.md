---
title: Compilatore avviso (livello 3) C4334 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4334
dev_langs:
- C++
helpviewer_keywords:
- C4334
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4b7bb16ea38b2c2112c12c561398341a7d1adbfc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044015"
---
# <a name="compiler-warning-level-3-c4334"></a>Avviso del compilatore (livello 3) C4334

'operator': risultato dello shift a 32 bit convertito in modo implicito a 64 bit (si intendeva eseguire lo shift a 64 bit?)

Il risultato dello shift a 32 bit è stato convertito implicitamente a 64 bit e il compilatore sospetta dovuto al fatto che era previsto un cambiamento di a 64 bit.  Per risolvere questo problema, usare MAIUSC a 64 bit oppure in modo esplicito il cast del risultato shift a 64 bit.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4334.

```
// C4334.cpp
// compile with: /W3 /c
void SetBit(unsigned __int64 *p, int i) {
   *p |= (1 << i);   // C4334
   *p |= (1i64 << i);   // OK
}
```