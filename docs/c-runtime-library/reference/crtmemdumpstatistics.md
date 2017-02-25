---
title: "_CrtMemDumpStatistics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtMemDumpStatistics"
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
  - "CrtMemDumpStatistics"
  - "_CrtMemDumpStatistics"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtMemDumpStatistics (funzione)"
  - "CrtMemDumpStatistics (funzione)"
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _CrtMemDumpStatistics
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue il dump delle informazioni di intestazione di debug per uno stato dell'heap specificato in un form leggibile dall'utente \(solo versione di debug\).  
  
## Sintassi  
  
```  
void _CrtMemDumpStatistics(   
   const _CrtMemState *state   
);  
```  
  
#### Parametri  
 `state`  
 Puntatore allo stato dell'heap per eseguire il dump.  
  
## Note  
 La funzione `_CrtMemDumpStatistics` esegue il dump delle informazioni di intestazione di debug per uno stato dell'heap specificato in un form leggibile dall'utente. Le statistiche di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Lo stato della memoria può contenere uno stato dell'heap specifico o la differenza tra i due stati. Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemDumpStatistics` vengono rimosse durante la pre\-elaborazione.  
  
 Il parametro `state` deve essere un puntatore a una struttura `_CrtMemState` che è stata compilata da [\_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) o restituita da [\_CrtMemDifference](../../c-runtime-library/reference/crtmemdifference.md) prima di chiamare `_CrtMemDumpStatistics`. Se `state` è `NULL`, verrà richiamato il gestore di parametri non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e non viene eseguita alcuna azione. Per altre informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState`, vedere [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_CrtMemDumpStatistics`|\<crtdbg.h\>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** solo versioni di debug di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 <xref:System.Diagnostics.PerformanceCounter?displayProperty=fullName>  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)