---
title: "Costanti azione signal | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SIG_IGN"
  - "SIG_DFL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SIG_DFL (costante)"
  - "SIG_IGN (costante)"
  - "costanti azione signal"
ms.assetid: c3cb4f15-d39e-4d9d-84f9-0d33e3eb5993
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Costanti azione signal
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tutte le azioni eseguite quando il segnale di interruzione viene ricevuto dipendono dal valore di `func`.  
  
## Sintassi  
  
```  
#include <signal.h>  
```  
  
## Note  
 L'argomento di `func` deve essere un indirizzo funzione o una delle costanti manifesto elencate di seguito e definite in SIGNAL.H.  
  
 `SIG_DFL`  
 Utilizza la risposta del sistema predefinita.  Se la chiamata del programma utilizza i flussi di I\/O, i buffer creati dalla libreria di runtime non vengono scaricati.  
  
 `SIG_IGN`  
 Ignora il segnale di interruzione.  Questo valore non deve mai essere fornito per `SIGFPE`, visto che lo stato a virgola mobile del processo è definito.  
  
 `SIG_SGE`  
 Indica che si è verificato un errore nel segnale.  
  
 `SIG_ACK`  
 Indica che un segnale di riconoscimento è stato ricevuto.  
  
 `SIG_ERR`  
 Un tipo restituito da un segnale indica che si è verificato un errore.  
  
## Vedere anche  
 [signal](../c-runtime-library/reference/signal.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)