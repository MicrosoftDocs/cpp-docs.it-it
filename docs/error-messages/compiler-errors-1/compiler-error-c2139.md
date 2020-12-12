---
description: 'Altre informazioni su: errore del compilatore C2139'
title: Errore del compilatore C2139
ms.date: 11/04/2016
f1_keywords:
- C2139
helpviewer_keywords:
- C2139
ms.assetid: 31e047c0-5bf9-46c2-b6de-b627ea6a5768
ms.openlocfilehash: 240d1cdd4144e77a31063985a8a1fffb6992196c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323064"
---
# <a name="compiler-error-c2139"></a>Errore del compilatore C2139

' type ': una classe non definita non è consentita come argomento per il tratto di tipo intrinseco del compilatore ' tratto '

Un argomento non valido è stato passato a un tratto di tipo.

Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](../../extensions/compiler-support-for-type-traits-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2139.

```cpp
// C2139.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

template <class T>
struct is_polymorphic {
   static const bool value = __is_polymorphic(T);
};

class C;
class D {};

class E {
public:
   virtual void Test() {}
};

int main() {
   cout << is_polymorphic<C>::value << endl;   // C2139
   cout << is_polymorphic<D>::value << endl;   // OK
   cout << is_polymorphic<E>::value << endl;   // OK
}
```
