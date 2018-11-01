---
title: Errore del compilatore C2726
ms.date: 11/04/2016
f1_keywords:
- C2726
helpviewer_keywords:
- C2726
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
ms.openlocfilehash: d0ade9317c996bb3432e7a4626fc930a3d5df349
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575643"
---
# <a name="compiler-error-c2726"></a>Errore del compilatore C2726

'gcnew' può essere utilizzato solo per creare un oggetto con tipo gestito o WinRT

Non è possibile creare un'istanza di un tipo nativo nell'heap del Garbage Collector.

L'esempio seguente genera l'errore C2726 e mostra come risolverlo:

```
// C2726.cpp
// compile with: /clr
using namespace System;
class U {};
ref class V {};
value class W {};

int main() {
   U* pU = gcnew U;    // C2726
   U* pU2 = new U;   // OK
   V^ p2 = gcnew V;   // OK
   W p3;   // OK

}
```
