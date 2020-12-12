---
description: 'Altre informazioni su: errore del compilatore C2881'
title: Errore del compilatore C2881
ms.date: 11/04/2016
f1_keywords:
- C2881
helpviewer_keywords:
- C2881
ms.assetid: b49c63c2-b064-4d4b-a75e-ddd2af947522
ms.openlocfilehash: a1bc3922ce315d29f84309849660b2574631b2fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194358"
---
# <a name="compiler-error-c2881"></a>Errore del compilatore C2881

' uno dei nomi1': è già utilizzato come alias per ' spazionomi2'

Non è possibile usare lo stesso nome di un alias per due spazi dei nomi.

L'esempio seguente genera l'C2881:

```cpp
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
