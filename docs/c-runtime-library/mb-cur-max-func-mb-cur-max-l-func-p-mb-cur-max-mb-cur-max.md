---
title: "___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max | Microsoft Docs"
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
  - "___mb_cur_max_l_func"
  - "__p___mb_cur_max"
  - "___mb_cur_max_func"
  - "__mb_cur_max"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___mb_cur_max_func"
  - "___mb_cur_max_l_func"
  - "__p___mb_cur_max"
  - "__mb_cur_max"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___mb_cur_max_func"
  - "___mb_cur_max_l_func"
  - "__mb_cur_max"
  - "__p___mb_cur_max"
ms.assetid: 60d36108-1ca7-45a6-8ce7-68a91f13e3a1
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Recupera il numero massimo di byte in un carattere multibyte per le impostazioni locali attuali o specificate.  
  
## Sintassi  
  
```cpp  
int ___mb_cur_max_func(void); int ___mb_cur_max_l_func(_locale_t locale); int * __p___mb_cur_max(void); #define __mb_cur_max (___mb_cur_max_func())  
```  
  
#### Parametri  
 locale  
 Struttura di impostazioni locali da cui recuperare il risultato.  Se il valore è null, verranno usate le impostazioni locali del thread attuale.  
  
## Valore restituito  
 Numero massimo di byte in un carattere multibyte per le impostazioni locali del thread attuale o per quelle specificate.  
  
## Note  
 Si tratta di una funzione interna usata da CRT per recuperare il valore attuale della macro [MB\_CUR\_MAX](../c-runtime-library/mb-cur-max.md) dall'archiviazione locale di thread.  Per la portabilità, è consigliabile usare la macro `MB_CUR_MAX` nel codice.  
  
 La macro `__mb_cur_max` rappresenta un metodo conveniente per chiamare la funzione `___mb_cur_max_func()`.  La funzione `__p___mb_cur_max` viene definita per compatibilità con Visual C\+\+ 5.0 e versioni precedenti.  
  
 Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio.  Se ne sconsiglia l'uso nel codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`|\<ctype.h\>, \<stdlib.h\>|  
  
## Vedere anche  
 [MB\_CUR\_MAX](../c-runtime-library/mb-cur-max.md)