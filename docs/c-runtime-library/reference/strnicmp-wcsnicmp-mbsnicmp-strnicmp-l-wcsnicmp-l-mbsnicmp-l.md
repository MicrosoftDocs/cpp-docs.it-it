---
title: "_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcsnicmp"
  - "_strnicmp_l"
  - "_wcsnicmp_l"
  - "_strnicmp"
  - "_mbsnicmp"
  - "_mbsnicmp_l"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wcsnicmp_l"
  - "_strnicmp"
  - "_ftcsnicmp"
  - "mbsnicmp_l"
  - "_ftcsncicmp"
  - "mbsnicmp"
  - "_tcsncicmp"
  - "_mbsnicmp"
  - "_tcsnicmp"
  - "strnicmp_l"
  - "_wcsnicmp"
  - "_wcsnicmp_l"
  - "CORECRT_WSTRING/_wcsnicmp"
  - "CORECRT_WSTRING/_wcsnicmp_l"
  - "string/_strnicmp"
  - "string/_strnicmp_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcsncicmp (funzione)"
  - "_ftcsnicmp (funzione)"
  - "_mbsnicmp (funzione)"
  - "_mbsnicmp_l (funzione)"
  - "_strnicmp (funzione)"
  - "_strnicmp_l (funzione)"
  - "_tcsncicmp (funzione)"
  - "_tcsnicmp (funzione)"
  - "_wcsnicmp (funzione)"
  - "_wcsnicmp_l (funzione)"
  - "caratteri [C++], confronto"
  - "ftcsncicmp (funzione)"
  - "ftcsnicmp (funzione)"
  - "mbsnicmp (funzione)"
  - "mbsnicmp_l (funzione)"
  - "confronto tra stringhe [C++], minuscole"
  - "confronto tra stringhe [C++], strncmp (funzione)"
  - "stringhe [C++], confronto di caratteri"
  - "strncmp (funzione)"
  - "strnicmp_l (funzione)"
  - "tcsncicmp (funzione)"
  - "tcsnicmp (funzione)"
  - "wcsnicmp (funzione)"
  - "wcsnicmp_l (funzione)"
ms.assetid: df6e5037-4039-4c85-a0a6-21d4ef513966
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta il numero specificato di caratteri di due stringhe senza fare distinzione tra maiuscole e minuscole.  
  
> [!IMPORTANT]
>  `_mbsnicmp` e `_mbsnicmp_l` non possono essere usati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _strnicmp(  
   const char *string1,  
   const char *string2,  
   size_t count   
);  
int _wcsnicmp(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   size_t count   
);  
int _mbsnicmp(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _strnicmp_l(  
   const char *string1,  
   const char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _wcsnicmp_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnicmp_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `string1, string2`  
 Stringhe che terminano con Null da confrontare.  
  
 `count`  
 Numero di caratteri da confrontare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Indica la relazione tra le sottostringhe, come indicato di seguito.  
  
|Valore restituito|Descrizione|  
|-----------------------|-----------------|  
|\< 0|La sottostringa di `string1` è minore della sottostringa di `string2`.|  
|0|La sottostringa di `string1` è identica alla sottostringa di `string2`.|  
|\> 0|La sottostringa di `string1` è maggiore della sottostringa di `string2`.|  
  
 In caso di errore di convalida del parametro, queste funzioni restituiscono `_NLSCMPERROR`, definito in \<string.h\> e \<mbstring.h\>.  
  
## Note  
 La funzione `_strnicmp` esegue un confronto ordinale al massimo dei primi `count` caratteri di `string1` e `string2`.  Il confronto viene eseguito senza fare distinzione tra maiuscole e minuscole convertendo ogni carattere in minuscolo.  `_strnicmp` è una versione di `strncmp` che non fa distinzione tra maiuscole e minuscole.  Il confronto termina se viene raggiunto un carattere di terminazione Null in entrambe le stringhe prima che vengano confrontati `count` caratteri.  Se le stringhe sono uguali quando viene raggiunto un carattere di terminazione Null in entrambe le stringhe prima che vengano confrontati `count` caratteri, la stringa più corta sarà la minore.  
  
 I caratteri da 91 a 96 nella tabella ASCII \('\[', '\\', '\]', '^', '\_' e '\`'\) sono considerati minori rispetto a qualsiasi carattere alfabetico.  Questo ordinamento è identico a quello di `stricmp`.  
  
 `_wcsnicmp` e `_mbsnicmp` sono le versioni a caratteri wide e a caratteri multibyte di `_strnicmp`.  Gli argomenti di `_wcsnicmp` sono stringhe di caratteri wide, mentre gli argomenti di `_mbsnicmp` sono stringhe di caratteri multibyte.  `_mbsnicmp` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce `_NLSCMPERROR` in caso di errore.  Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md).  A parte ciò, queste tre funzioni si comportano in modo identico.  Queste funzioni vengono influenzate dalle impostazioni locali: le versioni che non hanno il suffisso `_l` usano le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali, mentre le versioni che hanno il suffisso `_l` usano il parametro `locale` passato dall'utente.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Tutte queste funzioni convalidano i relativi parametri.  Se `string1` o `string2` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncicmp`|`_strnicmp`|`_mbsnicmp`|`_wcsnicmp`|  
|`_tcsnicmp`|`_strnicmp`|`_mbsnbicmp`|`_wcsnicmp`|  
|`_tcsncicmp_l`|`_strnicmp_l`|`_mbsnicmp_l`|`_wcsnicmp_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strnicmp`, `_strnicmp_l`|\<string.h\>|  
|`_wcsnicmp`, `_wcsnicmp_l`|\<string.h\> o \<wchar.h\>|  
|`_mbsnicmp`, `_mbsnicmp_l`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio per [strncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md).  
  
## Equivalente .NET Framework  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)