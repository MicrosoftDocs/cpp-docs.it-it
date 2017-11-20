---
title: strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbspbrk
- wcspbrk
- _mbspbrk_l
- strpbrk
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
- _fstrpbrk
- _mbspbrk
- strpbrk
- _tcspbrk
- _ftcspbrk
- wcspbrk
dev_langs: C++
helpviewer_keywords:
- fstrpbrk function
- _ftcspbrk function
- _mbspbrk_l function
- strpbrk function
- _fstrpbrk function
- mbspbrk function
- characters [C++], scanning strings
- _tcspbrk function
- wcspbrk function
- ftcspbrk function
- character sets [C++], scanning strings for characters
- strings [C++], scanning
- tcspbrk function
- _mbspbrk function
- mbspbrk_l function
ms.assetid: 80b504f7-a167-4dde-97ad-4ae3000dc810
caps.latest.revision: "30"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: aef34a8cddfde1088c8535a1835b157146400faa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strpbrk-wcspbrk-mbspbrk-mbspbrkl"></a>strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l
Cerca nelle stringhe caratteri dei set di caratteri specificati.  
  
> [!IMPORTANT]
>  `_mbspbrk` e `_mbspbrk_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *strpbrk(  
   const char *str,  
   const char *strCharSet   
); // C only  
char *strpbrk(  
   char *str,  
   const char *strCharSet   
); // C++ only  
const char *strpbrk(  
   const char *str,  
   const char *strCharSet   
); // C++ only  
wchar_t *wcspbrk(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
); // C only  
wchar_t *wcspbrk(  
   wchar_t *str,  
   const wchar_t *strCharSet   
); // C++ only  
const wchar_t *wcspbrk(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
); // C++ only  
unsigned char *_mbspbrk(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
); // C only  
unsigned char *_mbspbrk(  
   unsigned char *str,  
   const unsigned char *strCharSet   
); // C++ only  
const unsigned char *_mbspbrk(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
); // C++ only  
unsigned char *_mbspbrk_l(  
   const unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
); // C only  
unsigned char *_mbspbrk_l(  
   unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbspbrk_l(  
   const unsigned char *str,  
   const unsigned char* strCharSet,  
   _locale_t locale  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Stringa cercata con terminazione Null.  
  
 `strCharSet`  
 Set di caratteri con terminazione Null.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla prima occorrenza di qualsiasi carattere da `strCharSet` in `str` oppure un puntatore `NULL` se i due argomenti stringa non includono caratteri in comune.  
  
## <a name="remarks"></a>Note  
 La funzione `strpbrk` restituisce un puntatore alla prima occorrenza di un carattere in `str` che appartiene al set di caratteri in `strCharSet`. La ricerca non include il carattere Null di terminazione.  
  
 `wcspbrk` e `_mbspbrk` sono le versioni a caratteri wide e a caratteri multibyte di `strpbrk`. Gli argomenti e il valore restituito di `wcspbrk` sono stringhe con caratteri wide, mentre quelli di `_mbspbrk` sono stringhe con caratteri multibyte.  
  
 `_mbspbrk` convalida i propri parametri. Se `str` o `strCharSet` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `_mbspbrk` restituisce `NULL` e imposta `errno` su `EINVAL`. `strpbrk` e `wcspbrk` non convalidano i parametri. A parte ciò, queste tre funzioni si comportano in modo identico.  
  
 `_mbspbrk` è simile a `_mbscspn` ad eccezione del fatto che `_mbspbrk` restituisce un puntatore anziché un valore di tipo [size_t](../../c-runtime-library/standard-types.md).  
  
 In C queste funzioni accettano un puntatore `const` per il primo argomento. In C++ sono disponibili due overload. L'overload che accetta un puntatore a `const` restituisce un puntatore a `const`. La versione che accetta un puntatore a non-`const` restituisce un puntatore a non-`const`. La macro `_CRT_CONST_CORRECT_OVERLOADS` è definito se entrambi i `const` e non-`const` versioni di queste funzioni sono disponibili. Se è necessario non`const` comportamento per entrambi gli overload C++, definire il simbolo di `_CONST_RETURN`.  
  
 Il valore di output è interessato dalla configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. La versione con il suffisso `_l` è identica, ma usa il parametro relativo alle impostazioni locali passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcspbrk`|`strpbrk`|`_mbspbrk`|`wcspbrk`|  
|**n/d**|**n/d**|`_mbspbrk_l`|**n/d**|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strpbrk`|\<string.h>|  
|`wcspbrk`|\<string.h> o \<wchar.h>|  
|`_mbspbrk`, `_mbspbrk_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_strpbrk.c  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[100] = "The 3 men and 2 boys ate 5 pigs\n";  
   char *result = NULL;  
  
   // Return pointer to first digit in "string".  
   printf( "1: %s\n", string );  
   result = strpbrk( string, "0123456789" );  
   printf( "2: %s\n", result++ );  
   result = strpbrk( result, "0123456789" );  
   printf( "3: %s\n", result++ );  
   result = strpbrk( result, "0123456789" );  
   printf( "4: %s\n", result );  
}  
```  
  
```Output  
1: The 3 men and 2 boys ate 5 pigs  
  
2: 3 men and 2 boys ate 5 pigs  
  
3: 2 boys ate 5 pigs  
  
4: 5 pigs  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, _mbscspn, _mbscspn_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strchr, wcschr, _mbschr, _mbschr_l](../../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)