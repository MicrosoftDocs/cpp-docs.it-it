---
title: Errore del compilatore C3768
ms.date: 11/04/2016
f1_keywords:
- C3768
helpviewer_keywords:
- C3768
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
ms.openlocfilehash: 534be9e3873276313335ca921264be92c9259b93
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165743"
---
# <a name="compiler-error-c3768"></a>Errore del compilatore C3768

> Impossibile prendere l'indirizzo di una funzione vararg virtuale in codice gestito pure

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Quando si esegue la compilazione con **/CLR: pure**, non è possibile usare l'indirizzo di una funzione `vararg` virtuale.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3768:

```cpp
// C3768.cpp
// compile with: /clr:pure
struct A
{
   virtual void f(...);
};

int main()
{
   &(A::f);   // C3768
}
```
