---
title: strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wcstok_s_l
- _mbstok_s_l
- _mbstok_s
- strtok_s
- wcstok_s
- _strtok_s_l
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
- _tcstok_s_l
- _wcstok_s_l
- _tcstok_s
- _mbstok_s_l
- strtok_s
- wcstok_s
- _mbstok_s
- _strtok_s_l
dev_langs: C++
helpviewer_keywords:
- _strtok_s_l function
- _mbstok_s_l function
- strings [C++], searching
- mbstok_s_l function
- wcstok_s_l function
- _wcstok_s_l function
- _tcstok_s function
- _tcstok_s_l function
- strtok_s_l function
- wcstok_s function
- tokens, finding in strings
- mbstok_s function
- _mbstok_s function
- strtok_s function
ms.assetid: 7696c972-f83b-4617-8c82-95973e9fdb46
caps.latest.revision: "28"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e5d5b92497bedcfd766975e62c886dd64676fc71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="strtoks-strtoksl-wcstoks-wcstoksl-mbstoks-mbstoksl"></a>strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l

Trova il token successivo in una stringa, usando le impostazioni locali correnti o le impostazioni locali passate. Queste versioni di [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](../../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbstok_s` e `_mbstok_s_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```
char* strtok_s(  
   char* str,  
   const char* delimiters,  
   char** context  
);

char* _strtok_s_l(  
   char* str,  
   const char* delimiters,  
   char** context,  
   _locale_t locale  
);  

wchar_t* wcstok_s(  
   wchar_t* str,  
   const wchar_t* delimiters,   
   wchar_t** context  
); 
 
wchar_t *_wcstok_s_l(  
   wchar_t* str,  
   const wchar_t* delimiters,   
   wchar_t** context,  
   _locale_t locale  
);  

unsigned char* _mbstok_s(  
   unsigned char* str,  
   const unsigned char* delimiters,   
   char** context  
);  

unsigned char* _mbstok_s(  
   unsigned char* str,  
   const unsigned char* delimiters,   
   char** context,  
   _locale_t locale  
);  
```  
  
### <a name="parameters"></a>Parametri  

*str*  
Stringa contenente il token o un token da trovare.  
  
*delimitatori*  
Il set di caratteri di delimitazione da utilizzare.  
  
*contesto*  
Utilizzata per archiviare le informazioni sulla posizione tra le chiamate alla funzione.  
  
*locale*  
Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  

Restituisce un puntatore al token successivo nel *str*. Restituisce `NULL` quando non vengono trovati nessun ulteriore token. Modifica di ogni chiamata *str* sostituendo un `NULL` carattere per il primo delimitatore che si verifica dopo il token restituito.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|*str*|*delimitatori*|*contesto*|Valore restituito|`errno`|  
|----------------|------------------|---------------|------------------|-------------|  
|`NULL`|qualsiasi|puntatore a un puntatore Null|`NULL`|`EINVAL`|  
|qualsiasi|`NULL`|qualsiasi|`NULL`|`EINVAL`|  
|qualsiasi|qualsiasi|`NULL`|`NULL`|`EINVAL`|  
  
Se *str* è `NULL` ma *contesto* è un puntatore a un puntatore di contesto valido, non si verificano errori.  
  
## <a name="remarks"></a>Note  

Il `strtok_s` famiglia di funzioni consente di trovare il token successivo in *str*. Il set di caratteri in *delimitatori* specifica possibili delimitatori di token da trovare nel *str* alla chiamata corrente. `wcstok_s` e `_mbstok_s` sono le versioni a caratteri wide e a caratteri multibyte di `strtok_s`. Gli argomenti e i valori restituiti di `wcstok_s` e `_wcstok_s_l` sono stringhe di caratteri wide, mentre quelli di `_mbstok_s` e `_mbstok_s_l` sono stringhe di caratteri multibyte. A parte ciò, queste funzioni si comportano in modo identico.  

Questa funzione convalida i relativi parametri. Se si verifica una condizione di errore, come nella tabella delle condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `NULL`.

La prima chiamata a `strtok_s` la funzione ignora i delimitatori iniziali e restituisce un puntatore al primo token nel *str*, il token con un carattere null di terminazione. Più token può essere suddivisa fuori il resto della *str* da una serie di chiamate a `strtok_s`. Ogni chiamata a `strtok_s` modifica *str* inserendo un carattere null dopo il token restituito dalla chiamata. Il *contesto* puntatore tiene traccia di quale stringa è in lettura e la posizione nella stringa di token successivo da leggere. Per leggere il token successivo da *str*, chiamare `strtok_s` con un `NULL` valore per il *str* , argomento e passare lo stesso *contesto* parametro. Il `NULL` *str* argomento cause `strtok_s` per cercare il token successivo in modificati *str*. Il *delimitatori* argomento può accettare qualsiasi valore da una chiamata al successivo in modo che il set di delimitatori può variare.

Poiché il *contesto* parametro sostituisce il buffer statico utilizzato `strtok` e `_strtok_l`, è possibile analizzare le due stringhe contemporaneamente nello stesso thread.

La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il `_l` suffisso utilizzare impostazioni locali del thread corrente per questo comportamento dipendente dalle impostazioni locali. Le versioni con il `_l` suffisso sono identiche ad eccezione del fatto che utilizzano il *internazionali* parametro. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`strtok_s`|\<string.h>|
|`_strtok_s_l`|\<string.h>|
|`wcstok_s`,<br />`_wcstok_s_l`|\<string.h> o \<wchar.h>|
|`_mbstok_s`,<br />`_mbstok_s_l`|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcstok_s`|`strtok_s`|`_mbstok_s`|`wcstok_s`|
|`_tcstok_s_l`|`_strtok_s_l`|`_mbstok_s_l`|`_wcstok_s_l`|

## <a name="example"></a>Esempio

```C
// crt_strtok_s.c
// In this program, a loop uses strtok_s
// to print all the tokens (separated by commas
// or blanks) in two strings at the same time.

#include <string.h>
#include <stdio.h>

char string1[] =
    "A string\tof ,,tokens\nand some  more tokens";
char string2[] =
    "Another string\n\tparsed at the same time.";
char seps[]   = " ,\t\n";
char *token1 = NULL;
char *token2 = NULL;
char *next_token1 = NULL;
char *next_token2 = NULL;

int main(void)
{
    printf("Tokens:\n");

    // Establish string and get the first token:
    token1 = strtok_s(string1, seps, &next_token1);
    token2 = strtok_s(string2, seps, &next_token2);

    // While there are tokens in "string1" or "string2"
    while ((token1 != NULL) || (token2 != NULL))
    {
        // Get next token:
        if (token1 != NULL)
        {
            printf(" %s\n", token1);
            token1 = strtok_s(NULL, seps, &next_token1);
        }
        if (token2 != NULL)
        {
            printf("        %s\n", token2);
            token2 = strtok_s(NULL, seps, &next_token2);
        }
    }
}
```  
  
```Output  
Tokens:  
 A  
        Another  
 string  
        string  
 of  
        parsed  
 tokens  
        at  
 and  
        the  
 some  
        same  
 more  
        time.  
 tokens  
```  
  
## <a name="see-also"></a>Vedere anche  

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)  
[Impostazioni locali](../../c-runtime-library/locale.md)  
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)  
[strcspn, wcscspn, _mbscspn, _mbscspn_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)  
[strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)