---
title: "unexpected (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "unexpected"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "unexpected"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "funzione non prevista"
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# unexpected (CRT)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama `terminate` o una funzione specificata utilizzando `set_unexpected`.  
  
## Sintassi  
  
```  
void unexpected( void );  
```  
  
## Note  
 La routine di `unexpected` non viene utilizzata nell'implementazione corrente della gestione delle eccezioni di C\+\+.  `unexpected` chiama `terminate` per impostazione predefinita.  È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando `set_unexpected` con il nome della funzione come argomento.  `unexpected` chiama l'ultima funzione fornita come argomento di `set_unexpected`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`unexpected`|\<eh.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 [Classe System::Exception](https://msdn.microsoft.com/en-us/library/system.exception.aspx)  
  
## Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [\_set\_se\_translator](../../c-runtime-library/reference/set-se-translator.md)   
 [set\_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [set\_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)