---
title: "_CrtMemDumpAllObjectsSince | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtMemDumpAllObjectsSince"
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
  - "CrtMemDumpAllObjectsSince"
  - "_CrtMemDumpAllObjectsSince"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtMemDumpAllObjectsSince (funzione)"
  - "CrtMemDumpAllObjectsSince (funzione)"
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _CrtMemDumpAllObjectsSince
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scarica le informazioni degli oggetti nell'heap dall'inizio dell'esecuzione del programma o da uno stato dell'heap specifico \(solo per versione di debug\).  
  
## Sintassi  
  
```  
  
      void _CrtMemDumpAllObjectsSince(   
   const _CrtMemState *state   
);  
```  
  
#### Parametri  
 `state`  
 Puntatore allo stato dell'heap dal quale iniziare il processo di dump della memoria oppure **NULL**.  
  
## Note  
 La funzione `_CrtMemDumpAllObjectsSince` esegue il dump delle informazioni di intestazione di debug degli oggetti allocati nell'heap in formato leggibile dall'utente.  Le informazioni di dump possono essere utilizzate dall'applicazione per tenere traccia delle allocazioni e rilevare problemi di memoria.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemDumpAllObjectsSince` vengono rimosse durante la pre\-elaborazione.  
  
 `_CrtMemDumpAllObjectsSince` utilizza il valore del parametro `state` per determinare dove avviare l'operazione di dump.  Per iniziare ad eseguire il dump dello stato dell'heap specificato, il parametro `state` deve essere un puntatore a una struttura **\_CrtMemState** compilata da [\_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) prima che venga chiamato il metodo `_CrtMemDumpAllObjectsSince`.  Quando `state` è **NULL**, la funzione avvia il dump dall'esecuzione del programma.  
  
 Se l'applicazione ha installato una funzione hook di debug chiamando [\_CrtSetDumpClient](../../c-runtime-library/reference/crtsetdumpclient.md), allora per ogni volta che `_CrtMemDumpAllObjectsSince` esegue il dump delle informazioni su un tipo di blocco `_CLIENT_BLOCK`, chiama anche la funzione di dump dell'applicazione fornita.  Per impostazione predefinita, i blocchi interni di runtime C \(`_CRT_BLOCK`\) non sono inclusi nelle operazioni di dump della memoria.  La funzione [\_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) può essere utilizzata per attivare il bit `_CRTDBG_CHECK_CRT_DF` **\_crtDbgFlag** per includere questi blocchi.  Inoltre, i blocchi liberati contrassegnati come liberati o ignorati \(**\_FREE\_BLOCK**, **\_IGNORE\_BLOCK**\) non vengono inclusi nel dump della memoria.  
  
 Per ulteriori informazioni sulle funzioni di stato dell'heap e la struttura `_CrtMemState`, consultare [Funzioni per la creazione di report sullo stato dello heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions).  Per informazioni su come i blocchi di memoria vengono allocati, inizializzati e gestiti nella versione di debug dell'heap di base, consultare [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**\_CrtMemDumpAll\-ObjectsSince**|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per un esempio su come utilizzare `_CrtMemDumpAllObjectsSince`, consultare [crt\_dbg2](http://msdn.microsoft.com/it-it/21e1346a-6a17-4f57-b275-c76813089167).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)