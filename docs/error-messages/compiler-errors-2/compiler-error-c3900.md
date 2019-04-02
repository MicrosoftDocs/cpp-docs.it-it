---
title: Errore del compilatore C3900
ms.date: 11/04/2016
f1_keywords:
- C3900
helpviewer_keywords:
- C3900
ms.assetid: a94cc561-8fa8-4344-9e01-e81ff462fae5
ms.openlocfilehash: 35df94ccfcd7942f9057cb37ceee349c09b80607
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58777415"
---
# <a name="compiler-error-c3900"></a>Errore del compilatore C3900

'member': non è consentita nell'ambito corrente

Blocchi di proprietà possono contenere dichiarazioni di funzione e definizioni di funzione inline solo. Nessun membro diversi da funzioni è consentito in blocchi di proprietà. Nessuna funzione friend, operatori o typedef sono consentita. Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

Le definizioni di evento possono contenere solo i metodi di accesso e le funzioni.

L'esempio seguente genera l'errore C3900:

```
// C3900.cpp
// compile with: /clr
ref class X {
   property int P {
      void set(int);   // OK
      int i;   // C3900 variable declaration
   };
};
```

L'esempio seguente genera l'errore C3900:

```
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