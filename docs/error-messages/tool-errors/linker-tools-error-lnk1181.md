---
title: Strumenti del linker LNK1181 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1181
dev_langs:
- C++
helpviewer_keywords:
- LNK1181
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f5092d4f3ce7b4f96ca4dc5c1554483a7fc3a0b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1181"></a>Errore degli strumenti del linker LNK1181
Impossibile aprire il file di input 'nomefile'  
  
 Il linker non è stato possibile trovare `filename` perché non esiste o il percorso non è stato trovato.  
  
 Alcune cause comuni dell'errore LNK1181 includono:  
  
-   `filename`viene fatto riferimento come dipendenza aggiuntiva nella riga del linker, ma il file non esiste.  
  
-   Oggetto **/LIBPATH** istruzione che specifica la directory contenente `filename` mancante.  
  
 Per risolvere questi problemi, verificare i file a cui fa riferimento nella riga del linker sono presenti nel sistema.  Assicurarsi inoltre che vi sia un **/LIBPATH** istruzione per ogni directory contenente un file dipendente dal linker.  
  
 Un'altra possibile causa LNK1181 è un nome di file lungo con spazi incorporati non è stato racchiuso tra virgolette.  In tal caso, il linker riconosce solo un nome di file fino al primo spazio e quindi si presuppone l'estensione. obj.  La soluzione al problema consiste nel racchiudere il nome di file lunghi (nome file + percorso) tra virgolette.  
  
 Per ulteriori informazioni, vedere [file LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md).  
  
## <a name="see-also"></a>Vedere anche  
 [/LIBPATH (percorso LIB aggiuntivo)](../../build/reference/libpath-additional-libpath.md)