---
title: "strcmp, wcscmp, _mbscmp | Microsoft Docs"
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
  - "wcscmp"
  - "_mbscmp"
  - "strcmp"
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
  - "_mbscmp"
  - "wcscmp"
  - "strcmp"
  - "_tcscmp"
  - "_ftcscmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcscmp (funzione)"
  - "_mbscmp (funzione)"
  - "_tcscmp (funzione)"
  - "ftcscmp (funzione)"
  - "mbscmp (funzione)"
  - "strcmp (funzione)"
  - "confronto tra stringhe [C++]"
  - "stringhe [C++], confronto"
  - "tcscmp (funzione)"
  - "wcscmp (funzione)"
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strcmp, wcscmp, _mbscmp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confrontare le stringhe.  
  
> [!IMPORTANT]
>  `_mbscmp` non può essere usato nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int strcmp(  
   const char *string1,  
   const char *string2   
);  
int wcscmp(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbscmp(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
```  
  
#### Parametri  
 `string1`, `string2`  
 Stringhe che terminano con Null da confrontare.  
  
## Valore restituito  
 Il valore restituito per ognuna di queste funzioni indica la relazione ordinale di `string1` e `string2`.  
  
|Valore|Relazione di stringa1 e stringa2|  
|------------|--------------------------------------|  
|\< 0|`string1` è minore di `string2`|  
|0|`string1` è identica a `string2`|  
|\> 0|`string1` è maggiore di `string2`|  
  
 In caso di errore di convalida del parametro, `_mbscmp` restituisce `_NLSCMPERROR`, definito in \<string.h\> e \<mbstring.h\>.  
  
## Note  
 La funzione `strcmp` esegue un confronto ordinale di `string1` e `string2`, quindi restituisce un valore che ne indica la relazione.  `wcscmp` e `_mbscmp` sono versioni, rispettivamente, con caratteri wide e caratteri multibyte di `strcmp`.  `_mbscmp` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce `_NLSCMPERROR` in caso di errore.  Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md).  Se anche `string1` o `string2` è un puntatore Null, `_mbscmp` richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `_mbscmp` restituisce `_NLSCMPERROR` e imposta `errno` su `EINVAL`.  `strcmp` e `wcscmp` non convalidano i parametri.  A parte ciò, queste tre funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcscmp`|`strcmp`|`_mbscmp`|`wcscmp`|  
  
 Le funzioni `strcmp` sono diverse dalle funzioni `strcoll` perché i confronti `strcmp` sono ordinali e non sono interessati dalle impostazioni locali.  `strcoll` confronta le stringhe a livello lessicografico usando la categoria `LC_COLLATE` delle impostazioni locali correnti.  Per altre informazioni sulla categoria `LC_COLLATE`, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri \(set di caratteri ASCII\) è lo stesso dell'ordine lessicografico dei caratteri.  Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico.  Ad esempio, in alcune impostazioni locali europee, il carattere 'a' \(valore 0x61\) precede il carattere 'ä' \(valore 0xE4\) nel set di caratteri, ma il carattere 'ä' precede a livello lessicografico il carattere 'a'.  
  
 Nelle impostazioni locali in cui il set di caratteri e l'ordine dei caratteri a livello lessicografico è diverso è possibile usare `strcoll` al posto di `strcmp` per il confronto lessicografico delle stringhe.  In alternativa, è possibile usare `strxfrm` nelle stringhe originali e `strcmp` nelle stringhe risultanti.  
  
 Le funzioni `strcmp` prevedono la distinzione tra maiuscole e minuscole.  `_stricmp`, `_wcsicmp` e `_mbsicmp` confrontano le stringhe convertendole prima nel formato minuscolo.  Due stringhe che contengono caratteri che si trovano tra 'Z' e 'a' nella tabella ASCII \('\[', '`\`', '\]', '`^`', '`_`' e '```'\) eseguono diversamente il confronto, a seconda del tipo di carattere maiuscolo\/minuscolo.  Ad esempio, le due stringhe `"ABCDE"` e `"ABCD^"` vengono confrontate in un modo se il confronto è in minuscolo \(`"abcde"` \> `"abcd^"`\) e in un altro \(`"ABCDE"` \< `"ABCD^"`\) se è in maiuscolo.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strcmp`|\<string.h\>|  
|`wcscmp`|\<string.h\> o \<wchar.h\>|  
|`_mbscmp`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Raccolte  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_strcmp.c  
  
#include <string.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
char string1[] = "The quick brown dog jumps over the lazy fox";  
char string2[] = "The QUICK brown dog jumps over the lazy fox";  
  
int main( void )  
{  
   char tmp[20];  
   int result;  
  
   // Case sensitive  
   printf( "Compare strings:\n   %s\n   %s\n\n", string1, string2 );  
   result = strcmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof(tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof (tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof (tmp), "equal to" );  
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );  
  
   // Case insensitive (could use equivalent _stricmp)  
   result = _stricmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof (tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof (tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof (tmp), "equal to" );  
   printf( "   _stricmp:  String 1 is %s string 2\n", tmp );  
}  
```  
  
  **Confrontare le stringhe:**  
 **The quick brown dog jumps over the lazy fox**  
 **The QUICK brown dog jumps over the lazy fox**  
 **strcmp:   la stringa 1 è maggiore rispetto alla stringa 2**  
 **\_stricmp:  la stringa 1 è uguale alla stringa 2**   
## Equivalente .NET Framework  
 [System::String::CompareOrdinal](https://msdn.microsoft.com/en-us/library/system.string.compareordinal.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [\_memicmp, \_memicmp\_l](../../c-runtime-library/reference/memicmp-memicmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [\_stricmp, \_wcsicmp, \_mbsicmp, \_stricmp\_l, \_wcsicmp\_l, \_mbsicmp\_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)