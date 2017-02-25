---
title: "_CrtDbgBreak | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtDbgBreak"
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
  - "_CrtDbgBreak"
  - "CrtDbgBreak"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtDbgBreak (funzione)"
  - "CrtDbgBreak (funzione)"
ms.assetid: 01f8b4a2-a2c7-4e1f-9f39-e573b4a7871f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _CrtDbgBreak
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta un punto di interruzione su una specifica riga di codice. \(Usato solo in modalità di debug\)  
  
## Sintassi  
  
```  
void _CrtDbgBreak( void );  
```  
  
## Valore restituito  
 Nessun valore di ritorno.  
  
## Note  
 La funzione `_CrtDbgBreak` imposta un punto di interruzione di debug sulla riga di codice specifica in cui risiede la funzione.  Questa funzione viene utilizzata solo in modalità di debug e dipende dal fatto che `_DEBUG` sia già stata definita precedentemente.  
  
 Per ulteriori informazioni sull'utilizzo di altre funzioni runtime con capacità di effettuare l'hook e sulla scrittura delle proprie funzioni hook definite dal client, vedere [Scrittura delle proprie funzioni hook di debug](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtDbgBreak`|\<CRTDBG.h\>|  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_\_debugbreak](../../intrinsics/debugbreak.md)