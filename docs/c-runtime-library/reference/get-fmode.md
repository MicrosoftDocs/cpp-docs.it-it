---
title: "_get_fmode | Microsoft Docs"
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
  - "_get_fmode"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "get_fmode"
  - "_get_fmode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_fmode (funzione)"
  - "conversione di file [C++], modalità predefinita"
  - "get_fmode (funzione)"
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_fmode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la modalità di traduzione di file predefinita per le operazioni di I\/O dei file.  
  
## Sintassi  
  
```  
errno_t _get_fmode(   
   int * pmode   
);  
```  
  
#### Parametri  
 \[out\] `pmode`  
 Un puntatore a un integer da riempire in modalità predefinita corrente: `_O_TEXT` o `_O_BINARY`.  
  
## Valore restituito  
 Restituisce zero se ha esito positivo; un codice di errore in caso di fallimento.  Se `pmode` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `EINVAL`.  
  
## Note  
 La funzione ottiene il valore della variabile globale [\_fmode](../../c-runtime-library/fmode.md).  Questa variabile specifica la modalità di traduzione per le operazioni di I\/O sia a basso livello, sia per i flussi da file, ad esempio `_open`, `_pipe`, `fopen` e `freopen`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_get_fmode`|\<stdlib.h\>|\<fcntl.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio in [\_set\_fmode](../../c-runtime-library/reference/set-fmode.md).  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_fmode](../../c-runtime-library/fmode.md)   
 [\_set\_fmode](../../c-runtime-library/reference/set-fmode.md)   
 [\_setmode](../../c-runtime-library/reference/setmode.md)   
 [I\/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md)