---
title: Errore del compilatore C2896
ms.date: 11/04/2016
f1_keywords:
- C2896
helpviewer_keywords:
- C2896
ms.assetid: b600407b-cb05-42e3-9069-2aa6960f0eaa
ms.openlocfilehash: 1e30dc17e7c143af52c5a8b56be7f1efa7632ee2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554398"
---
# <a name="compiler-error-c2896"></a>Errore del compilatore C2896

'function1': non è possibile usare il modello di funzione 'function2' come argomento

Un modello di funzione non può essere un argomento a un altro modello di funzione.

L'esempio seguente genera l'errore C2896:

```
// C2896.cpp
template<class T1, class T2> void f1(void(*)(T1, T2));
template<class T1, class T2> void f2(T1, T2);

int main() {
   f1(f2);   // C2896
}
```

C2896 può verificarsi anche quando si usano i generics:

```
// C2896b.cpp
// compile with: /clr
generic<class T1> void gf1(T1){}
generic<class T1> void gf2(T1){}

int main() {
   gf1(gf2);   // C2896
   gf1(1);   // OK
}
```