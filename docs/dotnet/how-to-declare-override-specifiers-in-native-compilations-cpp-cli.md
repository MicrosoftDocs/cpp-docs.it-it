---
title: 'Procedura: dichiarare gli identificatori di Override (C + + / CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
ms.openlocfilehash: a0c2d65aa44141b1dbe30fb39d66beabde93fa99
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555545"
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)

[sealed](../windows/sealed-cpp-component-extensions.md), [astratto](../windows/abstract-cpp-component-extensions.md), e [override](../windows/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non utilizzano **/ZW** oppure [/clr](../build/reference/clr-common-language-runtime-compilation.md).

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

[Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)