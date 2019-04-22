---
title: 'Procedura: Dichiarare gli identificatori di Override (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
ms.openlocfilehash: db74ef226242ec8f4f70f2769fbc8ba102a808c8
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58777181"
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di Override nelle compilazioni Native (C++/CLI)

[sealed](../extensions/sealed-cpp-component-extensions.md), [astratto](../extensions/abstract-cpp-component-extensions.md), e [override](../extensions/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non utilizzano **/ZW** oppure [/clr](../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
>  Di C + + 11 linguaggio Standard ISO è il [eseguire l'override](../cpp/override-specifier.md) identificatore e il [finale](../cpp/final-specifier.md) identificatore ed entrambi sono supportati in Visual Studio Usa `final` anziché `sealed` nel codice che è destinato a essere compilato come solo nativo.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente mostra che `sealed` è valida nelle compilazioni native.

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

L'esempio successivo mostra che `override` è valida nelle compilazioni native.

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

In questo esempio mostra che `abstract` è valida nelle compilazioni native.

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
