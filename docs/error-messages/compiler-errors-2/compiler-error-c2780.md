---
title: Errore del compilatore C2780
ms.date: 11/04/2016
f1_keywords:
- C2780
helpviewer_keywords:
- C2780
ms.assetid: 423793d8-a3b2-4f35-85f8-ae1d043e2b69
ms.openlocfilehash: 9a427bbd79570a2646447d5326e034035306fac6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50547455"
---
# <a name="compiler-error-c2780"></a>Errore del compilatore C2780

'declaration': argomenti previsti: N, forniti: M

Un modello di funzione dispone di argomenti in numero insufficiente o eccessivo.

L'esempio seguente genera l'errore C2780 e mostra come risolverlo:

```
// C2780.cpp
template<typename T>
void f(T, T){}

int main() {
   f(1);  // C2780
   // try the following line instead
   // f(1,2);
}
```