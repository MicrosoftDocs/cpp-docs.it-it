---
title: "_aligned_free | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_free"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "aligned_free"
  - "_aligned_free"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_free (funzione)"
  - "aligned_free (funzione)"
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _aligned_free
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Libera un blocco di memoria che è stato allocato con [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
## Sintassi  
  
```  
void _aligned_free (  
   void *memblock  
);  
```  
  
#### Parametri  
 `memblock`  
 Un puntatore al blocco di memoria che è stato restituito alla funzione di `_aligned_offset_malloc` o di `_aligned_malloc`.  
  
## Note  
 `_aligned_free` è contrassegnato `__declspec(noalias)`, pertanto si garantisce che la funzione non modifichi variabili globali.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md).  
  
 Questa funzione non convalida il relativo parametro, a differenza delle altre funzioni CRT \_aligned.  Se `memblock` è un puntatore `NULL`, questa funzione semplicemente non esegue azioni.  Non modifica `errno` e non verrà invocato il gestore di parametro non valido.  Se si verifica un errore nella funzione a causa del non utilizzo in precedenza delle funzioni \_aligned per allocare il blocco di memoria o se si verifica un cattivo allineamento della memoria a causa di alcune calamità impreviste, la funzione genera un report di debug da [\_RPT, \_RPTF, \_RPTW, \_RPTFW Macros](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_free`|\<malloc.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)