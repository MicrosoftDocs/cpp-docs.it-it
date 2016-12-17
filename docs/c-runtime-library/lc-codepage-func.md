---
title: "___lc_codepage_func | Microsoft Docs"
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
  - "___lc_codepage_func"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "lc_codepage_func"
  - "___lc_codepage_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___lc_codepage_func"
ms.assetid: 6a663bd0-5a63-4a2f-9507-872ec1582aae
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ___lc_codepage_func
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Recupera la pagina del codice corrente del thread.  
  
## Sintassi  
  
```cpp  
UINT ___lc_codepage_func(void);  
```  
  
## Valore restituito  
 Pagina del codice corrente del thread.  
  
## Note  
 `___lc_codepage_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere la tabella codici corrente delle regole di confronto dall'archiviazione locale del thread per i dati di CRT.  Queste informazioni sono disponibili anche usando la funzione [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md).  
  
 Una *tabella codici* è un mapping di codici a un byte o a byte doppio a singoli caratteri.  Diverse tabelle codici contengono caratteri speciali differenti, in genere personalizzati per un linguaggio o per un gruppo di linguaggi.  Per altre informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md).  
  
 Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio.  Se ne sconsiglia l'uso nel codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`___lc_codepage_func`|crt\\src\\setlocal.h|  
  
## Vedere anche  
 [\_get\_current\_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_create\_locale, \_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../c-runtime-library/reference/free-locale.md)