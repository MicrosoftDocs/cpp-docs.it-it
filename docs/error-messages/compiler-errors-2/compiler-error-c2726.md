---
description: 'Altre informazioni su: errore del compilatore C2726'
title: Errore del compilatore C2726
ms.date: 11/04/2016
f1_keywords:
- C2726
helpviewer_keywords:
- C2726
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
ms.openlocfilehash: 9318ea0cbf695f1c42253a680143edb7b541d25e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245330"
---
# <a name="compiler-error-c2726"></a>Errore del compilatore C2726

'gcnew' può essere utilizzato solo per creare un oggetto con tipo gestito o WinRT

Non è possibile creare un'istanza di un tipo nativo nell'heap del Garbage Collector.

L'esempio seguente genera l'errore C2726 e mostra come risolverlo:

```cpp
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
