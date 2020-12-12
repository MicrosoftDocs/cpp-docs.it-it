---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4927'
title: Avviso del compilatore (livello 1) C4927
ms.date: 11/04/2016
f1_keywords:
- C4927
helpviewer_keywords:
- C4927
ms.assetid: 7009e740-a2ef-4130-96ba-482e092f717a
ms.openlocfilehash: ddd131a5b87004fba56e80adbe5d9bea263f376a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301867"
---
# <a name="compiler-warning-level-1-c4927"></a>Avviso del compilatore (livello 1) C4927

conversione non valida; è stata applicata in modo implicito più di una conversione definita dall'utente

Più di una conversione definita dall'utente viene applicata in modo implicito a un singolo valore, ovvero il compilatore non ha trovato una conversione esplicita ma ha trovato una conversione che è stata usata.

L'esempio seguente genera l'C4927:

```cpp
// C4927.cpp
// compile with: /W1
struct B
{
   operator int ()
   {
      return 0;
   }
};

struct A
{
   A(int i)
   {
   }

   /*
   // uncomment this constructor to resolve
   A(B b)
   {
   }
   */
};

A f1( B& b)
{
   return A(b);
}

B& f2( B& b)
{
   return b;
}

A f()
{
   B b;
   return A(b);   // ok
   return f1(b);  // ok
   return b;      // C4927
   return B(b);   // C4927
   return f2(b);  // C4927
}

int main()
{
   B b;
   A a = b;
   A a2(b);
}
```
