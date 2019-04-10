---
title: Avviso LNK4286 degli strumenti del linker
ms.date: 04/09/2019
f1_keywords:
- LNK4286
helpviewer_keywords:
- LNK4286
ms.openlocfilehash: f4ab9104c68534eaf1278a6cacb91623c24a237b
ms.sourcegitcommit: 0ad3f4517e64900a2702dd3d366586f9e2bce2c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2019
ms.locfileid: "59477634"
---
# <a name="linker-tools-warning-lnk4286"></a>Avviso LNK4286 degli strumenti del linker

> simbolo '*simbolo*'definito '*filename_1.obj*'è importato dal'*filename_2.obj*'

[declspec](../../cpp/dllexport-dllimport.md) è stato specificato per *simbolo* anche se il simbolo è definito nel file oggetto *filename_1.obj* nell'immagine stessa. Rimuovere il `__declspec(dllimport)` modificatore per risolvere il problema.

## <a name="remarks"></a>Note

Avviso LNK4286 è una versione più generale di [Warning di strumenti del Linker LNK4217](linker-tools-warning-lnk4217.md). Il linker genera avviso LNK4286 quando può indicare quali file di oggetto cui si fa riferimento il simbolo, ma non di funzione.

Per risolvere LNK4286, rimuovere il `__declspec(dllimport)` modificatore di dichiarazione dalla dichiarazione con prototipo dei *simbolo* indicate nei *filename_2.obj*.

Anche se il codice generato finale si comporta correttamente, è meno efficiente della chiamata alla funzione direttamente il codice generato per chiamare una funzione importata. Questo avviso non viene visualizzato quando esegue la compilazione usando il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione.

Per ulteriori informazioni sull'importazione e l'esportazione di dichiarazioni di dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="see-also"></a>Vedere anche

[Strumenti del linker LNK4049 di avviso](linker-tools-warning-lnk4049.md) \
[Avviso LNK4286 degli strumenti del linker](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)