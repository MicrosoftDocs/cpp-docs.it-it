---
description: 'Altre informazioni su: errore del compilatore C3189'
title: Errore del compilatore C3189
ms.date: 11/04/2016
f1_keywords:
- C3189
helpviewer_keywords:
- C3189
ms.assetid: b254de79-931e-4a59-a9f4-1c690d90ca5e
ms.openlocfilehash: 9253a1d4333a7454bfbff5442cfaa5a24ebc68ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242002"
---
# <a name="compiler-error-c3189"></a>Errore del compilatore C3189

' TypeId \<type abstract declarator> ': questa sintassi non è più supportata. usare:: typeid

È stata utilizzata una forma obsoleta di [typeid](../../extensions/typeid-cpp-component-extensions.md) , utilizzare il nuovo form.

L'esempio seguente genera l'C3189:

```cpp
// C3189.cpp
// compile with: /clr
int main() {
   System::Type^ t  = typeid<System::Object>;   // C3189
   System::Type^ t2  = System::Object::typeid;   // OK
}
```
