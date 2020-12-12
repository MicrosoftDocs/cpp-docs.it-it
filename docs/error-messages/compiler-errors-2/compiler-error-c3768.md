---
description: 'Altre informazioni su: errore del compilatore C3768'
title: Errore del compilatore C3768
ms.date: 11/04/2016
f1_keywords:
- C3768
helpviewer_keywords:
- C3768
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
ms.openlocfilehash: 3203fe74fb1da91f24312f76ca11ac49711da8f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291714"
---
# <a name="compiler-error-c3768"></a>Errore del compilatore C3768

> Impossibile prendere l'indirizzo di una funzione vararg virtuale in codice gestito pure

## <a name="remarks"></a>Commenti

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Quando si esegue la compilazione con **/CLR: pure**, non è possibile usare l'indirizzo di una `vararg` funzione virtuale.

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
