---
title: getenv, _wgetenv
description: Vengono descritti le funzioni getenv _wgetenv e la libreria di runtime di Microsoft C.
ms.date: 4/2/2020
api_name:
- getenv
- _wgetenv
- _o__wgetenv
- _o_getenv
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wgetenv
- getenv
- _tgetenv
helpviewer_keywords:
- getenv function
- tgetenv function
- wgetenv function
- environment values
- environment variables
- _tgetenv function
- _wgetenv function
ms.assetid: 3b9cb9ab-a126-4e0e-a44f-6c5a7134daf4
no-loc:
- getenv
- _wgetenv
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
ms.openlocfilehash: c9d7f7e1a2c5d6b15aee2f7f972a30cc0c90115c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81344258"
---
# <a name="getenv-_wgetenv"></a>getenv, _wgetenv

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

*Varname*<br/>
Nome della variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla voce della tabella di ambiente contenente *varname*. Non è sicuro modificare il valore della variabile di ambiente utilizzando il puntatore restituito. Utilizzare la funzione [_putenv](putenv-wputenv.md) per modificare il valore di una variabile di ambiente. Il valore restituito è **NULL** se *varname* non viene trovato nella tabella di ambiente.

## <a name="remarks"></a>Osservazioni

La funzione **getenv** cerca nell'elenco delle variabili di ambiente per *varname*. **getenv** non fa distinzione tra maiuscole e minuscole nel sistema operativo Windows. **getenv** e **_putenv** utilizzano la copia dell'ambiente a cui fa riferimento la variabile globale **_environ** per accedere all'ambiente. **getenv** opera solo sulle strutture di dati accessibili alla libreria di runtime e non sul "segmento" dell'ambiente creato per il processo dal sistema operativo. Pertanto, i programmi che utilizzano l'argomento *envp* per [main](../../cpp/main-function-command-line-args.md) o [wmain](../../cpp/main-function-command-line-args.md) possono recuperare informazioni non valide.

Se *varname* è **NULL**, questa funzione richiama un gestore di parametri non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **NULL**.

**_wgetenv** è una versione a caratteri wide di **getenv**; l'argomento e il valore restituito di **_wgetenv** sono stringhe di caratteri wide. La variabile globale **_wenviron** è una versione a caratteri wide di **_environ**.

In un programma MBCS (ad esempio, in un programma ASCII SBCS), **_wenviron** è inizialmente **NULL** perché l'ambiente è costituito da stringhe di caratteri multibyte. Quindi, alla prima chiamata a [_wputenv](putenv-wputenv.md)o alla prima chiamata a **_wgetenv** se esiste già un ambiente (MBCS), viene creato un ambiente di stringhe a caratteri wide corrispondente a cui viene fatto riferimento **da _wenviron**.

Analogamente in un programma Unicode (**_wmain**), **_environ** è inizialmente **NULL** perché l'ambiente è costituito da stringhe a caratteri wide. Quindi, alla prima chiamata a **_putenv**, o alla prima chiamata a **getenv** se esiste già un ambiente (Unicode), viene creato un ambiente MBCS corrispondente a cui viene fatto riferimento **_environ**.

Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve mantenere entrambe le copie, implicando tempi di esecuzione più lenti. Ad esempio, ogni volta che si chiama **_putenv**, viene eseguita automaticamente anche una chiamata a **_wputenv,** in modo che le due stringhe di ambiente corrispondano.

> [!CAUTION]
> In rare occasioni, quando il sistema runtime mantiene sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Questo si verifica perché, sebbene ogni stringa univoca di caratteri multibyte esegua il mapping a una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è necessariamente univoco. Per altre informazioni, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Le famiglie di funzioni **_putenv** e **_getenv** non sono thread-safe. **_getenv** potrebbe restituire un puntatore di stringa mentre **_putenv** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tgetenv**|**getenv**|**getenv**|**_wgetenv**|

Per controllare o modificare il valore della variabile di ambiente **T,** utilizzare **getenv**, **_putenv** e **_tzset** in base alle esigenze. Per ulteriori informazioni su **T**, vedere [_tzset](tzset.md) e [_daylight, fuso orario e _tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getenv**|\<stdlib.h>|
|**_wgetenv**|\<stdlib.h> o \<wchar.h>|

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

[Controllo dei processi e dell'ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
[Costanti di ambiente](../../c-runtime-library/environmental-constants.md)<br/>
