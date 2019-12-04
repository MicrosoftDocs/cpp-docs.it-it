---
title: Errore del compilatore C3609
ms.date: 11/04/2016
f1_keywords:
- C3609
helpviewer_keywords:
- C3609
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
ms.openlocfilehash: 1d3078614ff6818dd4185b3bd5ed2f49413db16f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755954"
---
# <a name="compiler-error-c3609"></a>Errore del compilatore C3609

'member': una funzione sealed o final deve essere virtuale

Le parole chiave [sealed](../../extensions/sealed-cpp-component-extensions.md) e [Final](../../cpp/final-specifier.md) sono consentite solo in una classe, uno struct o una funzione membro contrassegnata come `virtual`.

L'esempio seguente genera l'errore C3609:

```cpp
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
