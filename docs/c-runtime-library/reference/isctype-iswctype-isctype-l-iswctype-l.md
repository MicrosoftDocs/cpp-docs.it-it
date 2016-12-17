---
title: "_isctype, iswctype, _isctype_l, _iswctype_l | Microsoft Docs"
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
  - "_isctype_l"
  - "iswctype"
  - "_iswctype_l"
  - "_isctype"
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
  - "iswctype"
  - "_isctype"
  - "_isctype_l"
  - "_iswctype"
  - "isctype"
  - "iswctype_l"
  - "isctype_l"
  - "_iswctype_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_isctype (funzione)"
  - "_isctype_l (funzione)"
  - "_iswctype (funzione)"
  - "_iswctype_l (funzione)"
  - "isctype (funzione)"
  - "isctype_l (funzione)"
  - "iswctype (funzione)"
  - "iswctype_l (funzione)"
ms.assetid: cf7509b7-12fc-4d95-8140-ad2eb98173d3
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _isctype, iswctype, _isctype_l, _iswctype_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eseguire il test `c` per la proprietà specificata dall'argomento `desc`.  Per ogni valore valido di `desc`, esiste un'equivalente routine di classificazione a caratteri di tipo "wide".  
  
## Sintassi  
  
```  
int _isctype(  
   int c,  
   _ctype_t desc  
);  
int _isctype_l(  
   int c,  
   _ctype_t desc,  
   _locale_t locale  
);  
int iswctype(  
   wint_t c,  
   wctype_t desc   
);  
int _iswctype_l(  
   wint_t c,  
   wctype_t desc,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
 `desc`  
 Proprietà da verificare.  In genere viene recuperato utilizzando ctype o [wctype](../../c-runtime-library/reference/wctype.md).  
  
 `locale`  
 Le impostazioni locali da utilizzare per qualsiasi test dipendente dalle impostazioni locali.  
  
## Valore restituito  
 `_isctype` e `iswctype` restituiscono un valore diverso da zero se `c` dispone della proprietà specificata da `desc` nelle impostazioni locali correnti oppure 0 in caso contrario.  Le versioni di queste funzioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `_isctype` e `_isctype_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`n/a`|`_isctype`|`n/a`|`_iswctype`|  
|`n/a`|`_isctype_l`|`n/a`|`_iswctype_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_isctype`|\<ctype.h\>|  
|`iswctype`|\<ctype.h\> o \<wchar.h\>|  
|`_isctype_l`|\<ctype.h\>|  
|`_iswctype_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)