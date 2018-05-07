---
title: Strumenti del linker LNK1181 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1181
dev_langs:
- C++
helpviewer_keywords:
- LNK1181
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 617678e5453acdafaf72875857b0e0f9b84a110a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1181"></a>Errore degli strumenti del linker LNK1181
Impossibile aprire il file di input 'nomefile'  
  
 Il linker non è stato possibile trovare `filename` perché non esiste o il percorso non è stato trovato.  
  
 Alcune cause comuni dell'errore LNK1181 includono:  
  
-   `filename` viene fatto riferimento come dipendenza aggiuntiva nella riga del linker, ma il file non esiste.  
  
-   Oggetto **/LIBPATH** istruzione che specifica la directory contenente `filename` mancante.  
  
 Per risolvere questi problemi, verificare i file a cui fa riferimento nella riga del linker sono presenti nel sistema.  Assicurarsi inoltre che vi sia un **/LIBPATH** istruzione per ogni directory contenente un file dipendente dal linker.  
  
 Un'altra possibile causa LNK1181 è un nome di file lungo con spazi incorporati non è stato racchiuso tra virgolette.  In tal caso, il linker riconosce solo un nome di file fino al primo spazio e quindi si presuppone l'estensione. obj.  La soluzione al problema consiste nel racchiudere il nome di file lunghi (nome file + percorso) tra virgolette.  
  
 Per ulteriori informazioni, vedere [file LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md).  
  
## <a name="see-also"></a>Vedere anche  
 [/LIBPATH (percorso LIB aggiuntivo)](../../build/reference/libpath-additional-libpath.md)