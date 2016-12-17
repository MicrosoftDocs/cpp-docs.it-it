---
title: "Costanti signal | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SIGTERM"
  - "SIGFPE"
  - "SIGABRT"
  - "SIGILL"
  - "SIGINT"
  - "SIGSEGV"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "SIGABRT (costante)"
  - "SIGFPE (costante)"
  - "SIGILL (costante)"
  - "SIGINT (costante)"
  - "costanti signal"
  - "SIGSEGV (costante)"
  - "SIGTERM (costante)"
ms.assetid: a3b39281-dae7-4e44-8d68-e6a610c669dd
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti signal
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
#include <signal.h>  
```  
  
## Note  
 L'argomento `sig` deve essere una delle costanti del manifest elencate di seguito \(definito da SIGNAL.H\).  
  
 `SIGABRT`  
 Abnormal termination.  L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIGABRT_COMPAT`  
 Equivale a SIGABRT.  Per la compatibilità con altre piattaforme.  
  
 `SIGFPE`  
 Errore a virgola mobile, come overflow, divisione per zero, o un'operazione non valida.  L'azione predefinita termina il programma chiamante.  
  
 `SIGILL`  
 Istruzione non valida.  L'azione predefinita termina il programma chiamante.  
  
 `SIGINT`  
 Interrupt CTRL\+C.  L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIGSEGV`  
 Accesso alla memoria non valido.  L'azione predefinita termina il programma chiamante.  
  
 `SIGTERM`  
 Richiesta di chiusura inviata al programma.  L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIG_ERR`  
 Un tipo restituito da un segnale indica che si è verificato un errore.  
  
## Vedere anche  
 [signal](../c-runtime-library/reference/signal.md)   
 [raise](../c-runtime-library/reference/raise.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)