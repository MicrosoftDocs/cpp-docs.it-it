---
title: "_CrtDumpMemoryLeaks | Microsoft Docs"
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
  - "_CrtDumpMemoryLeaks"
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
  - "CRTDBG_LEAK_CHECK_DF"
  - "CRTDBG_CHECK_CRT_DF"
  - "_CRTDBG_LEAK_CHECK_DF"
  - "CrtDumpMemoryLeaks"
  - "_CrtDumpMemoryLeaks"
  - "_CRTDBG_CHECK_CRT_DF"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtDumpMemoryLeaks (funzione)"
  - "CRTDBG_LEAK_CHECK_DF (macro)"
  - "_CRTDBG_LEAK_CHECK_DF (macro)"
  - "_CrtDumpMemoryLeaks (funzione)"
  - "CRTDBG_CHECK_CRT_DF (macro)"
  - "_CRTDBG_CHECK_CRT_DF (macro)"
ms.assetid: 71b2eab4-7f55-44e8-a55a-bfea4f32d34c
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtDumpMemoryLeaks
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue il dump di tutti i blocchi di memoria nell'heap di debug quando si è verificata una perdita di memoria \(solo versione di debug\).  
  
## Sintassi  
  
```  
  
int _CrtDumpMemoryLeaks( void );  
```  
  
## Valore restituito  
 `_CrtDumpMemoryLeaks` restituisce TRUE se viene rilevata una perdita di memoria.  In caso contrario, la funzione restituirà FALSE.  
  
## Note  
 La funzione `_CrtDumpMemoryLeaks` determina se si è verificata una perdita di memoria dall'esecuzione del programma.  Quando viene trovata una perdita, le informazioni di intestazione di debug per tutti gli oggetti nell'heap vengono fornite in formato leggibile dall'utente.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtDumpMemoryLeaks` vengono rimosse durante la pre\-elaborazione.  
  
 `_CrtDumpMemoryLeaks` viene spesso chiamato alla fine dell'esecuzione del programma per verificare che la memoria allocata dall'applicazione sia stata liberata.  La funzione può essere chiamata automaticamente alla chiusura del programma attivando il campo di bit `_CRTDBG_LEAK_CHECK_DF` del flag [\_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) utilizzando la funzione [\_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md).  
  
 `_CrtDumpMemoryLeaks` chiama [\_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) per ottenere lo stato corrente dell'heap e quindi analizza lo stato dei blocchi che non sono stati liberati.  Quando un blocco unfreed viene rilevato, `_CrtDumpMemoryLeaks` chiama [\_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) per eseguire il dump delle informazioni per tutti gli oggetti allocati nell'inizio dell'esecuzione del programma.  
  
 Per impostazione predefinita, i blocchi interni di runtime C \(`_CRT_BLOCK`\) non sono inclusi nelle operazioni di dump della memoria.  La funzione [\_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) può essere utilizzata per attivare il bit `_CRTDBG_CHECK_CRT_DF` `_crtDbgFlag` per includere questi blocchi nel processo di rilevamento di perdite.  
  
 Per ulteriori informazioni sulle funzioni di stato dell'heap e la struttura `_CrtMemState`, consultare [Funzioni per la creazione di report sullo stato dello heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions).  Per informazioni su come i blocchi di memoria vengono allocati, inizializzati e gestiti nella versione di debug dell'heap di base, consultare [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtDumpMemoryLeaks`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per un esempio su come utilizzare `_CrtDumpMemoryLeaks`, consultare [crt\_dbg1](http://msdn.microsoft.com/it-it/17b4b20c-e849-48f5-8eb5-dca6509cbaf9).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)