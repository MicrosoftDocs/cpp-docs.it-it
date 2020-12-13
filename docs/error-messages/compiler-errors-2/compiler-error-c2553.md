---
description: 'Altre informazioni su: errore del compilatore C2553'
title: Errore del compilatore C2553
ms.date: 11/04/2016
f1_keywords:
- C2553
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
ms.openlocfilehash: 5f5e3eb9d94935aa8e6974f72517e7193ba07db3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134498"
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
