---
title: Costanti globali in C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- global constants
- constants, global
ms.assetid: df5a9bd4-d0a8-4c1c-956e-b481d0bded7d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 00d033c1c4fc8fc3e534c8e4ee0c3d7867b83834
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103173"
---
# <a name="global-constants-in-c"></a>Costanti globali in C++

Costanti globali C++ hanno un collegamento statico. Questo comportamento è diverso rispetto a C. Se si prova a usare un globali costante in C++ in più file si verifica un errore esterno non risolto. Il compilatore ottimizza le costanti globali sono, senza lasciare spazio riservato per la variabile.

Un modo per risolvere questo errore è da includere le inizializzazioni const in un file di intestazione e includere l'intestazione nei file CPP quando necessario, come se fosse prototipo di funzione. Un'altra possibilità consiste nel rendere la variabile non costante e usare un riferimento costante quando valutarla.

L'esempio seguente genera l'errore C2019:

```
// global_constants.cpp
// LNK2019 expected
void test(void);
const int lnktest1 = 0;

int main() {
   test();
}
```

E quindi,

```
// global_constants_2.cpp
// compile with: global_constants.cpp
extern int lnktest1;

void test() {
  int i = lnktest1;   // LNK2019
}
```

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)