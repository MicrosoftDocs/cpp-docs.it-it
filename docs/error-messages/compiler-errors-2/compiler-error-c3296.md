---
title: Errore del compilatore C3296
ms.date: 11/04/2016
f1_keywords:
- C3296
helpviewer_keywords:
- C3296
ms.assetid: fc4c9dcd-16cf-4eee-a1ac-c43e7c29e443
ms.openlocfilehash: c6821fc1bafa5110fe9a3db2da9a69ad6c1e57f2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760095"
---
# <a name="compiler-error-c3296"></a>Errore del compilatore C3296

'property': esiste già una proprietà con questo nome

Sono state rilevate più proprietà con lo stesso nome. Ogni proprietà in un tipo deve avere un nome univoco.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3296.

```cpp
// C3296.cpp
// compile with: /clr /c
using namespace System;

ref class R {
public:
   property int MyProp[int] { int get(int); }

   property String^ MyProp[int] { void set(int, String^); }   // C3296
};
```
