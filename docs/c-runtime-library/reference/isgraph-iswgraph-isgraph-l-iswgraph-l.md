---
title: "isgraph, iswgraph, _isgraph_l, _iswgraph_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "isgraph"
  - "iswgraph"
  - "_iswgraph_l"
  - "_isgraph_l"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_isgraph_l"
  - "_iswgraph_l"
  - "_ismbcgraph_l"
  - "Isgraph"
  - "_istgraph_l"
  - "_istgraph"
  - "iswgraph"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_isgraph_l (funzione)"
  - "_ismbcgraph_l (funzione)"
  - "_istgraph (funzione)"
  - "_istgraph_l (funzione)"
  - "_iswgraph_l (funzione)"
  - "isgraph (funzione)"
  - "istgraph (funzione)"
  - "iswgraph (funzione)"
ms.assetid: 531a5f34-4302-4d0a-8a4f-b7ea150ad941
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isgraph, iswgraph, _isgraph_l, _iswgraph_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un integer rappresenta un carattere grafico.  
  
## Sintassi  
  
```  
int isgraph(  
   int c   
);  
int iswgraph(  
   wint_t c   
);  
int _isgraph_l(  
   int c,  
   _locale_t locale  
);  
int _iswgraph_l(  
   wint_t c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere stampabile diverso dallo spazio.  `isgraph` restituisce un valore diverso da zero se `c` è un carattere stampabile diverso da uno spazio.  `iswgraph` restituisce un valore diverso da zero se `c` è un carattere " wide " stampabile diverso da uno spazio a caratteri wide.  Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` usano le impostazioni locali che vengono passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `isgraph` e `_isgraph_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istgraph`|`isgraph`|[\_ismbcgraph](../../c-runtime-library/reference/ismbcgraph-functions.md)|`iswgraph`|  
|`_istgraph_l`|`_isgraph_l`|[\_ismbcgraph\_l](../../c-runtime-library/reference/ismbcgraph-functions.md)|`_iswgraph_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`isgraph`|\<ctype.h\>|  
|`iswgraph`|\<ctype.h\> o \<wchar.h\>|  
|`_isgraph_l`|\<ctype.h\>|  
|`_iswgraph_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)