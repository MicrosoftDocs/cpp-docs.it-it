---
title: Errore del compilatore C3609
ms.date: 11/04/2016
f1_keywords:
- C3609
helpviewer_keywords:
- C3609
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
ms.openlocfilehash: 2eff238aed756c9f056da9a1b9a70fca9de24fa3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230805"
---
# <a name="compiler-error-c3609"></a>Errore del compilatore C3609

'member': una funzione sealed o final deve essere virtuale

Le parole chiave [sealed](../../extensions/sealed-cpp-component-extensions.md) e [Final](../../cpp/final-specifier.md) sono consentite solo in una classe, uno struct o una funzione membro contrassegnata come **`virtual`** .

L'esempio seguente genera l'errore C3609:

```cpp
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
