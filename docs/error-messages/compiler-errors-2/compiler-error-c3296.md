---
title: Errore del compilatore C3296
ms.date: 11/04/2016
f1_keywords:
- C3296
helpviewer_keywords:
- C3296
ms.assetid: fc4c9dcd-16cf-4eee-a1ac-c43e7c29e443
ms.openlocfilehash: 2e9787b063a5a37af8d0e0fdd04492a743792646
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588110"
---
# <a name="compiler-error-c3296"></a>Errore del compilatore C3296

'property': esiste già una proprietà con questo nome

Sono state rilevate più proprietà con lo stesso nome. Ogni proprietà in un tipo deve avere un nome univoco.

Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).

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