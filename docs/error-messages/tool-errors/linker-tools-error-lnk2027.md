---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2027'
title: Errore degli strumenti del linker LNK2027
ms.date: 11/04/2016
f1_keywords:
- LNK2027
helpviewer_keywords:
- LNK2027
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
ms.openlocfilehash: 006ca3b0c9d0ef85f118db9b562e8228c7cad238
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275763"
---
# <a name="linker-tools-error-lnk2027"></a>Errore degli strumenti del linker LNK2027

riferimento al modulo ' Module ' non risolto

Un file passato al linker presenta una dipendenza da un modulo che non è stato specificato con **/ASSEMBLYMODULE** né passato direttamente al linker.

Per risolvere LNK2027, eseguire una delle operazioni seguenti:

- Non passare al linker il file con la dipendenza del modulo.

- Specificare il modulo con **/ASSEMBLYMODULE**.

- Se il modulo è un file con estensione netmodule sicuro, passare il modulo direttamente al linker.

Per altre informazioni, vedere [/ASSEMBLYMODULE (aggiungere un modulo MSIL all'assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [file con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).
