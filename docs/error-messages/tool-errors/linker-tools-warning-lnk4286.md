---
title: Avviso degli strumenti del linker LNK4286
ms.date: 04/15/2019
f1_keywords:
- LNK4286
helpviewer_keywords:
- LNK4286
ms.openlocfilehash: 43ed18808ba5ce632dd7dc7095f7bc30e4497ec9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62352437"
---
# <a name="linker-tools-warning-lnk4286"></a>Avviso degli strumenti del linker LNK4286

> simbolo '*simbolo*'definito '*filename_1.obj*'è importato dal'*filename_2.obj*'

[declspec](../../cpp/dllexport-dllimport.md) è stato specificato per *simbolo* anche se il simbolo è definito nel file oggetto *filename_1.obj* nell'immagine stessa. Rimuovere il `__declspec(dllimport)` modificatore per risolvere il problema.

## <a name="remarks"></a>Note

Avviso LNK4286 è una versione più generale di [Warning di strumenti del Linker LNK4217](linker-tools-warning-lnk4217.md). Il linker genera avviso LNK4286 quando può indicare quali file di oggetto cui si fa riferimento il simbolo, ma non di funzione.

Per risolvere LNK4286, rimuovere il `__declspec(dllimport)` modificatore di dichiarazione dalla dichiarazione con prototipo dei *simbolo* indicate nei *filename_2.obj*.

Anche se il codice generato finale si comporta correttamente, è meno efficiente della chiamata alla funzione direttamente il codice generato per chiamare una funzione importata. Questo avviso non viene visualizzato quando esegue la compilazione usando il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione.

Per ulteriori informazioni sull'importazione e l'esportazione di dichiarazioni di dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="see-also"></a>Vedere anche

[Strumenti del linker LNK4049 di avviso](linker-tools-warning-lnk4049.md) \
[Strumenti del linker LNK4217 di avviso](linker-tools-warning-lnk4217.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)