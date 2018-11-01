---
title: Errore del compilatore C3666
ms.date: 11/04/2016
f1_keywords:
- C3666
helpviewer_keywords:
- C3666
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
ms.openlocfilehash: aba1d3dfcf620db0f1fbaf14d0fb01745ca82659
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465546"
---
# <a name="compiler-error-c3666"></a>Errore del compilatore C3666

'constructor': identificatore 'keyword' non è consentita in un costruttore di override

È stato usato un identificatore di override in un costruttore e che non è consentita. Per altre informazioni, vedere [gli identificatori di Override](../../windows/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3666.

```
// C3666.cpp
// compile with: /clr /c
ref struct R {
   R() new {}   // C3666
   R(int i) {}   // OK
};
```