---
title: "islower, iswlower, _islower_l, _iswlower_l | Microsoft Docs"
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
  - "iswlower"
  - "_islower_l"
  - "islower"
  - "_iswlower_l"
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
  - "_istlower"
  - "islower"
  - "_ismbclower_l"
  - "_liswlower_l"
  - "_istlower_l"
  - "_iswlower_l"
  - "_islower _l"
  - "_islower_l"
  - "iswlower"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_islower _l (funzione)"
  - "_islower_l (funzione)"
  - "_ismbclower_l (funzione)"
  - "_istlower (funzione)"
  - "_istlower_l (funzione)"
  - "_iswlower_l (funzione)"
  - "_liswlower_l (funzione)"
  - "islower (funzione)"
  - "istlower (funzione)"
  - "iswlower (funzione)"
ms.assetid: fcc3b70a-2b47-45fd-944d-e5c1942e6457
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# islower, iswlower, _islower_l, _iswlower_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un intero rappresenta un carattere minuscolo.  
  
## Sintassi  
  
```  
int islower(  
   int c   
);  
int iswlower(  
   wint_t c   
);  
int islower_l(  
   int c,  
   _locale_t locale  
);  
int _iswlower_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere minuscolo.  `islower` restituisce un valore diverso da zero se `c` è un carattere minuscolo \(a – z\).  `iswlower` restituisce un valore diverso da zero se `c` è un carattere wide che corrisponde ad una lettera minuscola, o se `c` è un set di caratteri wide definito dall'implementazione per il quale nessuno tra `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diverso da zero.  Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` usano le impostazioni locali che vengono passate al posto delle impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `islower` e `_islower_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istlower`|`islower`|[\_ismbclower](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`iswlower`|  
|`_istlower_l`|`_islower _l`|[\_ismbclower\_l](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`_liswlower_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`islower`|\<ctype.h\>|  
|`iswlower`|\<ctype.h\> o \<wchar.h\>|  
|`_islower_l`|\<ctype.h\>|  
|`_swlower_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Char::IsLower](https://msdn.microsoft.com/en-us/library/system.char.islower.aspx)  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)