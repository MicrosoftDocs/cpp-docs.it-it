---
title: "Impossibile ottenere un flusso per il log | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrApplicationLog_ExhaustedPossibleStreamNames"
ms.assetid: 33994f52-8efb-4790-a459-033e5c1db632
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile ottenere un flusso per il log
Impossibile ottenere un flusso per il log. I possibili nome file basati su \<nome\> sono già in uso.  
  
 La classe <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener> non può creare un nuovo file di log, perché tutti i nomi potenziali dei file di log basati su \<nome\> sono già in uso.  
  
 L'esistenza di un numero eccessivo di file di log può indicare un problema architetturale dell'applicazione. Per altre informazioni, vedere la documentazione per la classe <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener>.  
  
### Per correggere l'errore  
  
1.  Impostare la proprietà <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.LogFileCreationSchedule%2A> su <xref:Microsoft.VisualBasic.Logging.LogFileCreationScheduleOption> o <xref:Microsoft.VisualBasic.Logging.LogFileCreationScheduleOption> per includere nel nome del file di log un indicatore di data.  
  
2.  Archiviare i log esistenti e rimuoverli dal computer per consentire all'oggetto <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener> di creare nuovi log.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener>   
 <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.LogFileCreationSchedule%2A>   
 [Oggetto My.Application.Log](../Topic/My.Application.Log%20Object.md)   
 [My.Log Object](../Topic/My.Log%20Object.md)