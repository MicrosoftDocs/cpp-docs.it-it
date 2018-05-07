---
title: Errore della riga di comando D8037 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8037
dev_langs:
- C++
helpviewer_keywords:
- D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 729a7fedbe1be3acbe7d68d9037b2f9c8b9f9806
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037
Impossibile creare il file temporaneo. svuotare la directory temporanea dei file il precedenti  
  
 Non c'è spazio sufficiente per creare il compilatore temporaneo dei file intermedi. Per risolvere questo errore, rimuovere i file di codice MSIL obsoleti nella directory specificata per il **TMP** variabile di ambiente. Questi file sarà di CL_hhhhhhhh, dove h rappresenta una cifra esadecimale casuale e ss rappresenta il tipo di file IL. Inoltre, assicurarsi di aggiornare il computer con le ultime patch del sistema operativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori della riga di comando D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)