---
description: 'Altre informazioni su: procedura: rilevare la compilazione/clr'
title: 'Procedura: rilevare la compilazione clr'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- compilation, detecting /clr
- /clr compiler option [C++], detecting use of
ms.assetid: a9310045-4810-4637-a64a-0b31a08791c1
ms.openlocfilehash: 25cd241a08f79bcae629c05fb3c7982a387120ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175716"
---
# <a name="how-to-detect-clr-compilation"></a>Procedura: rilevare compilazioni /clr

Usare la `_MANAGED` `_M_CEE` macro o per verificare se un modulo viene compilato con **/CLR**. Per altre informazioni, vedere [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

Per altre informazioni sulle macro, vedere [macro predefinite](../preprocessor/predefined-macros.md).

## <a name="example"></a>Esempio

```cpp
// detect_CLR_compilation.cpp
// compile with: /clr
#include <stdio.h>

int main() {
   #if (_MANAGED == 1) || (_M_CEE == 1)
      printf_s("compiling with /clr\n");
   #else
      printf_s("compiling without /clr\n");
   #endif
}
```

## <a name="see-also"></a>Vedere anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
