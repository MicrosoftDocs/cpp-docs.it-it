---
title: Errore del compilatore C2881 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2881
dev_langs:
- C++
helpviewer_keywords:
- C2881
ms.assetid: b49c63c2-b064-4d4b-a75e-ddd2af947522
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a7f74a4336af3b8ce8bfe0fa87f7f1a84746ff11
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052491"
---
# <a name="compiler-error-c2881"></a>Errore del compilatore C2881

'spazio dei nomi1': è già usato come alias per 'spazio dei nomi2'

È possibile usare lo stesso nome come alias per due spazi dei nomi.

L'esempio seguente genera l'errore C2881:

```
// C2881.cpp
// compile with: /c
namespace A {
   int k;
}

namespace B {
   int i;
}

namespace C = A;
namespace C = B;   // C2881 C is already an alias for A
```