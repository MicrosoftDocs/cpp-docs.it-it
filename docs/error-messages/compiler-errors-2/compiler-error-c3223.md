---
title: Errore del compilatore C3223
ms.date: 11/04/2016
f1_keywords:
- C3223
helpviewer_keywords:
- C3223
ms.assetid: 1f4380b4-0413-40db-a868-62f97babaf78
ms.openlocfilehash: 5771de24cd07978903a3e598f1ff5658cb61eafa
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59778548"
---
# <a name="compiler-error-c3223"></a>Errore del compilatore C3223

'property': impossibile applicare 'typeid' a una proprietà

Non è possibile applicare [typeid](../../extensions/typeid-cpp-component-extensions.md) a una proprietà.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3223.

```
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