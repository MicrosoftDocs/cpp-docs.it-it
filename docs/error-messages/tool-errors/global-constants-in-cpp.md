---
title: Costanti globali in C++
ms.date: 11/04/2016
helpviewer_keywords:
- global constants
- constants, global
ms.assetid: df5a9bd4-d0a8-4c1c-956e-b481d0bded7d
ms.openlocfilehash: cabe5e92a496181d60536d7274eca388aba5c068
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195474"
---
# <a name="global-constants-in-c"></a>Costanti globali in C++

C++le costanti globali hanno un collegamento statico. Questa operazione è diversa da C. Se si tenta di usare una costante globale in C++ in più file, si ottiene un errore esterno non risolto. Il compilatore ottimizza le costanti globali in uscita, senza lasciare spazio riservato per la variabile.

Un modo per risolvere questo errore consiste nell'includere le inizializzazioni const in un file di intestazione e includere l'intestazione nei file CPP quando necessario, come se si trattasse di un prototipo di funzione. Un'altra possibilità consiste nel rendere la variabile non costante e usare un riferimento costante per la valutazione.

L'esempio seguente genera l'C2019:

```cpp
// global_constants.cpp
// LNK2019 expected
void test(void);
const int lnktest1 = 0;

int main() {
   test();
}
```

E quindi,

```cpp
// global_constants_2.cpp
// compile with: global_constants.cpp
extern int lnktest1;

void test() {
  int i = lnktest1;   // LNK2019
}
```

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
