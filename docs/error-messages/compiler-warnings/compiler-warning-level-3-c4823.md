---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4823'
title: Avviso del compilatore (livello 3) C4823
ms.date: 11/04/2016
f1_keywords:
- C4823
helpviewer_keywords:
- C4823
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
ms.openlocfilehash: b5f4efcf25e59025ad086832c2446d856918542a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332106"
---
# <a name="compiler-warning-level-3-c4823"></a>Avviso del compilatore (livello 3) C4823

' Function ': USA puntatori di blocco ma la semantica di rimozione non è abilitata. Prendere in considerazione l'uso di/EHa

Per Rimuovi un oggetto nell'heap gestito a cui punta un puntatore di blocco dichiarato in un ambito di blocco, il compilatore simula il comportamento dei distruttori delle classi locali, "fingendo" il puntatore di blocco ha un distruttore che annulla il puntatore. Per abilitare una chiamata a un distruttore dopo che è stata generata un'eccezione, è necessario abilitare la rimozione dell'oggetto, che è possibile eseguire usando [/EHsc](../../build/reference/eh-exception-handling-model.md).

È anche possibile Rimuovi manualmente l'oggetto e ignorare l'avviso.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4823.

```cpp
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
