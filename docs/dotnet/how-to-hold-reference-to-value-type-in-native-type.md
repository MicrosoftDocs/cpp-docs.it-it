---
title: 'Procedura: mantenere riferimenti al tipo di valore nel tipo nativo'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- value type reference in native type
- reference to value type in native type
ms.assetid: 1eabf8be-7d4f-4339-9027-48d5c4244483
ms.openlocfilehash: 1219dbac5ba78229554aeb29cf9422e835ea8343
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50470447"
---
# <a name="how-to-hold-reference-to-value-type-in-native-type"></a>Procedura: mantenere riferimenti al tipo di valore nel tipo nativo

Usare `gcroot` sul tipo boxed che include un riferimento a un tipo valore in un tipo nativo.

## <a name="example"></a>Esempio

```
// reference_to_value_in_native.cpp
// compile with: /clr
#using <mscorlib.dll>
#include <vcclr.h>

using namespace System;

public value struct V {
   String ^str;
};

class Native {
public:
   gcroot< V^ > v_handle;
};

int main() {
   Native native;
   V v;
   native.v_handle = v;
   native.v_handle->str = "Hello";
   Console::WriteLine("String in V: {0}", native.v_handle->str);
}
```

```Output
String in V: Hello
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)