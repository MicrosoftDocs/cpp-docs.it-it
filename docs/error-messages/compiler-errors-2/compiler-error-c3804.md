---
title: Errore del compilatore C3804
ms.date: 11/04/2016
f1_keywords:
- C3804
helpviewer_keywords:
- C3804
ms.assetid: 7c4cda28-ec96-4d04-937b-36dbd9944722
ms.openlocfilehash: c3c00d1d07306a9e8dc67d3f75a5cb25d8f03aee
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770292"
---
# <a name="compiler-error-c3804"></a>Errore del compilatore C3804

'property_accessor': i metodi della funzione di accesso di una proprietà devono essere tutti statici o tutti non statici

Quando si definisce una proprietà non è semplice, le funzioni di accesso possono essere statico o istanza, ma non entrambi.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3804.

```
// C3804.cpp
// compile with: /c /clr
ref struct A {

   property int i {
      static int get() {}
      void set(int i) {}
   }   // C3804 error

   // OK
   property int j {
      int get() { return 0; }
      void set(int i) {}
   }

   property int k {
      static int get() { return 0; }
      static void set(int i) {}
   }
};
```