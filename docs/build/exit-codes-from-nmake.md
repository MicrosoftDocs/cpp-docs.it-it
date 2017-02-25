---
title: "Codici di uscita di NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codici di uscita"
  - "NMAKE (programma), codici di uscita"
ms.assetid: 75f6913c-1da5-4572-a2d3-8a4e058bed15
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Codici di uscita di NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito sono riportati i codici di uscita restituiti da NMAKE:  
  
|Codice|Significato|  
|------------|-----------------|  
|0|Nessun errore \(eventualmente un avviso\)|  
|1|Compilazione non completa \(emesso solo se è stata specificata l'opzione \/K\)|  
|2|Errore di programma, probabilmente dovuto a una delle cause seguenti:|  
||-   Errore di sintassi nel makefile|  
||-   Codice di errore o di uscita di un comando|  
||-   Interruzione da parte dell'utente|  
|4|Errore di sistema, memoria insufficiente|  
|255|Destinazione non aggiornata \(emesso solo se è stata specificata l'opzione \/Q\)|  
  
## Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)