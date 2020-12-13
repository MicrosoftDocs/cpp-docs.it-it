---
description: 'Altre informazioni su: errore del compilatore C3903'
title: Errore del compilatore C3903
ms.date: 11/04/2016
f1_keywords:
- C3903
helpviewer_keywords:
- C3903
ms.assetid: cf47d7ad-a3bd-4f75-a253-71586e7a3be6
ms.openlocfilehash: a8d0cb8e9629bc2099c73b83367aa602315e26a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144248"
---
# <a name="compiler-error-c3903"></a>Errore del compilatore C3903

' Property ': non ha un metodo set o Get

Una proprietà deve avere almeno un `get` `set` metodo o. Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

L'esempio seguente genera l'C3903:

```cpp
// C3903.cpp
// compile with: /clr
ref class X {
   property int P {
      void f(int){}
      // Add one or both of the following lines.
      // void set(int){}
      // int get(){return 0;}
   };   // C3903

   property double Q[,,,,] {
      void f(){}
      // Add one or both of the following lines.
      // void set(int, char, int, char, double, double){}
      // double get(int, char, int, char, double){return 1.1;}
   }   // C3903
};
```
