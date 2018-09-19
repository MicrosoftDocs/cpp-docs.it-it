---
title: Errore LNK2027 degli strumenti del linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2027
dev_langs:
- C++
helpviewer_keywords:
- LNK2027
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 022e363af575e29e3085dcaec21257fa7e4ab5f1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116847"
---
# <a name="linker-tools-error-lnk2027"></a>Errore degli strumenti del linker LNK2027

modulo non risolti riferimenti 'module'

Un file passato al linker presenta una dipendenza su un modulo che non è stato specificato con **/ASSEMBLYMODULE** né passato direttamente al linker.

Per correggere l'errore LNK2027, eseguire una delle operazioni seguenti:

- Non passare al linker il file che contiene la dipendenza dal modulo.

- Specificare il modulo con **/ASSEMBLYMODULE**.

- Se il modulo è un file con estensione netmodule sicuro, passare il modulo direttamente al linker.

Per altre informazioni, vedere [/ASSEMBLYMODULE (aggiunge un modulo MSIL all'Assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [i file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md).