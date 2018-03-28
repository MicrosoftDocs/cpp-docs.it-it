---
title: strcmp, wcscmp, _mbscmp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- wcscmp
- _mbscmp
- strcmp
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ntdll.dll
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _mbscmp
- wcscmp
- strcmp
- _tcscmp
- _ftcscmp
dev_langs:
- C++
helpviewer_keywords:
- tcscmp function
- strcmp function
- strings [C++], comparing
- mbscmp function
- string comparison [C++]
- _mbscmp function
- wcscmp function
- _tcscmp function
- _ftcscmp function
- ftcscmp function
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
caps.latest.revision: ''
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: addc2c215d0c914e3caee3dba4d32f94ca91e62c
ms.sourcegitcommit: 604907f77eb6c5b1899194a9877726f3e8c2dabc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2018
---
# <a name="strcmp-wcscmp-mbscmp"></a>strcmp, wcscmp, _mbscmp
Confrontare le stringhe.  
  
> [!IMPORTANT]
>  `_mbscmp` non può essere utilizzato in applicazioni che vengono eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `string1`, `string2`  
 Stringhe che terminano con Null da confrontare.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito per ognuna di queste funzioni indica la relazione ordinale di `string1` e `string2`.  
  
|Valore|Relazione di stringa1 e stringa2|  
|-----------|----------------------------------------|  
|< 0|`string1` è minore di `string2`|  
|0|`string1` è identica a `string2`|  
|> 0|`string1` è maggiore di `string2`|  
  
 In caso di errore di convalida del parametro, `_mbscmp` restituisce `_NLSCMPERROR`, definito in \<string.h> e \<mbstring.h>.  
  
## <a name="remarks"></a>Note  
 La funzione `strcmp` esegue un confronto ordinale di `string1` e `string2`, quindi restituisce un valore che ne indica la relazione. `wcscmp` e `_mbscmp` sono versioni, rispettivamente, con caratteri wide e caratteri multibyte di `strcmp`. `_mbscmp` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce `_NLSCMPERROR` in caso di errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). Inoltre, se `string1` o `string2` è un puntatore Null, `_mbscmp` richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `_mbscmp` restituisce `_NLSCMPERROR` e imposta `errno` su `EINVAL`. `strcmp` e `wcscmp` non convalidano i parametri. A parte ciò, queste tre funzioni si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscmp`|`strcmp`|`_mbscmp`|`wcscmp`|  
  
 Le funzioni `strcmp` sono diverse dalle funzioni `strcoll` perché i confronti `strcmp` sono ordinali e non sono interessati dalle impostazioni locali. `strcoll` confronta le stringhe a livello lessicografico usando la categoria `LC_COLLATE` delle impostazioni locali correnti. Per altre informazioni sulla categoria `LC_COLLATE`, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri (set di caratteri ASCII) è lo stesso dell'ordine lessicografico dei caratteri. Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico. Ad esempio, in alcune impostazioni locali europee, il carattere 'a' (valore 0x61) precede il carattere 'ä' (valore 0xE4) nel set di caratteri, ma il carattere 'ä' precede a livello lessicografico il carattere 'a'.  
  
 Nelle impostazioni locali in cui il set di caratteri e l'ordine dei caratteri a livello lessicografico è diverso è possibile usare `strcoll` al posto di `strcmp` per il confronto lessicografico delle stringhe. In alternativa, è possibile usare `strxfrm` nelle stringhe originali e `strcmp` nelle stringhe risultanti.  
  
 Le funzioni `strcmp` prevedono la distinzione tra maiuscole e minuscole. `_stricmp`, `_wcsicmp` e `_mbsicmp` confrontano le stringhe convertendole prima nel formato minuscolo. Due stringhe che contengono caratteri che si trovano tra 'Z' e 'a' nella tabella ASCII ('[', '`\`', ']', '`^`', '`_`' e '```') eseguono diversamente il confronto, a seconda della combinazione di maiuscole/minuscole. Ad esempio, le due stringhe `"ABCDE"` e `"ABCD^"` vengono confrontate in un modo se il confronto è in minuscolo (`"abcde"` > `"abcd^"`) e in un altro (`"ABCDE"` < `"ABCD^"`) se è in maiuscolo.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strcmp`|<string.h>|  
|`wcscmp`|<string.h> o <wchar.h>|  
|`_mbscmp`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
Compare strings:  
   The quick brown dog jumps over the lazy fox  
   The QUICK brown dog jumps over the lazy fox  
  
   strcmp:   String 1 is greater than string 2  
   _stricmp:  String 1 is equal to string 2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [_memicmp, _memicmp_l](../../c-runtime-library/reference/memicmp-memicmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)