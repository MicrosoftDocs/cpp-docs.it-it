---
title: Errore LNK1237 degli strumenti del linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1237
dev_langs:
- C++
helpviewer_keywords:
- LNK1237
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f9ada38fcf3a706f7852f49f60f677fb5dc10d7e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065296"
---
# <a name="linker-tools-error-lnk1237"></a>Errore degli strumenti del linker LNK1237

durante la generazione del codice, il compilatore ha introdotto un riferimento al simbolo 'symbol' definiti nel modulo 'modulo' compilato con /GL

Durante la generazione del codice, il compilatore non deve introdurre i simboli che sono stati risolti in un secondo momento per le definizioni di compilazione **/GL**. `symbol` è un simbolo che è stato introdotto e risolto in un secondo momento a una definizione di compilazione con **/GL**.

Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

Per correggere l'errore LNK1237, la compilazione non la larghezza del simbolo **/GL** oppure utilizzare [/INCLUDE (forza riferimenti al simbolo)](../../build/reference/include-force-symbol-references.md) per forzare un riferimento al simbolo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1237. Per risolvere questo errore, inizializzare la matrice nella LNK1237_a. cpp e aggiungere **/include: chkstk** al comando del collegamento.

```
// LNK1237_a.cpp
int main() {
   char c[5000] = {0};
}
```

```
// LNK1237_b.cpp
// compile with: /GS- /GL /c LNK1237_a.cpp
// processor: x86
// post-build command: (lib LNK1237_b.obj /LTCG & link LNK1237_a.obj LNK1237_b.lib /nodefaultlib /entry:main /LTCG)
extern "C" void _chkstk(size_t s) {}
```