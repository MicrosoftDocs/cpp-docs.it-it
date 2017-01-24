---
title: "Benefits and Tradeoffs of the Method Used to Link to the CRT | Microsoft Docs"
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
  - "_ATL_MIN_CRT (macro)"
ms.assetid: 49b485f7-9487-49e4-b12a-0f710b620e2b
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Benefits and Tradeoffs of the Method Used to Link to the CRT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il progetto può essere collegata in modo dinamico o statico con CRT.  Nella tabella seguente le strutture i vantaggi e i compromessi inclusa nello scegliere il metodo da utilizzare.  
  
|Metodo|Vantaggio|Compensazione|  
|------------|---------------|-------------------|  
|Collegamento statico a CRT<br /><br /> \(**Libreria di runtime** impostato su **Single\-threaded**\)|La DLL CRT non è richiesto nel sistema in cui l'immagine verrà eseguita.|Su 25K del codice di avvio viene aggiunto all'immagine, aumento delle dimensioni.|  
|Il collegamento dinamico a CRT<br /><br /> \(**Libreria di runtime** impostato su **Multithread**\)|L'immagine non richiede il codice di avvio CRT, pertanto è molto più piccola.|La DLL CRT deve essere presente nel sistema che esegue l'immagine.|  
  
 L'argomento [Collegamento a CRT nel progetto ATL](../atl/linking-to-the-crt-in-your-atl-project.md) viene illustrato come selezionare il modo in cui collegarsi a CRT.  
  
## Vedere anche  
 [Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)   
 [Funzionamento della libreria di runtime](../build/run-time-library-behavior.md)   
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)