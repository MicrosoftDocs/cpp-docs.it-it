---
title: getenv, _wgetenv | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a2e68ca55d9e33995df583719e4797a6880d34ca
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32403986"
---
# <a name="getenv-wgetenv"></a>getenv, _wgetenv

Ottiene un valore dall'ambiente corrente. Sono disponibili versioni più sicure di queste funzioni. Vedere [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *getenv(
   const char *varname
);
wchar_t *_wgetenv(
   const wchar_t *varname
);
```

### <a name="parameters"></a>Parametri

*varname*<br/>
Nome della variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla voce di tabella ambiente contenente *varname*. Non è sicuro modificare il valore della variabile di ambiente utilizzando il puntatore restituito. Usare la [putenv](putenv-wputenv.md) funzione per modificare il valore di una variabile di ambiente. Il valore restituito sarà **NULL** se *varname* non viene trovato nella tabella dell'ambiente.

## <a name="remarks"></a>Note

Il **getenv** funzione Cerca nell'elenco delle variabili di ambiente per *varname*. **getenv** non distinzione maiuscole / minuscole nel sistema operativo Windows. **getenv** e **putenv** usano la copia dell'ambiente puntato dalla variabile globale **Environ** per accedere all'ambiente. **getenv** funziona solo nelle strutture dati accessibili alla libreria di runtime e non sul "segmento" creato per il processo dal sistema operativo dell'ambiente. Pertanto, i programmi che usano il *envp* argomento [principale](../../cpp/main-program-startup.md) o [wmain](../../cpp/main-program-startup.md) può recuperare informazioni non valide.

Se *varname* viene **NULL**, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **NULL**.

**wgetenv** è una versione a caratteri wide **getenv**; l'argomento e il valore restituito di **wgetenv** sono stringhe a caratteri "wide". Il **wenviron** (variabile globale) è una versione a caratteri "wide" **Environ**.

In un programma MBCS (ad esempio, in un programma ASCII SBCS), **wenviron** inizialmente **NULL** perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a [wputenv](putenv-wputenv.md), o alla prima chiamata a **wgetenv** se esiste già un ambiente (MBCS), un ambiente di stringa di caratteri wide corrispondente viene creato e quindi a cui punta **wenviron**.

Allo stesso modo in un formato Unicode (**_wmain**), programma **Environ** inizialmente **NULL** perché l'ambiente è costituito da stringhe di caratteri "wide". Quindi, alla prima chiamata a **putenv**, o alla prima chiamata a **getenv** se esiste già un ambiente (Unicode), un ambiente MBCS corrispondente viene creato e quindi a cui punta **_ Environ**.

Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve mantenere entrambe le copie, implicando tempi di esecuzione più lenti. Ad esempio, ogni volta che è possibile chiamare **putenv**, una chiamata a **wputenv** anche viene eseguita automaticamente, in modo che le due stringhe dell'ambiente corrispondano.

> [!CAUTION]
> In rare occasioni, quando il sistema runtime mantiene sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Questo si verifica perché, sebbene ogni stringa univoca di caratteri multibyte esegua il mapping a una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è necessariamente univoco. Per altre informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Il **putenv** e **_getenv** famiglie di funzioni non sono thread-safe. **_getenv** potrebbe restituire un puntatore di stringa mentre **putenv** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tgetenv**|**getenv**|**getenv**|**_wgetenv**|

Per controllare o modificare il valore di **TZ** uso delle variabili, ambiente **getenv**, **putenv** e **tzset** in base alle esigenze. Per ulteriori informazioni **TZ**, vedere [tzset](tzset.md) e [Daylight, timezone e tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getenv**|\<stdlib.h>|
|**_wgetenv**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
[Costanti di ambiente](../../c-runtime-library/environmental-constants.md)<br/>
