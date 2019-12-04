---
title: Errore del compilatore C2553
ms.date: 11/04/2016
f1_keywords:
- C2553
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
ms.openlocfilehash: aa3e97d576e994878ab5b080363c4c09b79f42ed
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756786"
---
# <a name="compiler-error-c2553"></a>Errore del compilatore C2553

' base_function ': il tipo restituito dalla funzione virtuale che esegue l'override differisce da' override_function '

Una funzione in una classe derivata ha tentato di eseguire l'override di una funzione virtuale in una classe base, ma la funzione della classe derivata non ha lo stesso tipo restituito della funzione della classe base.  Una firma della funzione di override deve corrispondere alla firma della funzione sottoposta a override.

L'esempio seguente genera l'C2553:

```cpp
// C2553.cpp
// compile with: /clr /c
ref struct C {
   virtual void f();
};

ref struct D : C {
   virtual int f() override ;   // C2553

   // try the following line instead
   // virtual void f() override;
};
```
