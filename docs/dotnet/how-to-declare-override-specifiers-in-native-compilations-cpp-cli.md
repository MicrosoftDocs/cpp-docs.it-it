---
title: 'Procedura: dichiarare gli identificatori di override (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
ms.openlocfilehash: c5ed413f403fb12f116633c0e39f9e7b32b2e9f8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221328"
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)

[sealed](../extensions/sealed-cpp-component-extensions.md), [abstract](../extensions/abstract-cpp-component-extensions.md)e [override](../extensions/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non usano **/ZW** o [/CLR](../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> Il linguaggio standard ISO C++ 11 presenta l'identificatore di [override](../cpp/override-specifier.md) e l'identificatore [finale](../cpp/final-specifier.md) ed entrambi sono supportati in Visual Studio `final` anziché **`sealed`** in codice che deve essere compilato come solo nativo.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato che **`sealed`** è valido nelle compilazioni native.

### <a name="code"></a>Codice

```cpp
// sealed_native_keyword.cpp
#include <stdio.h>
__interface I1 {
   virtual void f();
   virtual void g();
};

class X : public I1 {
public:
   virtual void g() sealed {}
};

class Y : public X {
public:

   // the following override generates a compiler error
   virtual void g() {}   // C3248 X::g is sealed!
};
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato che `override` è valido nelle compilazioni native.

### <a name="code"></a>Codice

```cpp
// override_native_keyword.cpp
#include <stdio.h>
__interface I1 {
   virtual void f();
};

class X : public I1 {
public:
   virtual void f() override {}   // OK
   virtual void g() override {}   // C3668 I1::g does not exist
};
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Questo esempio mostra che **`abstract`** è valido nelle compilazioni native.

### <a name="code"></a>Codice

```cpp
// abstract_native_keyword.cpp
class X abstract {};

int main() {
   X * MyX = new X;   // C3622 cannot instantiate abstract class
}
```

## <a name="see-also"></a>Vedere anche

[Identificatori di override](../extensions/override-specifiers-cpp-component-extensions.md)
