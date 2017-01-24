---
title: "Routine di gestione delle eccezioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.exceptions"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gestione eccezioni, routine"
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Routine di gestione delle eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare le funzioni di gestione delle eccezioni C\+\+ per recuperare da eventi imprevisti durante l'esecuzione del programma.  
  
### Funzioni di gestione delle eccezioni  
  
|Funzione|Utilizzo|Equivalente .NET Framework|  
|--------------|--------------|--------------------------------|  
|[\_set\_se\_translator](../c-runtime-library/reference/set-se-translator.md)|Le eccezioni Win32 \(eccezioni strutturate C\) come le eccezioni scritte in C\+\+|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[set\_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installare una routine di terminazione che deve essere chiamata da `terminate`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[set\_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installare una funzione di terminazione che deve essere chiamata da `unexpected`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Chiamata automaticamente in determinate circostanze dopo che è stata generata un'eccezione.  Le chiamate di funzione `abort` di `terminate` o una funzione specificata utilizzando `set_terminate`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[unexpected](../c-runtime-library/reference/unexpected-crt.md)|Chiama `terminate` o una funzione specificata utilizzando `set_unexpected`.  La funzione di `unexpected` non viene utilizzata nell'implementazione corrente di gestione delle eccezioni di Microsoft C\+\+|[\<caps:sentence id\="tgt30" sentenceid\="ec8332f3bf55c7bd183338eca87744ec" class\="tgtSentence"\>Classe System::Exception\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.exception.aspx)|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)