---
title: Errore del compilatore C3633
ms.date: 11/04/2016
f1_keywords:
- C3633
helpviewer_keywords:
- C3633
ms.assetid: 7d65babf-2191-4d67-a69f-f5c4c2ddf946
ms.openlocfilehash: 5f44c94cbb3c945406835816d8fc6ed7c39480eb
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74742626"
---
# <a name="compiler-error-c3633"></a>Errore del compilatore C3633

non è possibile definire ' member ' come membro di ' type ' gestito

I membri dati della classe di riferimento CLR non possono essere di C++ tipo non pod.  È possibile creare solo un'istanza di un tipo nativo POD in un tipo CLR.  Un tipo POD, ad esempio, non può contenere un costruttore di copia o un operatore di assegnazione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3633.

```cpp
// C3633.cpp
// compile with: /clr /c
#pragma warning( disable : 4368 )

class A1 {
public:
   A1() { II = 0; }
   int II;
};

ref class B {
public:
   A1 a1;   // C3633
   A1 * a2;   // OK
   B() : a2( new A1 ) {}
    ~B() { delete a2; }
};
```
