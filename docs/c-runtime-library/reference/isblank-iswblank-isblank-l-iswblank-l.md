---
title: "isblank, iswblank, _isblank_l, _iswblank_l | Microsoft Docs"
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
  - "isblank"
  - "_isblank_l"
  - "iswblank"
  - "_iswblank_l"
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
  - "_iswblank_l"
  - "isblank"
  - "_istblank_l"
  - "_istblank"
  - "_isblank_l"
  - "iswblank"
dev_langs: 
  - "C++"
ms.assetid: 33ce96c0-f387-411a-8283-c3d2a69e56bd
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isblank, iswblank, _isblank_l, _iswblank_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un integer rappresenta un carattere vuoto.  
  
## Sintassi  
  
```  
int isblank(  
   int c   
);  
int iswblank(  
   wint_t c   
);  
int _isblank_l(  
   int c,  
   _locale_t locale  
);  
int _iswblank_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione specifica di uno spazio o un carattere di tabulazione orizzontale oppure è uno dei set di caratteri specifico delle impostazioni locali utilizzato per separare le parole all'interno di una riga di testo.  Tramite `isblank` viene restituito un valore diverso da zero se `c` è uno spazio \(0x20\) o un carattere di tabulazione orizzontale \(0x09\).  Il risultato della condizione di test per le funzioni `isblank` dipende da un'impostazione di categoria `LC_CTYPE` delle impostazioni locali; per ulteriori informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni che non hanno il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente di tutte le impostazioni locali; le versioni che hanno il suffisso `_l` sono identiche, con la differenza che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Tramite `iswblank` viene restituito un valore diverso da zero se `c` è un carattere wide corrispondente a un carattere di tabulazione orizzontale o a uno spazio standard.  
  
 Il comportamento di `isblank` e `_isblank_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istblank`|`isblank`|[\_ismbcblank](../../c-runtime-library/reference/ismbcgraph-functions.md)|`iswblank`|  
|`_istblank_l`|`_isblank_l`|[\_ismbcblank\_l](../../c-runtime-library/reference/ismbcgraph-functions.md)|`_iswblank_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`isblank`|\<ctype.h\>|  
|`iswblank`|\<ctype.h\> o \<wchar.h\>|  
|`_isblank_l`|\<ctype.h\>|  
|`_iswblank_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Char::IsWhiteSpace](https://msdn.microsoft.com/en-us/library/system.char.iswhitespace.aspx)  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)