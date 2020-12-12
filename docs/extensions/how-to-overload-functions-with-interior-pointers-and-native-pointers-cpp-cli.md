---
description: "Altre informazioni su: procedura: eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)"
title: "Procedura: eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)"
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- Functions with interior and native pointers, overloading
ms.assetid: d70df625-4aad-457c-84f5-70a0a290cc1f
ms.openlocfilehash: f68861b7140ed3ae7fac84bc9a197f68ddd9b72d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119148"
---
# <a name="how-to-overload-functions-with-interior-pointers-and-native-pointers-ccli"></a>Procedura: eseguire l'overload di funzioni con puntatori interni e puntatori nativi (C++/CLI)

È possibile eseguire l'overload delle funzioni a seconda che il tipo di parametro sia un puntatore interno o un puntatore nativo.

> [!IMPORTANT]
> Questa funzionalità del linguaggio è supportata dall'opzione del compilatore `/clr`, ma non dall'opzione del compilatore `/ZW`.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// interior_ptr_overload.cpp
// compile with: /clr
using namespace System;

// C++ class
struct S {
   int i;
};

// managed class
ref struct G {
   int i;
};

// can update unmanaged storage
void f( int* pi ) {
   *pi = 10;
   Console::WriteLine("in f( int* pi )");
}

// can update managed storage
void f( interior_ptr<int> pi ) {
   *pi = 10;
   Console::WriteLine("in f( interior_ptr<int> pi )");
}

int main() {
   S *pS = new S;   // C++ heap
   G ^pG = gcnew G;   // common language runtime heap
   f( &pS->i );
   f( &pG->i );
};
```

```Output
in f( int* pi )
in f( interior_ptr<int> pi )
```

## <a name="see-also"></a>Vedi anche

[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)
