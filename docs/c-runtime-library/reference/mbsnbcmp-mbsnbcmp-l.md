---
title: "_mbsnbcmp, _mbsnbcmp_l | Microsoft Docs"
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
  - "_mbsnbcmp"
  - "_mbsnbcmp_l"
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
  - "mbsnbcmp"
  - "tcsnbmp"
  - "_mbsnbcmp_l"
  - "mbsnbcmp_l"
  - "_mbsnbcmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcmp (funzione)"
  - "_mbsnbcmp_l (funzione)"
  - "_tcsncmp (funzione)"
  - "mbsnbcmp (funzione)"
  - "mbsnbcmp_l (funzione)"
  - "tcsncmp (funzione)"
ms.assetid: dbc99e50-cf85-4e57-a13f-067591f18ac8
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsnbcmp, _mbsnbcmp_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta i primi `n` byte di due stringhe di caratteri multibyte.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _mbsnbcmp(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbcmp_l(  
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
 Impostazioni locali da usare.  
  
## Valore restituito  
 Il valore restituito indica la relazione ordinale tra le sottostringhe di `string1` e `string`.  
  
|Valore restituito|Descrizione|  
|-----------------------|-----------------|  
|\< 0|La sottostringa di `string1` è minore della sottostringa di `string2`.|  
|0|La sottostringa di `string1` è identica alla sottostringa di `string2`.|  
|\> 0|La sottostringa di `string1` è maggiore della sottostringa di `string2`.|  
  
 In caso di errore di convalida del parametro, `_mbsnbcmp` e `_mbsnbcmp_l` restituiscono `_NLSCMPERROR`, definito in \<string.h\> e \<mbstring.h\>.  
  
## Note  
 Le funzioni `_mbsnbcmp` confrontano al massimo i primi `count` byte in `string1` e `string2` e restituiscono un valore che indica la relazione tra le sottostringhe.  `_mbsnbcmp` è una versione di `_mbsnbicmp` che effettua la distinzione tra maiuscole e minuscole.  Diversamente da `_mbsnbcoll`, `_mbsnbcmp` non viene influenzata dall'ordinamento delle regole di confronto delle impostazioni locali.  `_mbsnbcmp` riconosce le sequenze di caratteri multibyte in base alla [tabella codici](../../c-runtime-library/code-pages.md) multibyte corrente.  
  
 `_mbsnbcmp` è simile a `_mbsncmp`, ad eccezione del fatto che `_mbsncmp` confronta le stringhe per caratteri anziché per byte.  
  
 Il valore di output viene influenzato dall'impostazione della categoria `LC_CTYPE` delle impostazioni locali, che specifica i byte iniziali e finali dei caratteri multibyte.  Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  La funzione `_mbsnbcmp` usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali.  La funzione `_mbsnbcmp_l` è identica ad eccezione del fatto che usa il parametro `locale`.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `string1` o `string2` è un puntatore Null, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, le funzioni restituiranno `_NLSCMPERROR` e `errno` viene impostato su `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncmp`|[strncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|`_mbsnbcmp`|[wcsncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|  
|`_tcsncmp_l`|[strncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|`_mbsnbcml`|[wcsncmp](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcmp`|\<mbstring.h\>|  
|`_mbsnbcmp_l`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_mbsnbcmp.c  
#include <mbstring.h>  
#include <stdio.h>  
  
char string1[] = "The quick brown dog jumps over the lazy fox";  
char string2[] = "The QUICK brown fox jumps over the lazy dog";  
  
int main( void )  
{  
   char tmp[20];  
   int result;  
   printf( "Compare strings:\n          %s\n", string1 );  
   printf( "          %s\n\n", string2 );  
   printf( "Function: _mbsnbcmp (first 10 characters only)\n" );  
   result = _mbsncmp( string1, string2 , 10 );  
   if( result > 0 )  
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );  
   else if( result < 0 )  
      _mbscpy_s( tmp, sizeof(tmp), "less than" );  
   else  
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );  
   printf( "Result:   String 1 is %s string 2\n\n", tmp );  
   printf( "Function: _mbsnicmp _mbsnicmp (first 10 characters only)\n" );  
   result = _mbsnicmp( string1, string2, 10 );  
   if( result > 0 )  
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );  
   else if( result < 0 )  
      _mbscpy_s( tmp, sizeof(tmp), "less than" );  
   else  
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );  
   printf( "Result:   String 1 is %s string 2\n\n", tmp );  
}  
```  
  
## Output  
  
```  
Compare strings:  
          The quick brown dog jumps over the lazy fox  
          The QUICK brown fox jumps over the lazy dog  
  
Function: _mbsnbcmp (first 10 characters only)  
Result:   String 1 is greater than string 2  
  
Function: _mbsnicmp _mbsnicmp (first 10 characters only)  
Result:   String 1 is equal to string 2  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_mbsnbcat, \_mbsnbcat\_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [\_mbsnbicmp, \_mbsnbicmp\_l](../../c-runtime-library/reference/mbsnbicmp-mbsnbicmp-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)