---
title: I comandi in un Makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: commands, makefiles
ms.assetid: 8085517e-42f4-493b-b8f8-44311fc08c64
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5361012fd388f49d8eb956ec1a4fa1bdd53a2dcc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="commands-in-a-makefile"></a>Comandi di un makefile
Una regola di blocco o inferenza descrizione specifica di un blocco di comandi da eseguire se la dipendenza non è aggiornata. NMAKE ogni comando viene visualizzato prima dell'esecuzione, a meno che non /S, **. Invisibile all'utente**, **! CMDSWITCHES**, o @ utilizzato. Se un blocco di descrizione non è seguito da un blocco di comandi, viene cercata una regola di inferenza corrispondente.  
  
 Un blocco di comandi contiene uno o più comandi, ognuno nella propria riga. Riga non vuota può essere collocato tra la dipendenza o la regola e il blocco di comandi. Tuttavia, può essere visualizzata una riga che contiene solo spazi o tabulazioni. Questa riga viene interpretata come un comando null e si verifica alcun errore. Le righe vuote sono consentite tra righe di comando.  
  
 Una riga di comando inizia con uno o più spazi o tabulazioni. Una barra rovesciata (\) seguita da un carattere di nuova riga viene interpretata come spazio nel comando. utilizzare una barra rovesciata alla fine di una riga per continuare il comando nella riga successiva. Interpretate letteralmente la barra rovesciata se qualsiasi altro carattere, inclusi spazi o tabulazioni, segue la barra rovesciata.  
  
 Un comando preceduto da un punto e virgola (;) può essere visualizzato in una regola di riga o inferenza dipendenza, se un blocco di comandi seguente:  
  
```  
project.obj : project.c project.h ; cl /c project.c  
```  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Modificatori di comandi](../build/command-modifiers.md)  
  
 [Sintassi di nomi file](../build/filename-parts-syntax.md)  
  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)