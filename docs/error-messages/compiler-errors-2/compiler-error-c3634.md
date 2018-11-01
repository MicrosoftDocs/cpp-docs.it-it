---
title: Errore del compilatore C3634
ms.date: 11/04/2016
f1_keywords:
- C3634
helpviewer_keywords:
- C3634
ms.assetid: fd09f10c-f863-483b-9756-71c16b760b02
ms.openlocfilehash: 2acd76fee5e7ca309991e639044a45ea83ed112b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50527543"
---
# <a name="compiler-error-c3634"></a>Errore del compilatore C3634

'function': non è possibile definire un metodo astratto di un oggetto gestito o WinRTclass

È possibile dichiarare un metodo astratto in una classe gestita o WinRT, ma non definirlo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3634:

```
// C3634.cpp
// compile with: /clr
ref class C {
   virtual void f() = 0;
};

void C::f() {   // C3634 - don't define managed class' pure virtual method
}
```
