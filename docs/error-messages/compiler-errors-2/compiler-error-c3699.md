---
description: 'Altre informazioni su: errore del compilatore C3699'
title: Errore del compilatore C3699
ms.date: 11/04/2016
f1_keywords:
- C3699
helpviewer_keywords:
- C3699
ms.assetid: 47c29afc-ab8b-4238-adfe-788dd6e00b3b
ms.openlocfilehash: 670b5c41aad9afcece8d8cd292727ad64925a4ab
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228716"
---
# <a name="compiler-error-c3699"></a>Errore del compilatore C3699

' operator ': non è possibile usare questo riferimento indiretto nel tipo ' type '

Si è tentato di utilizzare un riferimento indiretto non consentito in `type` .

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C3699.

```cpp
// C3699.cpp
// compile with: /clr /c
using namespace System;
int main() {
   String * s;   // C3699
   // try the following line instead
   // String ^ s2;
}
```

Una proprietà Trivial non può avere un tipo di riferimento. Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md) . L'esempio seguente genera l'C3699.

```cpp
// C3699_b.cpp
// compile with: /clr /c
ref struct C {
   property System::String % x;   // C3699
   property System::String ^ y;   // OK
};
```

L'equivalente di una sintassi "puntatore a un puntatore" è un handle per un riferimento di rilevamento. L'esempio seguente genera l'C3699.

```cpp
// C3699_c.cpp
// compile with: /clr /c
using namespace System;
void Test(String ^^ i);   // C3699
void Test2(String ^% i);
```
