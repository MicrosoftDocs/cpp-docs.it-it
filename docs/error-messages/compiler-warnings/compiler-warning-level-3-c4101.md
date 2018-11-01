---
title: Compilatore avviso (livello 3) C4101
ms.date: 11/04/2016
f1_keywords:
- C4101
helpviewer_keywords:
- C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
ms.openlocfilehash: d1109a32e754a6055e5e1d90632ad85332d832f1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661123"
---
# <a name="compiler-warning-level-3-c4101"></a>Compilatore avviso (livello 3) C4101

'identifier': variabile locale senza riferimenti

La variabile locale non viene mai usata. Questo avviso si verifica nella situazione ovvia:

```
// C4101a.cpp
// compile with: /W3
int main() {
int i;   // C4101
}
```

Tuttavia, questo avviso viene generato anche quando si chiama un **statici** funzione membro tramite un'istanza della classe:

```
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

In questo caso, il compilatore utilizza le informazioni sulle `si` per l'accesso il **statici** funzione, ma l'istanza della classe non è necessaria per chiamare il **statico** funzione; di conseguenza l'avviso. Per risolvere questo problema, è possibile:

- Aggiungere un costruttore, in cui il compilatore utilizzerà l'istanza di `si` nella chiamata a `func`.

- Rimuovere il **statici** parola chiave dalla definizione della `func`.

- Chiamare il **statici** funzionare in modo esplicito: `int y = S::func();`.