---
title: Strumenti del linker LNK2027 errore | Documenti Microsoft
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
ms.openlocfilehash: 156310a0d21651b9fd2ee6002ace419db4996681
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301372"
---
# <a name="linker-tools-error-lnk2027"></a>Errore degli strumenti del linker LNK2027
modulo non risolto riferimento 'module'  
  
 Un file passato al linker presenta una dipendenza su un modulo che è stato specificato né con **/ASSEMBLYMODULE** né passato direttamente al linker.  
  
 Per correggere l'errore LNK2027, effettuare una delle operazioni seguenti:  
  
-   Non passare al linker i file con la dipendenza del modulo.  
  
-   Specificare il modulo con **/ASSEMBLYMODULE**.  
  
-   Se il modulo è un file con estensione netmodule sicuro, passare il modulo direttamente al linker.  
  
 Per ulteriori informazioni, vedere [/ASSEMBLYMODULE (aggiungere un modulo MSIL all'Assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md).