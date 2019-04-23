---
title: Errore del compilatore C3609
ms.date: 11/04/2016
f1_keywords:
- C3609
helpviewer_keywords:
- C3609
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
ms.openlocfilehash: 27eba3df800c42cc53a7031e958a675c84255440
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59778358"
---
# <a name="compiler-error-c3609"></a>Errore del compilatore C3609

'member': una funzione sealed o final deve essere virtuale

Il [sealed](../../extensions/sealed-cpp-component-extensions.md) e [finale](../../cpp/final-specifier.md) parole chiave sono consentite solo su una funzione di classe, struct o membro contrassegnata `virtual`.

L'esempio seguente genera l'errore C3609:

```
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
