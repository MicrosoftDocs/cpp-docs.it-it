---
title: "Errore degli strumenti del linker LNK1181 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1181"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1181"
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore degli strumenti del linker LNK1181
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile aprire il file di input 'nomefile'  
  
 Il linker non ha trovato `filename` perché non esiste o non è stato trovato il percorso.  
  
 Alcune cause comuni dell'errore LNK1181 includono:  
  
-   Viene fatto riferimento a `filename` come dipendenza aggiuntiva nella riga di comando del linker, ma il file non esiste.  
  
-   Manca un'istruzione **\/LIBPATH** che specifica la directory contenente `filename`.  
  
 Per risolvere questi problemi, assicurarsi che i file a cui viene fatto riferimento nella riga di comando del linker siano presenti nel sistema.  Assicurarsi inoltre che ci sia un'istruzione **\/LIBPATH** per ogni directory contenente un file che dipende dal linker.  
  
 L'errore LNK1181 può inoltre essere restituito quando un nome esteso con spazi incorporati non è stato racchiuso tra virgolette.  In tal caso, il linker riconoscerà come nome file solo la stringa precedente il primo spazio, quindi presupporrà un'estensione file obj.  Per risolvere il problema sarà sufficiente racchiudere tra virgolette il nome file esteso \(percorso più nome file\).  
  
 Per ulteriori informazioni, vedere [File lib come input del linker](../../build/reference/dot-lib-files-as-linker-input.md).  
  
## Vedere anche  
 [\/LIBPATH \(Percorso LIB aggiuntivo\)](../../build/reference/libpath-additional-libpath.md)