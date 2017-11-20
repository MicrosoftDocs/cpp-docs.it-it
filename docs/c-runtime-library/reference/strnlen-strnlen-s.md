---
title: strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- wcsnlen
- strnlen_s
- _mbstrnlen
- _mbsnlen_l
- _mbstrnlen_l
- strnlen
- wcsnlen_s
- _mbsnlen
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
- wcsnlen
- strnlen_s
- _mbsnlen
- _mbsnlen_l
- _tcsnlen
- _tcscnlen
- _mbstrnlen_l
- wcsnlen_s
- _mbstrnlen
- strnlen
- _tcscnlen_l
dev_langs: C++
helpviewer_keywords:
- _tcscnlen function
- _mbstrnlen function
- _mbsnlen_l function
- lengths, strings
- mbstrnlen function
- mbsnlen_l function
- _mbstrnlen_l function
- _tcscnlen_l function
- wcsnlen_l function
- _tcsnlen function
- _mbsnlen function
- strnlen function
- mbsnlen function
- wcsnlen_s function
- strnlen_s function
- mbstrnlen_l function
- wcsnlen function
- string length
- strnlen_l function
ms.assetid: cc05ce1c-72ea-4ae4-a7e7-4464e56e5f80
caps.latest.revision: "35"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0dfc872694485262386d0858e97b9835a2d507b3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strnlen-strnlens-wcsnlen-wcsnlens-mbsnlen-mbsnlenl-mbstrnlen-mbstrnlenl"></a>strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l
Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o quelle che sono state passate. Queste sono le versioni più sicure di [strlen, wcslen, mbslen, mbslen_l, mbstrlen, mbstrlen_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).  
  
> [!IMPORTANT]
>  Non è possibile usare `_mbsnlen`, `_mbsnlen_l`, `_mbstrnlen` e `_mbstrnlen_l` in applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t strnlen(  
   const char *str,  
   size_t numberOfElements   
);  
size_t strnlen_s(  
   const char *str,  
   size_t numberOfElements   
);  
size_t wcsnlen(  
   const wchar_t *str,  
   size_t numberOfElements  
);  
size_t wcsnlen_s(  
   const wchar_t *str,  
   size_t numberOfElements  
);  
size_t _mbsnlen(  
   const unsigned char *str,  
   size_t numberOfElements  
);  
size_t _mbsnlen_l(  
   const unsigned char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
size_t _mbstrnlen(  
   const char *str,  
   size_t numberOfElements  
);  
size_t _mbstrnlen_l(  
   const char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Stringa con terminazione Null.  
  
 `numberOfElements`  
 Dimensione del buffer di stringa.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Queste funzioni restituiscono il numero di caratteri nella stringa, escluso il valore null finale. Se non esiste un terminatore null entro i primi `numberOfElements` byte della stringa (o caratteri wide per `wcsnlen`), viene restituito `numberOfElements` per indicare la condizione di errore. La lunghezza delle stringhe con terminatore null è rigorosamente inferiore a `numberOfElements`.  
  
 `_mbstrnlen` e `_mbstrnlen_l` restituiscono -1 se la stringa contiene un carattere multibyte non valido.  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  `strnlen` non è un sostituto di `strlen`; `strnlen` è pensato per essere usato solo per il calcolo della dimensione dei dati non attendibili entranti in un buffer di dimensione nota, ad esempio un pacchetto di rete. `strnlen` calcola la lunghezza ma non oltrepassa la fine del buffer se la stringa è priva di terminazione. In situazioni di altro tipo, usare `strlen` (lo stesso vale per `wcsnlen`, `_mbsnlen` e `_mbstrnlen`).  
  
 Ognuna di questa funzioni restituisce il numero di caratteri in `str`, escluso il carattere null di terminazione. Tuttavia, `strnlen` e `strnlen_s` interpretano la stringa come stringa di caratteri a byte singolo, per cui il valore restituito sarà sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte. `wcsnlen` e `wcsnlen_s` sono versioni a caratteri wide di `strnlen` e `strnlen_s` rispettivamente. Gli argomenti per `wcsnlen` e `wcsnlen_s` sono stringhe a caratteri wide e il numero di caratteri è espresso in unità a caratteri wide. Per il resto, `wcsnlen` e `strnlen` si comportano in modo identico, come `strnlen_s` e `wcsnlen_s`.  
  
 `strnlen`, `wcsnlen`, e `_mbsnlen` non convalidano i relativi parametri. Se `str` è `NULL`, si verifica una violazione di accesso.  
  
 `strnlen_s` e `wcsnlen_s` convalidano i propri parametri. Se `str` è `NULL`, le funzioni restituiscono 0.  
  
 Anche `_mbstrnlen` convalida i propri parametri. Se `str` è `NULL` o se `numberOfElements` è maggiore di `INT_MAX`, `_mbstrnlen` genera un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `_mbstrnlen` imposta `errno` su `EINVAL` e restituisce -1.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsnlen`|`strnlen`|`strnlen`|`wcsnlen`|  
|`_tcscnlen`|`strnlen`|`_mbsnlen`|`wcsnlen`|  
|`_tcscnlen_l`|`strnlen`|`_mbsnlen_l`|`wcsnlen`|  
  
 `_mbsnlen` e `_mbstrnlen` restituiscono il numero di caratteri multibyte in una stringa di caratteri multibyte. `_mbsnlen` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte in uso o in base alle impostazioni locali passate, ma non testa la validità dei caratteri multibyte. `_mbstrnlen` testa la validità dei caratteri multibyte e riconosce le sequenze di caratteri multibyte. Se la stringa passata a `_mbstrnlen` contiene un carattere multibyte non valido, `errno` viene impostato su `EILSEQ`.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni sono identiche, tranne per il fatto che quelle prive del suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e le versioni con il suffisso `_l` usano il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strnlen`, `strnlen_s`|\<string.h>|  
|`wcsnlen`, `wcsnlen_s`|\<string.h> o \<wchar.h>|  
|`_mbsnlen`, `_mbsnlen_l`|\<mbstring.h>|  
|`_mbstrnlen`, `_mbstrnlen_l`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_strnlen.c  
  
#include <string.h>  
  
int main()  
{  
   // str1 is 82 characters long. str2 is 159 characters long   
  
   char* str1 = "The length of a string is the number of characters\n"  
               "excluding the terminating null.";  
   char* str2 = "strnlen takes a maximum size. If the string is longer\n"  
                "than the maximum size specified, the maximum size is\n"  
                "returned rather than the actual size of the string.";  
   size_t len;  
   size_t maxsize = 100;  
  
   len = strnlen(str1, maxsize);  
   printf("%s\n Length: %d \n\n", str1, len);  
  
   len = strnlen(str2, maxsize);  
   printf("%s\n Length: %d \n", str2, len);  
}  
```  
  
```Output  
The length of a string is the number of characters  
excluding the terminating null.  
 Length: 82   
  
strnlen takes a maximum size. If the string is longer  
than the maximum size specified, the maximum size is  
returned rather than the actual size of the string.  
 Length: 100   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)