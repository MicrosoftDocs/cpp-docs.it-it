---
title: "_free_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_free_dbg"
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
  - "_free_dbg"
  - "free_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi di memoria, deallocazione"
  - "liberazione di memoria"
  - "_free_dbg (funzione)"
  - "free_dbg (funzione)"
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _free_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Libera un blocco di memoria nell'heap \(solo per versione di debug\).  
  
## Sintassi  
  
```  
void _free_dbg(   
   void *userData,  
   int blockType   
);  
```  
  
#### Parametri  
 `userData`  
 Puntatore al blocco di memoria allocata da liberare.  
  
 `blockType`  
 Tipo di blocco di memoria allocata da liberare: `_CLIENT_BLOCK`, `_NORMAL_BLOCK`, o `_IGNORE_BLOCK`.  
  
## Note  
 La funzione `_free_dbg` è una versione di debug della funzione [free](../../c-runtime-library/reference/free.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_free_dbg` viene ridotta ad una chiamata a `free`.  Sia `free` che `_free_dbg` liberano un blocco di memoria nell'heap di base, ma `_free_dbg` fornisce due funzionalità di debug: la possibilità di mantenere liberi i blocchi nell'elenco collegato nell'heap per simulare condizioni di memoria insufficiente e un parametro di tipo di un blocco per liberare tipi di locazioni specifiche.  
  
 `_free_dbg` esegue un controllo di validità su tutti i file e i percorsi specificati di un blocco prima di eseguire l'operazione free.  Non è previsto che l'applicazione fornisca queste informazioni.  Quando si libera un blocco di memoria, l'heap di debug controlla automaticamente l'integrità dei buffer presenti da entrambi i lati dell'area allocata e genera un messaggio di errore se si è verificata una sovrascrittura.  Se viene impostato il campo di bit `_CRTDBG_DELAY_FREE_MEM_DF` del flag [\_crtDbgFlag](../../c-runtime-library/crtdbgflag.md), il blocco liberato viene riempito con un valore 0xDD, viene assegnato il tipo di blocco `_FREE_BLOCK` e viene mantenuto nell'elenco collegato dell'heap dei blocchi di memoria.  
  
 Se si verifica un errore nella liberazione della memoria, `errno` viene fornito con informazioni dal sistema operativo sulla natura dell'errore.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_free_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Per un esempio su come utilizzare `_free_dbg`, consultare [crt\_dbg2](http://msdn.microsoft.com/it-it/21e1346a-6a17-4f57-b275-c76813089167).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)