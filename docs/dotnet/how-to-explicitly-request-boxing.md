---
title: 'Procedura: Richiedere la conversione Boxing in modo esplicito'
ms.date: 11/04/2016
helpviewer_keywords:
- boxing, explicitly requesting
ms.assetid: 1359e6e5-162d-4f5d-9b6a-1690d93df3ee
ms.openlocfilehash: 1e720923c89a79f75350b6e7d0781ad6fc5759ed
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57748749"
---
# <a name="how-to-explicitly-request-boxing"></a>Procedura: Richiedere la conversione Boxing in modo esplicito

È possibile richiedere la conversione boxing in modo esplicito assegnando una variabile a una variabile di tipo `Object`.

## <a name="example"></a>Esempio

```
// vcmcppv2_explicit_boxing3.cpp
// compile with: /clr
using namespace System;

void f(int i) {
   Console::WriteLine("f(int i)");
}

void f(Object ^o) {
   Console::WriteLine("f(Object^ o)");
}

int main() {
   int i = 5;
   Object ^ O = i;   // forces i to be boxed
   f(i);
   f(O);
   f( (Object^)i );  // boxes i
}
```

```Output
f(int i)
f(Object^ o)
f(Object^ o)
```

## <a name="see-also"></a>Vedere anche

[Boxing](../windows/boxing-cpp-component-extensions.md)
