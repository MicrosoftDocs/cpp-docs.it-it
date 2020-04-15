---
title: 'Procedura: dichiarare gli identificatori di override (C'
ms.date: 11/04/2016
helpviewer_keywords:
- override specifiers in native compilation, overriding
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
ms.openlocfilehash: 9f3f6855f257d0af250b9bbdd2c0360b308ce775
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374456"
---
# <a name="how-to-declare-override-specifiers-in-native-compilations-ccli"></a>Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)

[sealed](../extensions/sealed-cpp-component-extensions.md), [abstract](../extensions/abstract-cpp-component-extensions.md)e [override](../extensions/override-cpp-component-extensions.md) sono disponibili nelle compilazioni che non utilizzano **l'opzione //W** o [/clr](../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> [L'identificatore](../cpp/override-specifier.md) standard e l'identificatore [finale](../cpp/final-specifier.md) del linguaggio standard di C-11 sono ed entrambi sono supportati in Visual Studio Use `final` anziché `sealed` nel codice che deve essere compilato come solo nativo.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente `sealed` viene illustrato che è valido nelle compilazioni native.

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

L'esempio seguente `override` mostra che è valido nelle compilazioni native.

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

In questo `abstract` esempio viene illustrato che è valido nelle compilazioni native.

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
