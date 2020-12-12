---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1237'
title: Errore degli strumenti del linker LNK1237
ms.date: 11/04/2016
f1_keywords:
- LNK1237
helpviewer_keywords:
- LNK1237
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
ms.openlocfilehash: ba6a0d23eea4d8d555115950fcd54a5e4f6a8bde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193982"
---
# <a name="linker-tools-error-lnk1237"></a>Errore degli strumenti del linker LNK1237

durante la generazione del codice, il compilatore ha introdotto un riferimento al simbolo ' symbol ' definito nel modulo ' Module ' compilato con/GL

Durante la generazione del codice, il compilatore non deve introdurre simboli che verranno risolti in un secondo momento per le definizioni compilate **/GL**. `symbol` è un simbolo che è stato introdotto e successivamente risolto in una definizione compilata con **/GL**.

Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

Per risolvere LNK1237, non compilare il simbolo con **/GL** o usare [/include (forza riferimenti al simbolo)](../../build/reference/include-force-symbol-references.md) per forzare un riferimento al simbolo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK1237. Per correggere l'errore, non inizializzare la matrice in LNK1237_a. cpp e aggiungere **/include: __chkstk** al comando di collegamento.

```cpp
// LNK1237_a.cpp
int main() {
   char c[5000] = {0};
}
```

```cpp
// LNK1237_b.cpp
// compile with: /GS- /GL /c LNK1237_a.cpp
// processor: x86
// post-build command: (lib LNK1237_b.obj /LTCG & link LNK1237_a.obj LNK1237_b.lib /nodefaultlib /entry:main /LTCG)
extern "C" void _chkstk(size_t s) {}
```
