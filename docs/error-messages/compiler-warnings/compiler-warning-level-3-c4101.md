---
title: Avviso del compilatore (livello 3) C4101
ms.date: 11/04/2016
f1_keywords:
- C4101
helpviewer_keywords:
- C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
ms.openlocfilehash: 5effdbb4c7e83999655641a248c389c7c4d260d0
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051900"
---
# <a name="compiler-warning-level-3-c4101"></a>Avviso del compilatore (livello 3) C4101

' Identifier ': variabile locale senza riferimenti

La variabile locale non viene mai usata. Questo avviso si verifica in una situazione ovvia:

```cpp
// C4101a.cpp
// compile with: /W3
int main() {
int i;   // C4101
}
```

Tuttavia, questo avviso si verificherà anche quando si chiama una funzione membro **statica** tramite un'istanza della classe:

```cpp
// C4101b.cpp
// compile with:  /W3
struct S {
   static int func()
   {
      return 1;
   }
};

int main() {
   S si;   // C4101, si is never used
   int y = si.func();
   return y;
}
```

In questa situazione, il compilatore usa le informazioni relative a `si` per accedere alla funzione **statica** , ma l'istanza della classe non è necessaria per chiamare la funzione **statica** . di conseguenza, l'avviso. Per risolvere il problema, è possibile:

- Aggiungere un costruttore in cui il compilatore utilizzerebbe l'istanza di `si` nella chiamata a `func`.

- Rimuovere la parola chiave **static** dalla definizione di `func`.

- Chiamare la funzione **statica** in modo esplicito: `int y = S::func();`.