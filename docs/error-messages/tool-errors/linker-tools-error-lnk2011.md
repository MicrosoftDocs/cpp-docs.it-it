---
title: Strumenti del linker LNK2011 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2011
dev_langs:
- C++
helpviewer_keywords:
- LNK2011
ms.assetid: 04991ef5-49d5-46c7-8eee-a9d1d3fc541e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f60dce4cb260c670f5ee82aa88b9f106f3f14e2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk2011"></a>Errore degli strumenti del linker LNK2011
oggetto precompilato non collegato. immagine non può essere eseguita  
  
 Se si usano intestazioni precompilate, LINK richiede che tutti i file oggetto creati con le intestazioni precompilate siano collegati. Se si dispone di un file di origine che consente di generare un'intestazione precompilata da utilizzare con altri file di origine, è ora necessario includere il file oggetto creato con l'intestazione precompilata.  
  
 Ad esempio, se si compila un file denominato stub. cpp per creare un'intestazione precompilata da utilizzare con altri file di origine, è necessario collegare stub o si verificherà questo errore. Nelle seguenti righe di comando, riga uno viene utilizzato per creare un'intestazione precompilata, COMMON.pch, che viene utilizzato con PROG1. cpp e PROG2. cpp nelle righe di due e tre. Il file stub. cpp contiene solo `#include` righe (lo stesso `#include` righe PROG1. cpp e PROG2. cpp) e viene utilizzato solo per generare le intestazioni precompilate. Nell'ultima riga, stub deve essere collegato in per evitare l'errore LNK2011.  
  
```  
cl /c /Yccommon.h stub.cpp  
cl /c /Yucommon.h prog1.cpp  
cl /c /Yucommon.h prog2.cpp  
link /out:prog.exe stub.obj prog1.obj prog2.obj  
```