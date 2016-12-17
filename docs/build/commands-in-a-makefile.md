---
title: "Comandi di un makefile | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi, makefile"
ms.assetid: 8085517e-42f4-493b-b8f8-44311fc08c64
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Comandi di un makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I blocchi di descrizione e le regole di inferenza specificano un blocco di comandi che dovrà essere eseguito se la dipendenza non è aggiornata.  In NMAKE ogni comando viene visualizzato prima della relativa esecuzione, a meno che non sia stato specificato \/S, **.SILENT**, **\!CMDSWITCHES** o @.  Se un blocco di descrizione non è seguito da un blocco di comandi, viene cercata una regola di inferenza corrispondente.  
  
 I blocchi di comandi contengono uno o più comandi, ciascuno su una riga separata.  Non sono consentite righe vuote tra la dipendenza o la regola e il corrispondente blocco di comandi.  È tuttavia possibile visualizzare una riga contenente solo spazi o tabulazioni che verrà interpretata come comando null, senza generare errori.  È consentita la presenza di righe vuote tra le righe dei comandi.  
  
 Una riga di comando inizia con uno o più spazi o tabulazioni.  Una barra rovesciata \(\\\) seguita da un carattere di nuova riga viene interpretata come spazio nel comando. Utilizzare una barra rovesciata alla fine di una riga per continuare il comando nella riga successiva.  In NMAKE la barra rovesciata viene interpretata letteralmente quando è seguita da qualsiasi altro carattere, compresi spazi o tabulazioni.  
  
 Un comando preceduto da un punto e virgola \(;\) può essere visualizzato in una riga di dipendenze o in una regola di inferenza indipendentemente dal fatto che sia seguito da un blocco di comandi.  
  
```  
project.obj : project.c project.h ; cl /c project.c  
```  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Modificatori dei comandi](../build/command-modifiers.md)  
  
 [Sintassi relativa ai nomi file](../build/filename-parts-syntax.md)  
  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)  
  
## Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)