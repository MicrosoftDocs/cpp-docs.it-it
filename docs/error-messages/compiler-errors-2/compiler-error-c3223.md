---
description: 'Altre informazioni su: errore del compilatore C3223'
title: Errore del compilatore C3223
ms.date: 11/04/2016
f1_keywords:
- C3223
helpviewer_keywords:
- C3223
ms.assetid: 1f4380b4-0413-40db-a868-62f97babaf78
ms.openlocfilehash: d768bba53634e3614ba4dc583cb57d2d16e744fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267690"
---
# <a name="compiler-error-c3223"></a>Errore del compilatore C3223

'property': impossibile applicare 'typeid' a una proprietà

Non è possibile applicare [typeid](../../extensions/typeid-cpp-component-extensions.md) a una proprietà.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3223.

```cpp
// C3223.cpp
// compile with: /clr
ref class R {
public:
   property int myprop;
};

int main() {
   System::Type^ type2 = R::myprop::typeid;   // C3223
}
```
