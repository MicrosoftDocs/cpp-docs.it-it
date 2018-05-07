---
title: Strumenti del linker LNK1188 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1188
dev_langs:
- C++
helpviewer_keywords:
- LNK1188
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e31943ae253a332576fba73102db410b103a0096
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1188"></a>Errore degli strumenti del linker LNK1188
BADFIXUPSECTION:: la destinazione della correzione non valido 'symbol'; possibili sezione abbia lunghezza zero  
  
 Durante un collegamento VxD, la destinazione di una rilocazione non conteneva una sezione. Con LINK386 (una versione precedente), un record OMF GROUP (generato da una direttiva MASM GROUP) potrebbe essere stato utilizzato per combinare la sezione abbia lunghezza zero con un'altra sezione di lunghezza diversa da zero. Formato COFF non supporta la direttiva GROUP e sezioni di lunghezza zero. Quando il collegamento converte automaticamente questo tipo di oggetti OMF a COFF, questo errore può verificarsi.