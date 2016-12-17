---
title: "_get_osfhandle | Microsoft Docs"
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
  - "_get_osfhandle"
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
  - "get_osfhandle"
  - "_get_osfhandle"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "sistemi operativi, recupero di handle di file"
  - "get_osfhandle (funzione)"
  - "_get_osfhandle (funzione)"
  - "handle di file [C++], sistema operativo"
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_osfhandle
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera l'handle di file del sistema operativo associato al descrittore del file specificato.  
  
## Sintassi  
  
```  
intptr_t _get_osfhandle(   
   int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Un descrittore di file esistente.  
  
## Valore restituito  
 Un handle di file del sistema operativo se `fd` è valido.  In caso contrario, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `INVALID_HANDLE_VALUE` \(–1\) e imposta `errno` a `EBADF`, indicando un handle di file non valido.  
  
## Note  
 Per chiudere un file aperto con `_get_osfhandle`, chiamare `_close`.  Anche l'handle sottostante viene chiuso da una chiamata a `_close`, pertanto non è necessario chiamare la funzione Win32 `CloseHandle` sugli handle originali.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_osfhandle`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di PInvoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_dup, \_dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)