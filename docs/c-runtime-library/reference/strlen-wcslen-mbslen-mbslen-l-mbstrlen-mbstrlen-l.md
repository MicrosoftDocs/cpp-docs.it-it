---
title: strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _mbslen
- _mbslen_l
- _mbstrlen
- wcslen
- _mbstrlen_l
- strlen
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
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _mbstrlen
- wcslen
- _tcslen
- _ftcslen
- strlen
- _mbslen
dev_langs:
- C++
helpviewer_keywords:
- wcslen function
- string length, getting
- ftcslen function
- lengths, strings
- mbstrlen_l function
- _mbslen_l function
- _tcslen function
- mbslen_l function
- mbslen function
- _mbstrlen function
- strings [C++], getting length
- mbstrlen function
- _mbstrlen_l function
- _ftcslen function
- tcslen function
- strlen function
- _mbslen function
ms.assetid: 16462f2a-1e0f-4eb3-be55-bf1c83f374c2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 40f3689c11eea367a2c8bf268713c0fad6e434c8
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="strlen-wcslen-mbslen-mbslenl-mbstrlen-mbstrlenl"></a>strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l
Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o le impostazioni locali specificate. Sono disponibili versioni più sicure di queste funzioni. Vedere [strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l](../../c-runtime-library/reference/strnlen-strnlen-s.md).  
  
> [!IMPORTANT]
>  Non è possibile usare `_mbslen`, `_mbslen_l`, `_mbstrlen` e `_mbstrlen_l` in applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t strlen(  
   const char *str  
);  
size_t wcslen(  
   const wchar_t *str   
);  
size_t _mbslen(  
   const unsigned char *str   
);  
size_t _mbslen_l(  
   const unsigned char *str,  
   _locale_t locale  
);  
size_t _mbstrlen(  
   const char *str  
);  
size_t _mbstrlen_l(  
   const char *str,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Stringa con terminazione Null.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce il numero di caratteri in `str`, escluso il `NULL` terminale. Non è riservato alcun valore per indicare un errore, ad eccezione di `_mbstrlen` e `_mbstrlen_l`, che restituiscono `((size_t)(-1))` se la stringa contiene un carattere multibyte non valido.  
  
## <a name="remarks"></a>Note  
 `strlen` interpreta la stringa come stringa di caratteri a byte singolo. Il valore restituito sarà quindi sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte. `wcslen` è una versione a caratteri wide di `strlen`. L'argomento di `wcslen` è una stringa a caratteri wide e il conteggio di caratteri è espresso in caratteri wide (a due byte). In caso contrario, `wcslen` e `strlen` si comportano in modo identico.  
  
 **Nota sulla sicurezza** Queste funzioni sono esposte a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcslen`|`strlen`|`strlen`|`wcslen`|  
|`_tcsclen`|`strlen`|`_mbslen`|`wcslen`|  
|`_tcsclen_l`|`strlen`|`_mbslen_l`|`wcslen`|  
  
 `_mbslen` e `_mbslen_l` restituiscono il numero di caratteri multibyte in una stringa a caratteri multibyte, ma non testano la validità dei caratteri multibyte. `_mbstrlen` e `_mbstrlen_l` testano la validità dei caratteri multibyte e riconoscono le sequenze di caratteri multibyte. Se la stringa passata a `_mbstrlen` o `_mbstrlen_l` contiene un carattere multibyte non valido per la tabella codici, la funzione restituirà -1 e imposterà `errno` su `EILSEQ`.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano il parametro passato relativo alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strlen`|\<string.h>|  
|`wcslen`|\<string.h> o \<wchar.h>|  
|`_mbslen`, `_mbslen_l`|\<mbstring.h>|  
|`_mbstrlen`, `_mbstrlen_l`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_strlen.c  
// Determine the length of a string. For the multi-byte character  
// example to work correctly, the Japanese language support for  
// non-Unicode programs must be enabled by the operating system.  
  
#include <string.h>  
#include <locale.h>  
  
int main()  
{  
   char* str1 = "Count.";  
   wchar_t* wstr1 = L"Count.";  
   char * mbstr1;  
   char * locale_string;  
  
   // strlen gives the length of single-byte character string  
   printf("Length of '%s' : %d\n", str1, strlen(str1) );  
  
   // wstrlen gives the length of a wide character string  
   wprintf(L"Length of '%s' : %d\n", wstr1, wcslen(wstr1) );  
  
   // A multibyte string: [A] [B] [C] [katakana A] [D] [\0]  
   // in Code Page 932. For this example to work correctly,  
   // the Japanese language support must be enabled by the  
   // operating system.  
   mbstr1 = "ABC" "\x83\x40" "D";  
  
   locale_string = setlocale(LC_CTYPE, "Japanese_Japan");  
  
   if (locale_string == NULL)  
   {  
      printf("Japanese locale not enabled. Exiting.\n");  
      exit(1);  
   }  
   else  
   {  
      printf("Locale set to %s\n", locale_string);  
   }  
  
   // _mbslen will recognize the Japanese multibyte character if the  
   // current locale used by the operating system is Japanese  
   printf("Length of '%s' : %d\n", mbstr1, _mbslen(mbstr1) );  
  
   // _mbstrlen will recognize the Japanese multibyte character  
   // since the CRT locale is set to Japanese even if the OS locale  
   // isnot.   
   printf("Length of '%s' : %d\n", mbstr1, _mbstrlen(mbstr1) );  
   printf("Bytes in '%s' : %d\n", mbstr1, strlen(mbstr1) );     
  
}  
```  
  
```Output  
Length of 'Count.' : 6  
Length of 'Count.' : 6  
Length of 'ABCァD' : 5  
Length of 'ABCァD' : 5  
Bytes in 'ABCァD' : 6  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcat, wcscat, _mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strcpy, wcscpy, _mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)