---
title: Errore del compilatore C3351
ms.date: 11/04/2016
f1_keywords:
- C3351
helpviewer_keywords:
- C3351
ms.assetid: c021bbbe-1067-4f51-af4f-940d2b792eb5
ms.openlocfilehash: 3390d57bf3c0a10ccde8a4f850a07451dd63ae67
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231988"
---
# <a name="compiler-error-c3351"></a>Errore del compilatore C3351

'object': costruttore di delegato: il secondo argomento deve essere l'indirizzo di una funzione membro statica o di una funzione globale

Il compilatore prevedeva l'indirizzo di una funzione dichiarata **`static`** .

L'esempio seguente genera l'errore C3351:

```cpp
// C3351a.cpp
// compile with: /clr
delegate int D(int, int);

ref class C {
public:
   int mf(int, int) {
      return 1;
   }

   static int mf2(int, int) {
      return 1;
   }
};

int main() {
   System::Delegate ^pD = gcnew D(nullptr, &C::mf);   // C3351
   System::Delegate ^pD2 = gcnew D(&C::mf2);
}
```
