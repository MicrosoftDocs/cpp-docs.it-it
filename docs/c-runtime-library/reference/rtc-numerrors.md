---
title: "_RTC_NumErrors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_NumErrors"
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
  - "_RTC_NumErrors"
  - "RTC_NumErrors"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "errori di runtime"
  - "_RTC_NumErrors (funzione)"
  - "RTC_NumErrors (funzione)"
ms.assetid: 7e82adae-38e2-4f8b-bc0b-37bda8109fd1
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _RTC_NumErrors
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime \(RTC\). È possibile utilizzare questo numero come controllo in un ciclo **for**, in cui ogni valore del ciclo viene passato a [\_RTC\_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md).  
  
## Sintassi  
  
```  
  
int _RTC_NumErrors( void );  
  
```  
  
## Valore restituito  
 Un Integer il cui valore rappresenta il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime di Visual C\+\+.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_RTC_NumErrors`|\<rtcapi.h\>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_RTC\_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)