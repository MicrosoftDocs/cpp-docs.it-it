---
title: Errore del compilatore C2312 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2312
dev_langs:
- C++
helpviewer_keywords:
- C2312
ms.assetid: c8bcfd06-12c1-4323-bb53-ba392d36daa4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cb6bb5a7c35012b8879efe01ed7cab9b0e5954a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036202"
---
# <a name="compiler-error-c2312"></a>Errore del compilatore C2312

'exception1': individuato da 'exception2' nel numero di riga

Due gestori individuano lo stesso tipo di eccezione.

L'esempio seguente genera l'errore C2312:

```
// C2312.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
    try {
        throw "ooops!";
    }
    catch( signed int ) {}
    catch( int ) {}   // C2312
}
```