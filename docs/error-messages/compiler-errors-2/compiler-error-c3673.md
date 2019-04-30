---
title: Errore del compilatore C3673
ms.date: 11/04/2016
f1_keywords:
- C3673
helpviewer_keywords:
- C3673
ms.assetid: bb6d2079-05af-4e2c-be0e-75c892e6c590
ms.openlocfilehash: 9fd6920956d6a48ec7e1f15bf54ea8d75bad4aa5
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345427"
---
# <a name="compiler-error-c3673"></a>Errore del compilatore C3673

'type': classe ha un costruttore di copia

Per copiare oggetti di tipi di riferimento CLR è necessario un costruttore definito dall'utente. Per altre informazioni, vedere [semantica dello Stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3673.

```
// C3673.cpp
// compile with: /clr
public ref struct R {
public:
   R() {}
   // Uncomment the following line to resolve.
   // R(R% p) {}
};

int main() {
   R r;
   R s = r;   // C3673
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3673.

```
// C3673_b.cpp
// compile with: /clr /c
// C3673 expected
using namespace System;
[AttributeUsage(AttributeTargets::Class)]
ref class MyAttr : public Attribute {
public:
   MyAttr() {}
   // Uncomment the following line to resolve.
   // MyAttr(int i) {}
   property int Priority;
   property int Version;
};

[MyAttr]
ref class ClassA {};   // OK, no arguments

[MyAttr(Priority = 1)]
ref class ClassB {};   // OK, named argument

[MyAttr(123)]
ref class ClassC {};   // Positional argument

[MyAttr(123, Version = 1)]
ref class ClassD {};   // Positional and named
```