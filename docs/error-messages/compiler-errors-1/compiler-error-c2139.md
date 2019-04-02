---
title: Errore del compilatore C2139
ms.date: 11/04/2016
f1_keywords:
- C2139
helpviewer_keywords:
- C2139
ms.assetid: 31e047c0-5bf9-46c2-b6de-b627ea6a5768
ms.openlocfilehash: 15813216399c0f00fea036cd95443235e7acf4c3
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58769082"
---
# <a name="compiler-error-c2139"></a>Errore del compilatore C2139

'type': una classe non definita non è consentita come argomento al tratto di tipo intrinseco del compilatore 'tratto'

Un argomento non valido passato a un tratto di tipo.

Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../../extensions/compiler-support-for-type-traits-cpp-component-extensions.md).

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