---
title: Compilatore avviso (livello 3) C4823 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4823
dev_langs:
- C++
helpviewer_keywords:
- C4823
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c3a6f24a32267f221dbc37e242bae48c0056af5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044652"
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
