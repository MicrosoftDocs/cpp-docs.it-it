---
title: "___lc_collate_cp_func | Microsoft Docs"
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
  - "___lc_collate_cp_func"
apilocation: 
  - "msvcr120.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___lc_collate_cp_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___lc_collate_cp_func"
ms.assetid: 46ccc084-7ac9-4e5d-9138-e12cb5845615
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ___lc_collate_cp_func
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Recupera l'attuale tabella codici delle regole di confronto del thread.  
  
## Sintassi  
  
```cpp  
UINT ___lc_codepage_func(void);  
```  
  
## Valore restituito  
 Attuale tabella codici delle regole di confronto del thread.  
  
## Note  
 `___lc_collate_cp_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale tabella codici delle regole di confronto dall'archiviazione locale di thread per i dati di CRT.  Queste informazioni sono disponibili anche usando la funzione [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md).  
  
 Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio.  Se ne sconsiglia l'uso nel codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`___lc_collate_cp_func`|crt\\src\\setlocal.h|  
  
## Vedere anche  
 [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_create\_locale, \_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../c-runtime-library/reference/free-locale.md)