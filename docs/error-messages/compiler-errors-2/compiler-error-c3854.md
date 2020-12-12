---
description: 'Altre informazioni su: errore del compilatore C3854'
title: Errore del compilatore C3854
ms.date: 11/04/2016
f1_keywords:
- C3854
helpviewer_keywords:
- C3854
ms.assetid: 32a9ead0-c6c7-485a-8802-c7b1fe921d3a
ms.openlocfilehash: f6c2399ff4c38cfbb306bd90e5bb5e96b34220eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328166"
---
# <a name="compiler-error-c3854"></a>Errore del compilatore C3854

l'espressione a sinistra di ' =' restituisce una funzione. Non è possibile assegnare a una funzione (una funzione non è un l-value)

Non è possibile reinizializzare un riferimento. La dereferenziazione di un riferimento a una funzione produce una funzione, che è un rvalue, a cui non è possibile assegnare. Pertanto, non è possibile assegnare tramite un riferimento a una funzione.

L'esempio seguente genera l'C3854:

```cpp
// C3854.cpp
int afunc(int i)
{
   return i;
}

typedef int (& rFunc_t)(int);
typedef int (* pFunc_t)(int);

int main()
{
   rFunc_t rf = afunc;   // OK binding a reference to function
   pFunc_t pf = &afunc;   // OK initializing a pointer to function

   *pf = &afunc;   // C3854
   // try the following line instead
   // pf = &afunc;
   *rf = &afunc;   // C3854
}
```
