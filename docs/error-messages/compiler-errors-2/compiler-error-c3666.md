---
title: Errore del compilatore C3666
ms.date: 11/04/2016
f1_keywords:
- C3666
helpviewer_keywords:
- C3666
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
ms.openlocfilehash: edca117da585fee731041d696e05af1baf6d3e5c
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58778676"
---
# <a name="compiler-error-c3666"></a>Errore del compilatore C3666

'constructor': identificatore 'keyword' non è consentita in un costruttore di override

È stato usato un identificatore di override in un costruttore e che non è consentita. Per altre informazioni, vedere [gli identificatori di Override](../../extensions/override-specifiers-cpp-component-extensions.md).

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