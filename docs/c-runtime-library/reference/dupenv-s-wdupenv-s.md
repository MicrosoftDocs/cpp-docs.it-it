---
title: _dupenv_s, _wdupenv_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _dupenv_s
- _wdupenv_s
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
- tdupenv_s
- _dupenv_s
- wdupenv_s
- dupenv_s
- _tdupenv_s
- _wdupenv_s
dev_langs:
- C++
helpviewer_keywords:
- _dupenv_s function
- _tdupenv_s function
- _wdupenv_s function
- environment variables
- wdupenv_s function
- dupenv_s function
- tdupenv_s function
ms.assetid: b729ecc2-a31d-4ccf-92a7-5accedb8f8c8
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0e2a89679c8ca564236e1c9d1eccfee274eb4116
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="dupenvs-wdupenvs"></a>_dupenv_s, _wdupenv_s

Ottiene un valore dall'ambiente corrente.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _dupenv_s(
   char **buffer,
   size_t *numberOfElements,
   const char *varname
);
errno_t _wdupenv_s(
   wchar_t **buffer,
   size_t *numberOfElements,
   const wchar_t *varname
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Buffer per l'archiviazione del valore della variabile.

*numberOfElements*<br/>
Dimensioni del *buffer*.

*varname*<br/>
Nome della variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Zero se eseguita correttamente, un codice di errore se non eseguita correttamente.

Queste funzioni convalidano i relativi parametri; Se *buffer* oppure *varname* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

Se queste funzioni non è possibile allocare memoria sufficiente, impostano *buffer* alla **NULL** e *numberOfElements* su 0, quindi restituiscono **ENOMEM**.

## <a name="remarks"></a>Note

Il **dupenv_s** funzione Cerca nell'elenco delle variabili di ambiente per *varname*. Se la variabile viene trovata, **dupenv_s** alloca un buffer e copia il valore della variabile nel buffer. Indirizzo e la lunghezza del buffer vengono restituiti in *buffer* e *numberOfElements*. Allocando lo stesso, buffer **dupenv_s** costituisce un'alternativa più comoda [getenv_s, wgetenv_s](getenv-s-wgetenv-s.md).

> [!NOTE]
> È responsabilità del programma chiamante liberare la memoria chiamando [free](free.md).

Se la variabile non viene trovata, quindi *buffer* è impostata su **NULL**, *numberOfElements* è impostato su 0, e il valore restituito è 0 poiché questa situazione non viene considerata come un errore condizione.

Se non si è interessati nelle dimensioni del buffer è possibile passare **NULL** per *numberOfElements*.

**dupenv_s** non distinzione maiuscole / minuscole nel sistema operativo Windows. **dupenv_s** Usa la copia dell'ambiente puntato dalla variabile globale **Environ** per accedere all'ambiente. Vedere la sezione Osservazioni in [getenv_s, wgetenv_s](getenv-s-wgetenv-s.md) per una discussione sulle **Environ**.

Il valore in *buffer* è una copia del valore della variabile di ambiente; modificarlo non ha alcun effetto sull'ambiente. Per modificare il valore di una variabile di ambiente, usare la funzione [_putenv_s, _wputenv_s](putenv-s-wputenv-s.md).

**wdupenv_s** è una versione a caratteri wide **dupenv_s**; gli argomenti del **wdupenv_s** sono stringhe a caratteri "wide". Il **wenviron** (variabile globale) è una versione a caratteri "wide" **Environ**. Vedere la sezione Osservazioni in [getenv_s, wgetenv_s](getenv-s-wgetenv-s.md) per altre informazioni sui **wenviron**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tdupenv_s**|**_dupenv_s**|**_dupenv_s**|**_wdupenv_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_dupenv_s**|\<stdlib.h>|
|**_wdupenv_s**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_dupenv_s.c
#include  <stdlib.h>

int main( void )
{
   char *pValue;
   size_t len;
   errno_t err = _dupenv_s( &pValue, &len, "pathext" );
   if ( err ) return -1;
   printf( "pathext = %s\n", pValue );
   free( pValue );
   err = _dupenv_s( &pValue, &len, "nonexistentvariable" );
   if ( err ) return -1;
   printf( "nonexistentvariable = %s\n", pValue );
   free( pValue ); // It's OK to call free with NULL
}
```

```Output
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl
nonexistentvariable = (null)
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Costanti di ambiente](../../c-runtime-library/environmental-constants.md)<br/>
[_dupenv_s_dbg, _wdupenv_s_dbg](dupenv-s-dbg-wdupenv-s-dbg.md)<br/>
[getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md)<br/>
[_putenv_s, _wputenv_s](putenv-s-wputenv-s.md)<br/>
