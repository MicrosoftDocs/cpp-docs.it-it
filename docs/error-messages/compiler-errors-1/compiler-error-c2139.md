---
title: Errore del compilatore C2139
ms.date: 11/04/2016
f1_keywords:
- C2139
helpviewer_keywords:
- C2139
ms.assetid: 31e047c0-5bf9-46c2-b6de-b627ea6a5768
ms.openlocfilehash: f462b7d26e21b9313949bb3968b5b39e81bb30b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437127"
---
# <a name="compiler-error-c2139"></a>Errore del compilatore C2139

'type': una classe non definita non è consentita come argomento al tratto di tipo intrinseco del compilatore 'tratto'

Un argomento non valido passato a un tratto di tipo.

Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2139.

```
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