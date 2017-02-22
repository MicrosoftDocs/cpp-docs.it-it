---
title: "___setlc_active_func, ___unguarded_readlc_active_add_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "___setlc_active_func"
  - "___unguarded_readlc_active_add_func"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___unguarded_readlc_active_add_func"
  - "___setlc_active_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___setlc_active_func"
  - "___unguarded_readlc_active_add_func"
ms.assetid: 605ec4e3-81e5-4ece-935a-f434768cc702
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# ___setlc_active_func, ___unguarded_readlc_active_add_func
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

OBSOLETE.  CRT esporta queste funzioni interne esclusivamente per mantenere la compatibilità binaria.  
  
## Sintassi  
  
```cpp  
int ___setlc_active_func(void); int * ___unguarded_readlc_active_add_func(void);  
```  
  
## Valore restituito  
 Il valore restituito non è rilevante.  
  
## Note  
 Sebbene le funzioni CRT interne `___setlc_active_func` e `___unguarded_readlc_active_add_func` siano obsolete e non vengano più usate, vengono esportate dalla libreria CRT per mantenere la compatibilità binaria.  Lo scopo originale di `___setlc_active_func` è quello di restituire il numero di chiamate alla funzione `setlocale` attualmente attive.  Lo scopo originale di `___unguarded_readlc_active_add_func` è quello di restituire il numero di funzioni che fanno riferimento alle impostazioni locali senza bloccarle.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`___setlc_active_func`, `___unguarded_readlc_active_add_func`|nessuna|  
  
## Vedere anche  
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)