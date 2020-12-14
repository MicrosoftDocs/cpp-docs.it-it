---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4286'
title: Avviso degli strumenti del linker LNK4286
ms.date: 04/15/2019
f1_keywords:
- LNK4286
helpviewer_keywords:
- LNK4286
ms.openlocfilehash: 6a1e397967857ae3f982bf8f5e55f4bf74c9abe4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244446"
---
# <a name="linker-tools-warning-lnk4286"></a>Avviso degli strumenti del linker LNK4286

> il simbolo '*Symbol*' definito in '*filename_1. obj*' è importato da'*filename_2. obj*'

per il *simbolo* è stato specificato [__declspec (dllimport)](../../cpp/dllexport-dllimport.md) anche se il simbolo è definito nel file oggetto *filename_1. obj* nella stessa immagine. Rimuovere il `__declspec(dllimport)` modificatore per risolvere questo avviso.

## <a name="remarks"></a>Commenti

Avviso LNK4286 è una versione più generale dell' [avviso LNK4217 degli strumenti del linker](linker-tools-warning-lnk4217.md). Il linker genera un avviso LNK4286 quando è in grado di indicare il file oggetto a cui fa riferimento il simbolo, ma non la funzione.

Per risolvere LNK4286, rimuovere il `__declspec(dllimport)` modificatore di dichiarazione dalla dichiarazione in base al *simbolo* a cui viene fatto riferimento in *filename_2. obj*.

Anche se il codice generato finale funziona correttamente, il codice generato per chiamare una funzione importata è meno efficiente rispetto alla chiamata diretta della funzione. Questo avviso non viene visualizzato quando si esegue la compilazione con l'opzione [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) .

Per ulteriori informazioni sulle dichiarazioni di importazione ed esportazione dei dati, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## <a name="see-also"></a>Vedi anche

[Avviso degli strumenti del linker LNK4049](linker-tools-warning-lnk4049.md) \
[Avviso degli strumenti del linker LNK4217](linker-tools-warning-lnk4217.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)
