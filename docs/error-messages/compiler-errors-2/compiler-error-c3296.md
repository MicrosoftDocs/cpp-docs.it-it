---
title: Errore del compilatore C3296
ms.date: 11/04/2016
f1_keywords:
- C3296
helpviewer_keywords:
- C3296
ms.assetid: fc4c9dcd-16cf-4eee-a1ac-c43e7c29e443
ms.openlocfilehash: c0a162590ac2a72dda17b2ecfc96899e94cde24c
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767041"
---
# <a name="compiler-error-c3296"></a>Errore del compilatore C3296

'property': esiste già una proprietà con questo nome

Sono state rilevate più proprietà con lo stesso nome. Ogni proprietà in un tipo deve avere un nome univoco.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3296.

```
// C3296.cpp
// compile with: /clr /c
using namespace System;

ref class R {
public:
   property int MyProp[int] { int get(int); }

   property String^ MyProp[int] { void set(int, String^); }   // C3296
};
```