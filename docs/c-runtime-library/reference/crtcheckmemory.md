---
title: "_CrtCheckMemory | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtCheckMemory"
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
  - "CrtCheckMemory"
  - "_CrtCheckMemory"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CrtCheckMemory (funzione)"
  - "CrtCheckMemory (funzione)"
ms.assetid: 457cc72e-60fd-4177-ab5c-6ae26a420765
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtCheckMemory
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Conferma l'integrità dei blocchi di memoria allocati nell'heap di debug \(solo per versione di debug\).  
  
## Sintassi  
  
```  
  
int _CrtCheckMemory( void );  
```  
  
## Valore restituito  
 Se l'operazione riesce, `_CrtCheckMemory` restituisce TRUE; in caso contrario, la funzione restituisce FALSE.  
  
## Note  
 La funzione `_CrtCheckMemory` convalida la memoria allocata dal gestore dell'heap di debug verificando l'heap di base sottostante e controllando ciascun blocco di memoria.  Se un'incoerenza di memoria o un errore viene rilevata nell'heap di base sottostante, le informazioni sull'intestazione di debug, o nei buffer sovrascritti, `_CrtCheckMemory` genera un report di debug con informazioni che descrivono la condizione di errore.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtCheckMemory` vengono rimosse durante la pre\-elaborazione.  
  
 Il comportamento di `_CrtCheckMemory` può essere controllato definendo i campi di bit di flag [\_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) utilizzando la funzione [\_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md).  Attivando il campo di bit **\_CRTDBG\_CHECK\_ALWAYS\_DF** in `_CrtCheckMemory` risulta che viene chiamato ogniqualvolta viene richiesta un'operazione di allocazione della memoria.  Sebbene questo metodo rallenti l'esecuzione, è utile per individuare gli errori rapidamente.  Disattivando il campo di bit **\_CRTDBG\_ALLOC\_MEM\_DF** fa in modo che `_CrtCheckMemory` non verifichi l'heap e immediatamente restituisce **TRUE**.  
  
 Poiché la funzione restituisce **TRUE** o **FALSE**, può essere passata a una delle macro [\_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug.  L'esempio seguente genera un errore di asserzione se il danneggiamento viene rilevato nell'heap:  
  
```  
_ASSERTE( _CrtCheckMemory( ) );  
```  
  
 Per ulteriori informazioni su come `_CrtCheckMemory` può essere utilizzato da altre funzioni di debug, consultare [Funzioni per la creazione di report sullo stato dello heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions).  Per una panoramica di gestione della memoria e heap di debug, consultare [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtCheckMemory`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per un esempio su come utilizzare `_CrtCheckMemory`, consultare [crt\_dbg1](http://msdn.microsoft.com/it-it/17b4b20c-e849-48f5-8eb5-dca6509cbaf9).  
  
## Equivalente .NET Framework  
 [System::Diagnostics::PerformanceCounter](https://msdn.microsoft.com/en-us/library/system.diagnostics.performancecounter.aspx)  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)   
 [\_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md)