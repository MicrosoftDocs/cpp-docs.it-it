---
title: "ispunct, iswpunct, _ispunct_l, _iswpunct_l | Microsoft Docs"
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
  - "ispunct"
  - "_iswpunct_l"
  - "iswpunct"
  - "_ispunct_l"
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
  - "iswpunct"
  - "_istpunct"
  - "ispunct"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ispunct_l (funzione)"
  - "_istpunct (funzione)"
  - "_iswpunct_l (funzione)"
  - "ispunct (funzione)"
  - "ispunct_l (funzione)"
  - "istpunct (funzione)"
  - "iswpunct (funzione)"
  - "iswpunct_l (funzione)"
ms.assetid: 94403240-85c8-40a4-9c2b-e3e95c729c76
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ispunct, iswpunct, _ispunct_l, _iswpunct_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un intero rappresenta un carattere di punteggiatura.  
  
## Sintassi  
  
```  
int ispunct(  
   int c   
);  
int iswpunct(  
   wint_t c   
);  
int _ispunct_l(  
   int c,  
   _locale_t locale  
);  
int _iswpunct_l(  
   wint_t c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere di punteggiatura.  `ispunct` restituisce un valore diverso da zero per qualsiasi carattere stampabile che non sia uno spazio o un carattere per il quale `isalnum` sia diverso da zero.  `iswpunct` restituisce un valore diverso da zero per qualsiasi carattere "wide" stampabile che non sia il carattere spazio di tipo "wide" o un carattere wide per il quale `iswalnum` è diverso da zero.  Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Il risultato della condizione di test per la funzione `ispunct` dipende da un'impostazione di categoria `LC_CTYPE` delle impostazioni locali; per ulteriori informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni che non hanno il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente di tutte le impostazioni locali; le versioni che hanno il suffisso `_l` sono identiche, con la differenza che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `ispunct` e `_ispunct_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|**\_** `istpunct`|`ispunct`|[\_ismbcpunct](../../c-runtime-library/reference/ismbcgraph-functions.md)|`iswpunct`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`ispunct`|\<ctype.h\>|  
|`iswpunct`|\<ctype.h\> o \<wchar.h\>|  
|`_ispunct_l`|\<ctype.h\>|  
|`_iswpunct_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)