---
title: "_get_pgmptr | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_pgmptr"
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
  - "get_pgmptr"
  - "_get_pgmptr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_pgmptr (funzione)"
  - "_pgmptr (variabile globale)"
  - "get_pgmptr (funzione)"
  - "pgmptr (variabile globale)"
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_pgmptr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il valore corrente della variabile globale `_pgmptr`.  
  
## Sintassi  
  
```  
errno_t _get_pgmptr(   
   char **pValue   
);  
```  
  
#### Parametri  
 \[out\] `pValue`  
 Un puntatore a una stringa da riempire con il valore corrente della variabile `_pgmptr`.  
  
## Valore restituito  
 Restituisce zero se ha esito positivo; un codice di errore in caso di fallimento.  Se `pValue` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `EINVAL`.  
  
## Note  
 La variabile globale `_pgmptr`contiene il percorso completo del file eseguibile associato al processo.  Per ulteriori informazioni, vedere [\_pgmptr, \_wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_pgmptr`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_get\_wpgmptr](../../c-runtime-library/reference/get-wpgmptr.md)