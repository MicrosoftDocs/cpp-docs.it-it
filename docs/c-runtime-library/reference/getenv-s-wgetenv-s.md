---
title: getenv_s, _wgetenv_s
description: Descrive le funzioni della libreria di runtime Microsoft C getenv_s e _wgetenv_s.
ms.date: 01/15/2020
api_name:
- getenv_s
- _wgetenv_s
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- getenv_s
- _tgetenv_s
- _wgetenv_s
helpviewer_keywords:
- _tgetenv_s function
- wgetenv_s function
- _wgetenv_s function
- getenv_s function
- environment variables
- tgetenv_s function
ms.assetid: c3ae1ffe-d4cd-4bae-bcb1-3afa754c613a
no-loc:
- getenv_s
- _wgetenv_s
- _putenv_s
- main
- wmain
- errno
- EINVAL
- ERANGE
- _environ
- _wenviron
- _putenv
- _wputenv
- _tgetenv_s
- _tzset
- _dupenv_s
- _wdupenv_s
ms.openlocfilehash: 1eb0adc8c92f1133fd929b9d877b2526c042855f
ms.sourcegitcommit: e93f3e6a110fe38bc642055bdf4785e620d4220f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2020
ms.locfileid: "76124007"
---
# <a name="opno-locgetenv_s-opno-loc_wgetenv_s"></a>getenv_s, _wgetenv_s

Ottiene un valore dall'ambiente corrente. Queste versioni di [getenv, _wgetenv](getenv-wgetenv.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
La dimensione del buffer richiesta oppure 0 se la variabile non viene trovata.

*buffer*<br/>
Buffer per archiviare il valore della variabile di ambiente.

*numberOfElements*<br/>
Dimensioni del *buffer*.

*varname*<br/>
Nome della variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario un codice di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*pReturnValue*|*buffer*|*numberOfElements*|*varname*|Valore restituito|
|--------------------|--------------|------------------------|---------------|------------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|
|qualsiasi|**NULL**|>0|qualsiasi|**EINVAL**|
|qualsiasi|qualsiasi|qualsiasi|**NULL**|**EINVAL**|

Alcune di queste condizioni di errore richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano **errno** **EINVAL** e restituiscono **EINVAL** .

Inoltre, se il buffer è troppo piccolo, queste funzioni restituiscono **ERANGE** . Non invocano un gestore di parametro non valido. Scrivono le dimensioni del buffer richieste in *pReturnValue*e quindi consentono ai programmi di chiamare nuovamente la funzione con un buffer più grande.

## <a name="remarks"></a>Note

La funzione **getenv_s** Cerca nell'elenco delle variabili di ambiente per *VarName*. **getenv_s** non fa distinzione tra maiuscole e minuscole nel sistema operativo Windows. **getenv_s** e [_putenv_s](putenv-s-wputenv-s.md) utilizzare la copia dell'ambiente a cui punta la variabile globale **_environ** per accedere all'ambiente. **getenv_s** funziona solo sulle strutture di dati accessibili dalla libreria di runtime e non sul "segmento" dell'ambiente creato per il processo dal sistema operativo. Pertanto, i programmi che usano l'argomento *envp* per [main](../../cpp/main-function-command-line-args.md) o [wmain](../../cpp/main-function-command-line-args.md) potrebbero recuperare informazioni non valide.

**_wgetenv_s** è una versione a caratteri wide di **getenv_s** ; l'argomento e il valore restituito di **_wgetenv_s** sono stringhe a caratteri wide. La **_wenviron** variabile globale è una versione a caratteri wide di **_environ** .

In un programma MBCS (ad esempio, in un programma ASCII SBCS), **_wenviron** inizialmente è **null** perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a [_wputenv](putenv-wputenv.md)o alla prima chiamata a **_wgetenv_s** se un ambiente (MBCS) esiste già, viene creato un ambiente di stringhe di caratteri wide corrispondente a cui viene fatto riferimento da **_wenviron** .

Analogamente, in un programma Unicode ( **_wmain**), **_environ** inizialmente è **null** perché l'ambiente è costituito da stringhe di caratteri wide. Quindi, alla prima chiamata a [_putenv](putenv-wputenv.md)o alla prima chiamata a **getenv_s** se un ambiente (Unicode) esiste già, viene creato un ambiente MBCS corrispondente a cui viene fatto riferimento da **_environ** .

Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve gestire entrambe le copie, con conseguente esecuzione più lenta. Ad esempio, quando si chiama **_putenv** , viene eseguita automaticamente anche una chiamata a **_wputenv** in modo che le due stringhe di ambiente corrispondano.

> [!CAUTION]
> In rare occasioni, quando il sistema runtime gestisce sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Ciò è dovuto al fatto che, sebbene ogni stringa univoca con caratteri multibyte viene mappata in una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è sempre univoco. Per ulteriori informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Le famiglie di funzioni **_putenv_s** e **_getenv_s** non sono thread-safe. **_getenv_s** possibile restituire un puntatore di stringa mentre **_putenv_s** modifica la stringa e causare quindi errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

In C++ l'utilizzo di queste funzioni viene semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente eliminando la necessità di specificare un argomento per la dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tgetenv_s**|**getenv_s**|**getenv_s**|**_wgetenv_s**|

Per controllare o modificare il valore della variabile di ambiente **TZ** , usare **getenv_s** , **_putenv** e **_tzset** come richiesto. Per ulteriori informazioni su **TZ**, vedere [_tzset](tzset.md) e [_daylight, _dstbias, _timezone e _tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).

## <a name="requirements"></a>Requisiti di

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getenv_s**|\<stdlib.h>|
|**_wgetenv_s**|\<stdlib.h> o \<wchar.h>|

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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Costanti di ambiente](../../c-runtime-library/environmental-constants.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
[_dupenv_s, _wdupenv_s](dupenv-s-wdupenv-s.md)<br/>
