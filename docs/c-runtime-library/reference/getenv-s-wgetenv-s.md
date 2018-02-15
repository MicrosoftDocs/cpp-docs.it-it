---
title: getenv_s, _wgetenv_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- getenv_s
- _wgetenv_s
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
- getenv_s
- _tgetenv_s
- _wgetenv_s
dev_langs:
- C++
helpviewer_keywords:
- _tgetenv_s function
- wgetenv_s function
- _wgetenv_s function
- getenv_s function
- environment variables
- tgetenv_s function
ms.assetid: c3ae1ffe-d4cd-4bae-bcb1-3afa754c613a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 34ba832030e3ad5580dd46deb39c1cbe62738ee9
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="getenvs-wgetenvs"></a>getenv_s, _wgetenv_s
Ottiene un valore dall'ambiente corrente. Queste versioni di [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t getenv_s(   
   size_t *pReturnValue,  
   char* buffer,  
   size_t numberOfElements,  
   const char *varname   
);  
errno_t _wgetenv_s(   
   size_t *pReturnValue,  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *varname   
);  
template <size_t size>  
errno_t getenv_s(   
   size_t *pReturnValue,  
   char (&buffer)[size],  
   const char *varname   
); // C++ only  
template <size_t size>  
errno_t _wgetenv_s(   
   size_t *pReturnValue,  
   wchar_t (&buffer)[size],  
   const wchar_t *varname   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `pReturnValue`  
 La dimensione del buffer richiesta oppure 0 se la variabile non viene trovata.  
  
 `buffer`  
 Buffer per archiviare il valore della variabile di ambiente.  
  
 `numberOfElements`  
 Dimensioni di `buffer`.  
  
 `varname`  
 Nome della variabile di ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo; in caso contrario un codice di errore.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`pReturnValue`|`buffer`|`numberOfElements`|`varname`|Valore restituito|  
|--------------------|--------------|------------------------|---------------|------------------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|  
|qualsiasi|`NULL`|>0|qualsiasi|`EINVAL`|  
|qualsiasi|qualsiasi|qualsiasi|`NULL`|`EINVAL`|  
  
 Alcune di queste condizioni di errore richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
 Inoltre, se il buffer è troppo piccolo, queste funzioni restituiscono `ERANGE`. Non invocano un gestore di parametro non valido. Scrivono le dimensioni del buffer necessarie in `pReturnValue` e pertanto consentono ai programmi di chiamare nuovamente la funzione con una dimensione maggiore del buffer.  
  
## <a name="remarks"></a>Note  
 La funzione `getenv_s` cerca `varname` nell'elenco delle variabili di ambiente. Per `getenv_s` non viene rilevata la distinzione tra maiuscole e minuscole nel sistema operativo Windows. `getenv_s` e `_putenv_s` usano la copia dell'ambiente a cui punta la variabile globale `_environ` per accedere all'ambiente. `getenv_s` funziona solo nelle strutture dati che hanno accesso alla libreria di runtime e non sul "segmento" dell'ambiente creato per il processo dal sistema operativo. Di conseguenza, i programmi che usano l'argomento `envp` per [main](../../cpp/main-program-startup.md) o [wmain](../../cpp/main-program-startup.md) possono recuperare informazioni non valide.  
  
 `_wgetenv_s` è una versione a caratteri wide di `getenv_s`. L'argomento e il valore restituito di `_wgetenv_s` sono stringhe a caratteri wide. La variabile globale `_wenviron` è una versione a caratteri wide di `_environ`.  
  
 In un programma MBCS (ad esempio, in un programma ASCII SBCS), `_wenviron` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv_s` se un ambiente (MBCS) esiste già, un ambiente di stringhe di caratteri wide corrispondente viene creato e a cui quindi punta `_wenviron`.  
  
 Allo stesso modo in un programma Unicode (`(_wmain`), `_environ` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri wide. Quindi, alla prima chiamata a `_putenv` o alla prima chiamata a `getenv_s` se un ambiente (Unicode) esiste già, un ambiente MBCS corrispondente viene creato e a cui punta `_environ`.  
  
 Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve gestire entrambe le copie, con conseguente esecuzione più lenta. Ad esempio, quando viene chiamato `_putenv`, viene eseguita automaticamente una chiamata anche a `_wputenv`, in modo che le due stringhe dell'ambiente corrispondano.  
  
> [!CAUTION]
>  In rare occasioni, quando il sistema runtime gestisce sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Ciò è dovuto al fatto che, sebbene ogni stringa univoca con caratteri multibyte viene mappata in una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è sempre univoco. Per altre informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_putenv_s` e `_getenv_s` non sono thread-safe. `_getenv_s` potrebbe restituire un puntatore di stringa mentre `_putenv_s` sta modificando la stringa, causando errori casuali. Verificare che le chiamate alle funzioni siano sincronizzate.  
  
 In C++ l'utilizzo di queste funzioni viene semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente eliminando la necessità di specificare un argomento per la dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tgetenv_s`|`getenv_s`|`getenv_s`|`_wgetenv_s`|  
  
 Per controllare o modificare il valore della variabile di ambiente `TZ`, usare `getenv_s`, `_putenv` e `_tzset`, in base alle esigenze. Per altre informazioni su `TZ`, vedere [_tzset](../../c-runtime-library/reference/tzset.md) e [_daylight, _dstbias, _timezone e _tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`getenv_s`|\<stdlib.h>|  
|`_wgetenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_getenv_s.c  
// This program uses getenv_s to retrieve  
// the LIB environment variable and then uses  
// _putenv to change it to a new value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char* libvar;  
   size_t requiredSize;  
  
   getenv_s( &requiredSize, NULL, 0, "LIB");  
   if (requiredSize == 0)  
   {  
      printf("LIB doesn't exist!\n");  
      exit(1);  
   }  
  
   libvar = (char*) malloc(requiredSize * sizeof(char));  
   if (!libvar)  
   {  
      printf("Failed to allocate memory!\n");  
      exit(1);  
   }  
  
   // Get the value of the LIB environment variable.  
   getenv_s( &requiredSize, libvar, requiredSize, "LIB" );  
  
   printf( "Original LIB variable is: %s\n", libvar );  
  
   // Attempt to change path. Note that this only affects  
   // the environment variable of the current process. The command  
   // processor's environment is not changed.  
   _putenv_s( "LIB", "c:\\mylib;c:\\yourlib" );  
  
   getenv_s( &requiredSize, NULL, 0, "LIB");  
  
   libvar = (char*) realloc(libvar, requiredSize * sizeof(char));  
   if (!libvar)  
   {  
      printf("Failed to allocate memory!\n");  
      exit(1);  
   }  
  
   // Get the new value of the LIB environment variable.   
   getenv_s( &requiredSize, libvar, requiredSize, "LIB" );  
  
   printf( "New LIB variable is: %s\n", libvar );  
  
   free(libvar);  
}  
```  
  
```Output  
Original LIB variable is: c:\vctools\lib;c:\vctools\atlmfc\lib;c:\vctools\PlatformSDK\lib;c:\vctools\Visual Studio SDKs\DIA Sdk\lib;c:\vctools\Visual Studio SDKs\BSC Sdk\lib  
New LIB variable is: c:\mylib;c:\yourlib  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Costanti di ambiente](../../c-runtime-library/environmental-constants.md)   
 [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md)   
 [_dupenv_s, _wdupenv_s](../../c-runtime-library/reference/dupenv-s-wdupenv-s.md)