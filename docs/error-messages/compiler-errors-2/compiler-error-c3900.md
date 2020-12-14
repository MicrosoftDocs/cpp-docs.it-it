---
description: 'Altre informazioni su: errore del compilatore C3900'
title: Errore del compilatore C3900
ms.date: 11/04/2016
f1_keywords:
- C3900
helpviewer_keywords:
- C3900
ms.assetid: a94cc561-8fa8-4344-9e01-e81ff462fae5
ms.openlocfilehash: 7b210eb6369b8953f36821d45690de8656113af2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238934"
---
# <a name="compiler-error-c3900"></a>Errore del compilatore C3900

' member ': non consentito nell'ambito corrente

I blocchi di proprietà possono contenere solo dichiarazioni di funzione e definizioni di funzione inline. Nei blocchi di proprietà non sono consentiti membri diversi da funzioni. Non sono consentiti typedef, operatori o funzioni Friend. Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

Le definizioni degli eventi possono contenere solo metodi e funzioni di accesso.

L'esempio seguente genera l'C3900:

```cpp
// C3900.cpp
// compile with: /clr
ref class X {
   property int P {
      void set(int);   // OK
      int i;   // C3900 variable declaration
   };
};
```

L'esempio seguente genera l'C3900:

```cpp
// C3900b.cpp
// compile with: /clr
using namespace System;
delegate void H();
ref class X {
   event H^ E {
      int m;   // C3900

      // OK
      void Test() {}

      void add( H^ h ) {}
      void remove( H^ h ) {}
      void raise( ) {}
   }
};
```
