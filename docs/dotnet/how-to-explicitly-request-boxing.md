---
title: 'Procedura: Richiedere la conversione Boxing in modo esplicito'
ms.date: 11/04/2016
helpviewer_keywords:
- boxing, explicitly requesting
ms.assetid: 1359e6e5-162d-4f5d-9b6a-1690d93df3ee
ms.openlocfilehash: c27330e4e7699b6f0e9d6c612c2befe884a69b4c
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781432"
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

[Conversione boxing](../extensions/boxing-cpp-component-extensions.md)
