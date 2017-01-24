---
title: "Gestione degli errori (CRT) | Microsoft Docs"
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
  - "c.errors"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gestione errori, routine di C per"
  - "gestione errori, routine della libreria"
  - "errori di logica"
  - "test, errori di programma"
ms.assetid: 125ac697-9eb0-4152-a440-b7842f23d97f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Gestione degli errori (CRT)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare queste routine per gestire gli errori del programma.  
  
### Gestione degli errori delle routine  
  
|Routine|Utilizzo|Equivalente .NET Framework|  
|-------------|--------------|--------------------------------|  
|[assert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro|Test per gli errori logici di programmazione; disponibile sia nelle versioni release che nelle versioni di debug della libreria di runtime|[\<caps:sentence id\="tgt8" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[\_ASSERT, \_ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro|Simile a `assert`, ma è disponibile solo nelle versioni di debug della libreria di runtime|[\<caps:sentence id\="tgt11" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[clearerr](../c-runtime-library/reference/clearerr.md)|Reimposta l'indicatore di errore.  Anche la chiamata di `rewind` o la chiusura di un flusso reimposta l'indicatore di errore.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_eof](../c-runtime-library/reference/eof.md)|Controllo di EOF a basso livello|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[feof](../c-runtime-library/reference/feof.md)|Test per EOF.  L'EOF viene anche visualizzato quando `_read` restituisce 0.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[ferror](../c-runtime-library/reference/ferror.md)|Test per gli errori di I\/O del flusso|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_RPT, \_RPTF](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) macro|Generare un rapporto simile a `printf`, ma è disponibile solo nelle versioni di debug della libreria di runtime|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_set\_error\_mode](../c-runtime-library/reference/set-error-mode.md)|Modificare `__error_mode` per determinare una posizione non predefinita in cui il runtime C visualizza un messaggio di errore per un errore che probabilmente terminerà il programma.||  
|[\_set\_purecall\_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)|Impostare il gestore per una chiamata di funzione virtuale pura.||  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)