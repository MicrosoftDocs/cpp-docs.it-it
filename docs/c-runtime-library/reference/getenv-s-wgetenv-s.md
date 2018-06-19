---
title: getenv_s, _wgetenv_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 144c8d1d05d40f17e37f337902bbd2ee2cf15458
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32405169"
---
# <a name="getenvs-wgetenvs"></a>getenv_s, _wgetenv_s

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

Alcune di queste condizioni di errore richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

Inoltre, se il buffer è troppo piccolo, queste funzioni restituiscono **ERANGE**. Non invocano un gestore di parametro non valido. Scrivono le dimensioni del buffer necessarie in *pReturnValue*e pertanto consentono ai programmi chiamare la funzione con un buffer più grande.

## <a name="remarks"></a>Note

Il **getenv_s** funzione Cerca nell'elenco delle variabili di ambiente per *varname*. **getenv_s** non distinzione maiuscole / minuscole nel sistema operativo Windows. **getenv_s** e [putenv_s](putenv-s-wputenv-s.md) usano la copia dell'ambiente a cui viene fatto riferimento tramite la variabile globale **Environ** per accedere all'ambiente. **getenv_s** funziona solo nelle strutture dati che sono accessibili per la libreria run-time e non sul "segmento" che viene creato per il processo dal sistema operativo dell'ambiente. Pertanto, i programmi che usano il *envp* argomento [principale](../../cpp/main-program-startup.md) o [wmain](../../cpp/main-program-startup.md) possono recuperare informazioni non valide.

**wgetenv_s** è una versione a caratteri wide **getenv_s**; l'argomento e il valore restituito di **wgetenv_s** sono stringhe a caratteri "wide". Il **wenviron** (variabile globale) è una versione a caratteri "wide" **Environ**.

In un programma MBCS (ad esempio, in un programma ASCII SBCS), **wenviron** inizialmente **NULL** perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a [wputenv](putenv-wputenv.md), o alla prima chiamata a **wgetenv_s**, se esiste già un ambiente (MBCS), un ambiente di stringa di caratteri wide corrispondente viene creato e quindi punta a **wenviron**.

Allo stesso modo in un formato Unicode (**_wmain**), programma **Environ** inizialmente **NULL** perché l'ambiente è costituito da stringhe di caratteri "wide". Quindi, alla prima chiamata a [putenv](putenv-wputenv.md), o alla prima chiamata a **getenv_s** se esiste già un ambiente (Unicode), un ambiente MBCS corrispondente viene creato e quindi a cui punta **_ Environ**.

Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve gestire entrambe le copie, con conseguente esecuzione più lenta. Ad esempio, quando si chiama **putenv**, una chiamata a **wputenv** anche viene eseguita automaticamente in modo che le due stringhe dell'ambiente corrispondano.

> [!CAUTION]
> In rare occasioni, quando il sistema runtime gestisce sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Ciò è dovuto al fatto che, sebbene ogni stringa univoca con caratteri multibyte viene mappata in una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è sempre univoco. Per altre informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Il **putenv_s** e **_getenv_s** famiglie di funzioni non sono thread-safe. **_getenv_s** potrebbe restituire un puntatore di stringa mentre **putenv_s** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

In C++ l'utilizzo di queste funzioni viene semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente eliminando la necessità di specificare un argomento per la dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tgetenv_s**|**getenv_s**|**getenv_s**|**_wgetenv_s**|

Per controllare o modificare il valore di **TZ** uso delle variabili, ambiente **getenv_s**, **putenv**, e **tzset**come richiesto. Per ulteriori informazioni **TZ**, vedere [tzset](tzset.md) e [Daylight, _dstbias, TimeZone e tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getenv_s**|\<stdlib.h>|
|**_wgetenv_s**|\<stdlib.h> or \<wchar.h>|

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
