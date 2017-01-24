---
title: "isascii, isascii, iswascii | Microsoft Docs"
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
  - "iswascii"
  - "__isascii"
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
  - "iswascii"
  - "istascii"
  - "__isascii"
  - "_istascii"
  - "isascii"
  - "ctype/isascii"
  - "ctype/__isascii"
  - "corecrt_wctype/iswascii"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__isascii (funzione)"
  - "_isascii (funzione)"
  - "isascii (funzione)"
  - "_istascii (funzione)"
  - "istascii (funzione)"
  - "iswascii (funzione)"
ms.assetid: ba4325ad-7cb3-4fb9-b096-58906d67971a
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isascii, isascii, iswascii
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un particolare carattere è un carattere ASCII.  
  
## Sintassi  
  
```  
int __isascii(   
   int c   
);  
int iswascii(   
   wint_t c   
);  
#define isascii __isascii  
```  
  
#### Parametri  
 `c`  
 Valore Integer da testare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere ASCII.`__isascii` restituisce un valore diverso da zero se `c` è un carattere ASCII \(nell'intervallo tra 0x00 e 0x7F\).`iswascii` restituisce un valore diverso da zero se `c` è una rappresentazione a caratteri wide di un carattere ASCII. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
## Note  
 Entrambi `__isascii` e `iswascii` vengono implementati come macro, a meno che non è definito il \_CTYPE\_DISABLE\_MACROS macro del preprocessore.  
  
 Per garantire la compatibilità, `isascii` viene implementato come un solo se macro [\_\_STDC\_\_](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario non è stato definito.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istascii`|`__isascii`|`__isascii`|`iswascii`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`isascii`, `__isascii`|C: \< CType. h \><br /><br /> C\+\+: \< cctype \> o \< CType. h \>|  
|`iswascii`|C: \< WCTYPE. h \>, \< CType. h \>, o \< WCHAR. h \><br /><br /> C\+\+: \< cwctype \>, \< cctype \>, \< WCTYPE. h \>, \< CType. h \>, o \< WCHAR. h \>|  
  
 Il `isascii`, `__isascii` e `iswascii` funzioni sono specifici di Microsoft. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)