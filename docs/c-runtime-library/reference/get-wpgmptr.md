---
title: "_get_wpgmptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_wpgmptr"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "get_wpgmptr"
  - "_get_wpgmptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_get_wpgmptr (funzione)"
  - "_wpgmptr (variabile globale)"
  - "get_wpgmptr (funzione)"
  - "wpgmptr (variabile globale)"
ms.assetid: a77cdd13-2303-4b7c-9a60-8debdbef2011
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# _get_wpgmptr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il valore corrente della variabile globale `_wpgmptr`.  
  
## Sintassi  
  
```  
errno_t _get_wpgmptr(     wchar_t **pValue  );  
```  
  
#### Parametri  
 \[out\] `pValue`  
 Puntatore a una stringa in cui inserire il valore corrente della variabile `_wpgmptr`.  
  
## Valore restituito  
 Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo.  Se `pValue` è `NULL`, verrà richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce `EINVAL`.  
  
## Note  
 La variabile globale `_wpgmptr` contiene il percorso completo del file eseguibile associato al processo come stringa di caratteri wide.  Per altre informazioni, vedere [\_pgmptr, \_wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_wpgmptr`|\<stdlib.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_get\_pgmptr](../../c-runtime-library/reference/get-pgmptr.md)