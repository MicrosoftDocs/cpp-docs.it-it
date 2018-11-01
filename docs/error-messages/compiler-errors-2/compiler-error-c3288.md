---
title: Errore del compilatore C3288
ms.date: 11/04/2016
f1_keywords:
- C3288
helpviewer_keywords:
- C3288
ms.assetid: ed08a540-9751-46e1-9cbe-c51d6a49ffab
ms.openlocfilehash: 30a88d1047f8395fc8e3042cf2a1da88e6e5c2d3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50608416"
---
# <a name="compiler-error-c3288"></a>Errore del compilatore C3288

'type': illegale dereferenziazione di un tipo di handle

Il compilatore ha rilevato una dereferenziazione di un tipo di handle non valido. È possibile dereferenziare un tipo di handle e assegnarla a un riferimento. Per altre informazioni, vedere [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3288.

```
// C3288.cpp
// compile with: /clr
ref class R {};
int main() {
   *(System::Object^) nullptr;   // C3288

// OK
   (System::Object^) nullptr;   // OK
   R^ r;
   R% pr = *r;
}
```