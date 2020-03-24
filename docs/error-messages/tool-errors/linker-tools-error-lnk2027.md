---
title: Errore degli strumenti del linker LNK2027
ms.date: 11/04/2016
f1_keywords:
- LNK2027
helpviewer_keywords:
- LNK2027
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
ms.openlocfilehash: 0c531f70f98a017e8b75cceddc684f99d33bc554
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194596"
---
# <a name="linker-tools-error-lnk2027"></a>Errore degli strumenti del linker LNK2027

riferimento al modulo ' Module ' non risolto

Un file passato al linker presenta una dipendenza da un modulo che non è stato specificato con **/ASSEMBLYMODULE** né passato direttamente al linker.

Per risolvere LNK2027, eseguire una delle operazioni seguenti:

- Non passare al linker il file con la dipendenza del modulo.

- Specificare il modulo con **/ASSEMBLYMODULE**.

- Se il modulo è un file con estensione netmodule sicuro, passare il modulo direttamente al linker.

Per altre informazioni, vedere [/ASSEMBLYMODULE (aggiungere un modulo MSIL all'assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [file con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).
