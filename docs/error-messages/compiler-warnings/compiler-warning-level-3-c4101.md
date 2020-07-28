---
title: Avviso del compilatore (livello 3) C4101
ms.date: 11/04/2016
f1_keywords:
- C4101
helpviewer_keywords:
- C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
ms.openlocfilehash: f9d3875fdc17def1e7d3bcb72149c5faf90f656a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220054"
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

Tuttavia, questo avviso si verificherà anche quando si chiama una **`static`** funzione membro tramite un'istanza della classe:

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

In questa situazione, il compilatore usa le informazioni relative `si` all'accesso alla **`static`** funzione, ma l'istanza della classe non è necessaria per chiamare la **`static`** funzione, quindi l'avviso. Per risolvere il problema, è possibile:

- Aggiungere un costruttore in cui il compilatore utilizzerebbe l'istanza di `si` nella chiamata a `func` .

- Rimuovere la **`static`** parola chiave dalla definizione di `func` .

- Chiamare la **`static`** funzione in modo esplicito: `int y = S::func();` .
