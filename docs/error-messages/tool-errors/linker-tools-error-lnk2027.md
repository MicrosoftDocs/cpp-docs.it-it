---
title: Errore degli strumenti del linker LNK2027
ms.date: 11/04/2016
f1_keywords:
- LNK2027
helpviewer_keywords:
- LNK2027
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
ms.openlocfilehash: e74912780bab3056ead36ae3705f0910805228e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50545899"
---
# <a name="linker-tools-error-lnk2027"></a>Errore degli strumenti del linker LNK2027

modulo non risolti riferimenti 'module'

Un file passato al linker presenta una dipendenza su un modulo che non è stato specificato con **/ASSEMBLYMODULE** né passato direttamente al linker.

Per correggere l'errore LNK2027, eseguire una delle operazioni seguenti:

- Non passare al linker il file che contiene la dipendenza dal modulo.

- Specificare il modulo con **/ASSEMBLYMODULE**.

- Se il modulo è un file con estensione netmodule sicuro, passare il modulo direttamente al linker.

Per altre informazioni, vedere [/ASSEMBLYMODULE (aggiunge un modulo MSIL all'Assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [i file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md).