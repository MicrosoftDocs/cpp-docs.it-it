---
description: 'Altre informazioni su: procedura: dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)'
title: 'Procedura: dichiarare gli identificatori di override (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
ms.openlocfilehash: 75e925e26dc62d87e40d56b05e3be6d2dbda3e4a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246396"
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)

[sealed](../extensions/sealed-cpp-component-extensions.md), [abstract](../extensions/abstract-cpp-component-extensions.md)e [override](../extensions/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non usano **/ZW** o [/CLR](../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> Il linguaggio standard ISO C++ 11 presenta l'identificatore di [override](../cpp/override-specifier.md) e l'identificatore [finale](../cpp/final-specifier.md) ed entrambi sono supportati in Visual Studio `final` anziché **`sealed`** in codice che deve essere compilato come solo nativo.

## <a name="example-sealed-is-valid"></a>Esempio: sealed è valido

### <a name="description"></a>Description

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

## <a name="example-override-is-valid"></a>Esempio: override valido

### <a name="description"></a>Description

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

## <a name="example-abstract-is-valid"></a>Esempio: abstract è valido

### <a name="description"></a>Description

Questo esempio mostra che **`abstract`** è valido nelle compilazioni native.

### <a name="code"></a>Codice

```cpp
// abstract_native_keyword.cpp
class X abstract {};

int main() {
   X * MyX = new X;   // C3622 cannot instantiate abstract class
}
```

## <a name="see-also"></a>Vedi anche

[Identificatori di override](../extensions/override-specifiers-cpp-component-extensions.md)
