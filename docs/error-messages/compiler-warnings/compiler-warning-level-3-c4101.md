---
title: Compilatore avviso (livello 3) C4101 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4101
dev_langs:
- C++
helpviewer_keywords:
- C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1549a327329d438cb30bd6908e07419eb1b6bc1a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060837"
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