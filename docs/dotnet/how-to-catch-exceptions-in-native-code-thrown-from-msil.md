---
title: 'Procedura: rilevare eccezioni nel codice nativo generate da MSIL'
ms.date: 11/04/2016
helpviewer_keywords:
- exceptions, catching
- catching exceptions, thrown from MSIL
- MSIL, catching exceptions in native code
ms.assetid: c15afd2b-8505-43bf-8a4a-f1d41532a124
ms.openlocfilehash: 6f2de640a2427bb1ea65d099742967454ca625f6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221354"
---
# <a name="how-to-catch-exceptions-in-native-code-thrown-from-msil"></a>Procedura: rilevare eccezioni nel codice nativo generate da MSIL

Nel codice nativo è possibile rilevare l'eccezione C++ nativa da MSIL.  È possibile intercettare le eccezioni CLR con `__try` e **`__except`** .

Per altre informazioni, vedere [gestione delle eccezioni strutturate (C/C++)](../cpp/structured-exception-handling-c-cpp.md) e [procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene definito un modulo con due funzioni, una che genera un'eccezione nativa e un'altra che genera un'eccezione MSIL.

```cpp
// catch_MSIL_in_native.cpp
// compile with: /clr /c
void Test() {
   throw ("error");
}

void Test2() {
   throw (gcnew System::Exception("error2"));
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene definito un modulo che rileva un'eccezione nativa e MSIL.

```cpp
// catch_MSIL_in_native_2.cpp
// compile with: /clr catch_MSIL_in_native.obj
#include <iostream>
using namespace std;
void Test();
void Test2();

void Func() {
   // catch any exception from MSIL
   // should not catch Visual C++ exceptions like this
   // runtime may not destroy the object thrown
   __try {
      Test2();
   }
   __except(1) {
      cout << "caught an exception" << endl;
   }

}

int main() {
   // catch native C++ exception from MSIL
   try {
      Test();
   }
   catch(char * S) {
      cout << S << endl;
   }
   Func();
}
```

```Output
error
caught an exception
```

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)
