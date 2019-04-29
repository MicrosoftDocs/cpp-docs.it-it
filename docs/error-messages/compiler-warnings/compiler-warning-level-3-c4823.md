---
title: Avviso del compilatore (livello 3) C4823
ms.date: 11/04/2016
f1_keywords:
- C4823
helpviewer_keywords:
- C4823
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
ms.openlocfilehash: 28d490c341c4d14c2e6c03e13007b5a8be423622
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401540"
---
# <a name="compiler-warning-level-3-c4823"></a>Avviso del compilatore (livello 3) C4823

'function': i puntatori di blocco di rimozione ma viene utilizzata la semantica non è abilitata. È consigliabile usare /EHa.

Per sbloccare un oggetto nell'heap gestito a cui punta un puntatore di blocco dichiarato in ambito di un blocco, il compilatore simula il comportamento dei distruttori delle classi locali, "che fingono" il puntatore di blocco ha un distruttore che annulla il puntatore del mouse. Per abilitare una chiamata a un distruttore dopo la generazione di un'eccezione, è necessario abilitare la rimozione di oggetti, è possibile ripetere l'operazione usando [/EHsc](../../build/reference/eh-exception-handling-model.md).

Puoi anche manualmente è possibile rimuovere l'oggetto e ignorare l'avviso.

## <a name="example"></a>Esempio

L'esempio seguente genera l'avviso C4823.

```
// C4823.cpp
// compile with: /clr /W3 /EHa-
using namespace System;

ref struct G {
   int m;
};

void f(G ^ pG) {
   try {
      pin_ptr<int> p = &pG->m;
      // manually unpin, ignore warning
      // p = nullptr;
      throw gcnew Exception;
   }
   catch(Exception ^) {}
}   // C4823 warning

int main() {
   f( gcnew G );
}
```
