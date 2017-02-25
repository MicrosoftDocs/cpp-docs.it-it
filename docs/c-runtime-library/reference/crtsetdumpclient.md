---
title: "_CrtSetDumpClient | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetDumpClient"
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
  - "_CrtSetDumpClient"
  - "CrtSetDumpClient"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtSetDumpClient (funzione)"
  - "CrtSetDumpClient (funzione)"
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _CrtSetDumpClient
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa una funzione definita dall'applicazione per eseguire il dump dei blocchi di memoria del tipo `_CLIENT_BLOCK` \(solo versione di debug\).  
  
## Sintassi  
  
```  
  
      _CRT_DUMP_CLIENT _CrtSetDumpClient(   
   _CRT_DUMP_CLIENT dumpClient   
);  
```  
  
#### Parametri  
 `dumpClient`  
 Nuova funzione definita dal client del dump della memoria da associare nel processo del dump della memoria di debug CRT.  
  
## Valore restituito  
 Restituisce la funzione definita precedentemente dal client dal dump del blocco.  
  
## Note  
 La funzione `_CrtSetDumpClient` consente all'applicazione di associare la relativa funzione per eseguire il dump degli oggetti memorizzati in blocchi di memoria `_CLIENT_BLOCK` nel processo del dump della memoria di debug CRT.  Pertanto, ogni volta che una funzione di dump di debug come [\_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) o [\_CrtDumpMemoryLeaks](../../c-runtime-library/reference/crtdumpmemoryleaks.md) esegue il dump di un blocco di memoria `_CLIENT_BLOCK`, viene chiamata la funzione di dump dell'applicazione.  `_CrtSetDumpClient` fornisce un'applicazione con un metodo semplice di rilevamento delle perdite di memoria e di convalida o creazione del contenuto dei dati memorizzati in blocchi `_CLIENT_BLOCK`.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetDumpClient` vengono rimosse durante la pre\-elaborazione.  
  
 La funzione di `_CrtSetDumpClient` configura la nuova funzione di dump definita dall'applicazione specificata in `dumpClient` e restituisce la funzione di dump già definita.  Segue un esempio di funzione di dump dei blocchi definita dal client:  
  
```  
void DumpClientFunction( void *userPortion, size_t blockSize );  
```  
  
 L'argomento `userPortion` è un puntatore all'inizio della parte di dati utente del blocco di memoria e `blockSize` specifica le dimensioni del blocco di memoria allocato in byte.  La funzione di dump di blocchi client deve restituire `void`.  Il puntatore alla funzione di dump del client passata a `_CrtSetDumpClient` è del tipo `_CRT_DUMP_CLIENT`, come definito in Crtdbg.h:  
  
```  
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );  
```  
  
 Per ulteriori informazioni sulle funzioni che operano sui blocchi di memoria di `_CLIENT_BLOCK`, consultare [Funzioni hook del blocco client](../Topic/Client%20Block%20Hook%20Functions.md).  La funzione [\_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md) può essere utilizzata per restituire informazioni sui tipi di blocco e i sottotipi.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtSetDumpClient`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md)   
 [\_CrtGetDumpClient](../../c-runtime-library/reference/crtgetdumpclient.md)