---
title: "Efficienza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.runtime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "efficienza [CRT]"
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Efficienza
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma  
  
### Funzioni per efficienza del runtime  
  
|Funzione|Uso|Equivalente .NET Framework|  
|--------------|---------|--------------------------------|  
|[\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore `new` non riesce ad allocare la memoria.|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_set\_se\_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 \(eccezioni strutturate C\) come eccezioni tipizzate C\+\+.|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[set\_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[set\_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [SetUnhandledExceptionFilter](http://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)