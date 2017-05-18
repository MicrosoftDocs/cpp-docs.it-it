---
title: getenv, _wgetenv | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- getenv
- _wgetenv
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _wgetenv
- getenv
- _tgetenv
dev_langs:
- C++
helpviewer_keywords:
- getenv function
- tgetenv function
- wgetenv function
- environment values
- environment variables
- _tgetenv function
- _wgetenv function
ms.assetid: 3b9cb9ab-a126-4e0e-a44f-6c5a7134daf4
caps.latest.revision: 31
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 2838a1c79ad97bfd665a367b2a597cb20ac70097
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="getenv-wgetenv"></a>getenv, _wgetenv
Ottiene un valore dall'ambiente corrente. Sono disponibili versioni più sicure di queste funzioni. Vedere [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *getenv(   
   const char *varname   
);  
wchar_t *_wgetenv(   
   const wchar_t *varname   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `varname`  
 Nome della variabile di ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla voce della tabella dell'ambiente contenente `varname`. Non è sicuro modificare il valore della variabile di ambiente utilizzando il puntatore restituito. Per modificare il valore di una variabile di ambiente, usare la funzione `_putenv`. Il valore restituito è `NULL` se `varname` non viene trovato nella tabella dell'ambiente.  
  
## <a name="remarks"></a>Note  
 La funzione `getenv` cerca `varname` nell'elenco delle variabili di ambiente. Per `getenv` non viene rilevata la distinzione tra maiuscole e minuscole nel sistema operativo Windows. `getenv` e `_putenv` usano la copia dell'ambiente puntato dalla variabile globale `_environ` per accedere all'ambiente. `getenv` funziona solo nelle strutture dati che hanno accesso alla libreria di runtime e non sul "segmento" dell'ambiente creato per il processo dal sistema operativo. Di conseguenza, i programmi che usano l'argomento `envp` per [main](../../cpp/main-program-startup.md) o [wmain](../../cpp/main-program-startup.md) possono recuperare informazioni non valide.  
  
 Se `varname` è `NULL`, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `NULL`.  
  
 `_wgetenv` è una versione a caratteri wide di `getenv`. L'argomento e il valore restituito di `_wgetenv` sono stringhe a caratteri wide. La variabile globale `_wenviron` è una versione a caratteri wide di `_environ`.  
  
 In un programma MBCS (ad esempio, in un programma ASCII SBCS), `_wenviron` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv` se un ambiente (MBCS) esiste già, un ambiente di stringhe di caratteri wide corrispondente viene creato e viene puntato da `_wenviron`.  
  
 Allo stesso modo, in un programma Unicode (`_wmain`), `_environ` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri wide. Quindi, alla prima chiamata a `_putenv` o alla prima chiamata a `getenv` se un ambiente (Unicode) esiste già, un ambiente MBCS corrispondente viene creato e viene puntato a `_environ`.  
  
 Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve mantenere entrambe le copie, implicando tempi di esecuzione più lenti. Ad esempio, ogni volta che viene chiamato `_putenv`, viene eseguita automaticamente una chiamata anche a `_wputenv`, in modo che le due stringhe dell'ambiente corrispondano.  
  
> [!CAUTION]
>  In rare occasioni, quando il sistema runtime mantiene sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Questo si verifica perché, sebbene ogni stringa univoca di caratteri multibyte esegua il mapping a una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è necessariamente univoco. Per altre informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_putenv` e `_getenv` non sono thread-safe. `_getenv` potrebbe restituire un puntatore di stringa mentre `_putenv` sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tgetenv`|`getenv`|`getenv`|`_wgetenv`|  
  
 Per controllare o modificare il valore della variabile di ambiente `TZ`, utilizzare `getenv`, `_putenv` e `_tzset`, in base alle esigenze. Per altre informazioni su `TZ`, vedere [_tzset](../../c-runtime-library/reference/tzset.md) e [_daylight, timezone e _tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`getenv`|\<stdlib.h>|  
|`_wgetenv`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_getenv.c  
// compile with: /W3  
// This program uses getenv to retrieve  
// the LIB environment variable and then uses  
// _putenv to change it to a new value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *libvar;  
  
   // Get the value of the LIB environment variable.  
   libvar = getenv( "LIB" ); // C4996  
   // Note: getenv is deprecated; consider using getenv_s instead  
  
   if( libvar != NULL )  
      printf( "Original LIB variable is: %s\n", libvar );  
  
   // Attempt to change path. Note that this only affects the environment  
   // variable of the current process. The command processor's  
   // environment is not changed.  
   _putenv( "LIB=c:\\mylib;c:\\yourlib" ); // C4996  
   // Note: _putenv is deprecated; consider using putenv_s instead  
  
   // Get new value.  
   libvar = getenv( "LIB" ); // C4996  
  
   if( libvar != NULL )  
      printf( "New LIB variable is: %s\n", libvar );  
}  
```  
  
```Output  
Original LIB variable is: C:\progra~1\devstu~1\vc\lib  
New LIB variable is: c:\mylib;c:\yourlib  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md)   
 [Costanti di ambiente](../../c-runtime-library/environmental-constants.md)
