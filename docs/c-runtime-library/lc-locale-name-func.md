---
title: "___lc_locale_name_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "___lc_locale_name_func"
apilocation: 
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___lc_locale_name_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___lc_locale_name_func"
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# ___lc_locale_name_func
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Recupera l'attuale nome delle impostazioni locali del thread.  
  
## Sintassi  
  
```cpp  
wchar_t** ___lc_locale_name_func(void);  
```  
  
## Valore restituito  
 Puntatore a una stringa che contiene l'attuale nome delle impostazioni locali del thread.  
  
## Note  
 `___lc_locale_name_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale nome delle impostazioni locali dall'archiviazione locale di thread per i dati CRT.  Queste informazioni sono disponibili anche usando la funzione [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md) o le funzioni [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio.  Se ne sconsiglia l'uso nel codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`___lc_locale_name_func`|crt\\src\\setlocal.h|  
  
## Vedere anche  
 [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_create\_locale, \_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../c-runtime-library/reference/free-locale.md)