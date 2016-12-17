---
title: "_lock | Microsoft Docs"
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
  - "_lock"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr120_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "lock"
  - "_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lock (funzione)"
  - "_lock (funzione)"
ms.assetid: 29f77c37-30de-4b3d-91b6-030216e645a6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Acquisisce un blocco multithread.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## Sintassi  
  
```  
void __cdecl _lock  
   int locknum  
);  
```  
  
#### Parametri  
 \[in\] `locknum`  
 L'identificatore del blocco da acquisire.  
  
## Note  
 Se il blocco è già stato acquisito, questo metodo acquisisce comunque il blocco e causa un errore interno di runtime C \(CRT\). Se il metodo non può acquisire un blocco, termina con un errore irreversibile e imposta il codice di errore su `_RT_LOCK`.  
  
## Requisiti  
 **Origine:** mlock.c  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [\_unlock](../c-runtime-library/unlock.md)