---
title: "_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l | Microsoft Docs"
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
  - "_mbsnbicoll_l"
  - "_mbsnbcoll_l"
  - "_mbsnbcoll"
  - "_mbsnbicoll"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "mbsnbicoll"
  - "mbsnbcoll"
  - "mbsnbicoll_l"
  - "_mbsnbcoll"
  - "_mbsnbicoll"
  - "_ftcsnicoll"
  - "_ftcsncoll"
  - "mbsnbcoll_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcoll (funzione)"
  - "_mbsnbcoll_l (funzione)"
  - "_mbsnbicoll (funzione)"
  - "_mbsnbicoll_l (funzione)"
  - "_tcsncoll (funzione)"
  - "_tcsnicoll (funzione)"
  - "mbsnbcoll (funzione)"
  - "mbsnbcoll_l (funzione)"
  - "mbsnbicoll (funzione)"
  - "mbsnbicoll_l (funzione)"
  - "tcsncoll (funzione)"
  - "tcsnicoll (funzione)"
ms.assetid: d139ed63-ccba-4458-baa2-61cbcef03e94
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta `n` byte di due stringhe di caratteri multibyte utilizzando le informazioni della tabella codici multibyte.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _mbsnbcoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbcoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnbicoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `string1, string2`  
 Stringhe da confrontare.  
  
 `count`  
 Numero di byte da confrontare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Il valore restituito indica la relazione fra le sottostringhe `string1` e `string2`.  
  
|Valore restituito|Descrizione|  
|-----------------------|-----------------|  
|\< 0|Sottostringa `string1` minore della sottostringa `string2`.|  
|0|Sottostringa `string1` identica alla sottostringa `string2`.|  
|\> 0|Sottostringa `string1` superiore alla sottostringa `string2`.|  
  
 Se `string1` o `string2` è `NULL` o `count` è maggiore di `INT_MAX`, iene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  Per utilizzare `_NLSCMPERROR`, includere String.h o Mbstring.h.  
  
## Note  
 Ciascuna di queste funzione raccoglie, al massimo, il primo byte `count` in `string1` e `string2` e restituisce un valore che indica la relazione tra le sottostringhe `string1` e `string2`.  Se il byte finale della sottostringa di `string1` o `string2` è un byte di apertura, non viene incluso nel confronto; queste funzioni vengono confrontano solamente i caratteri completi delle sottostringhe.  `_mbsnbicoll` è una versione senza distinzione tra maiuscole e minuscole di `_mbsnbcoll`.  Come `_mbsnbcmp` e `_mbsnbicmp`, `_mbsnbcoll` e `_mbsnbicoll` confrontano le due stringhe di caratteri multibyte secondo l'ordine lessicografico specificato dalla [tabella codici](../../c-runtime-library/code-pages.md) multibyte attualmente in uso.  
  
 Per alcune tabelle codici e per il set di caratteri corrispondenti, l'ordine di caratteri nel set di caratteri potrebbe differire dall'ordine dei caratteri lessicografici.  Nelle impostazioni locali "C", questo non avviene: l'ordine dei caratteri nel set di caratteri ASCII è identico all'ordine lessicografico dei caratteri.  Tuttavia, in alcune tabelle codici Europee, ad esempio, il carattere "a" \(valore 0x61\) precede il carattere "ä" \(valore 0xE4\) nel set di caratteri, ma il carattere "ä" precede il carattere lessicografico "a".  Per eseguire un confronto lessicografico delle stringhe di byte in tale istanza, utilizzare `_mbsnbcoll` anziché `_mbsnbcmp`; per controllare solamente l'uguaglianza della stringa, utilizzare `_mbsnbcmp`.  
  
 Poiché le funzioni `coll` raccolgono le stringhe lessicografiche per il confronto, mentre le funzioni `cmp` verificano semplicemente l'uguaglianza della stringa, le funzioni `coll` sono più lente delle versioni corrispondenti `cmp`.  Pertanto, le funzioni `coll` devono essere utilizzate solamente quando esiste una differenza tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografici nella tabella codici corrente e questa differenza è particolarmente interessante per il confronto di stringhe.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncoll`|[\_strncoll](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|`_mbsnbcoll`|[\_wcsncoll](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|  
|`_tcsncoll_l`|[\_strncoll, \_wcsncoll, \_mbsncoll, \_strncoll\_l, \_wcsncoll\_l, \_mbsncoll\_l](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|`_mbsnbcoll_l`|[\_wcsncoll\_l](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|  
|`_tcsnicoll`|[\_strnicoll](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|`_mbsnbicoll`|[\_wcsnicoll](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|  
|`_tcsnicoll_l`|[\_strnicoll\_l](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|`_mbsnbicoll_l`|[\_wcsnicoll\_l](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcoll`|\<mbstring.h\>|  
|`_mbsnbcoll_l`|\<mbstring.h\>|  
|`_mbsnbicoll`|\<mbstring.h\>|  
|`_mbsnbicoll_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_mbsnbcat, \_mbsnbcat\_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [\_mbsnbcmp, \_mbsnbcmp\_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [\_mbsnbicmp, \_mbsnbicmp\_l](../../c-runtime-library/reference/mbsnbicmp-mbsnbicmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)