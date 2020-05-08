---
title: _dupenv_s, _wdupenv_s
ms.date: 4/2/2020
api_name:
- _dupenv_s
- _wdupenv_s
- _o__dupenv_s
- _o__wdupenv_s
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- tdupenv_s
- _dupenv_s
- wdupenv_s
- dupenv_s
- _tdupenv_s
- _wdupenv_s
helpviewer_keywords:
- _dupenv_s function
- _tdupenv_s function
- _wdupenv_s function
- environment variables
- wdupenv_s function
- dupenv_s function
- tdupenv_s function
ms.assetid: b729ecc2-a31d-4ccf-92a7-5accedb8f8c8
ms.openlocfilehash: 39184eff5db511dfb920782c3e29bf2b0cc9340e
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82915188"
---
# <a name="_dupenv_s-_wdupenv_s"></a>_dupenv_s, _wdupenv_s

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

*VarName*<br/>
Nome della variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Zero se eseguita correttamente, un codice di errore se non eseguita correttamente.

Queste funzioni convalidano i relativi parametri. Se *buffer* o *VarName* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano **errno** su **EINVAL** e restituiscono **EINVAL**.

Se queste funzioni non sono in grado di allocare memoria sufficiente, il *buffer* viene impostato su **null** e *NumberOfElements* su 0 e viene restituito **ENOMEM**.

## <a name="remarks"></a>Osservazioni

La funzione **_dupenv_s** Cerca nell'elenco delle variabili di ambiente per *VarName*. Se la variabile viene trovata, **_dupenv_s** alloca un buffer e copia il valore della variabile nel buffer. L'indirizzo e la lunghezza del buffer vengono restituiti in *buffer* e *NumberOfElements*. Allocando il buffer stesso, **_dupenv_s** rappresenta un'alternativa più comoda per [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md).

> [!NOTE]
> È responsabilità del programma chiamante liberare la memoria chiamando [free](free.md).

Se la variabile non viene trovata, il *buffer* viene impostato su **null**, *NumberOfElements* è impostato su 0 e il valore restituito è 0 perché questa situazione non viene considerata una condizione di errore.

Se non si è interessati alla dimensione del buffer, è possibile passare **null** per *NumberOfElements*.

**_dupenv_s** non fa distinzione tra maiuscole e minuscole nel sistema operativo Windows. **_dupenv_s** usa la copia dell'ambiente a cui fa riferimento la variabile globale **_environ** per accedere all'ambiente. Per una descrizione dei **_environ**, vedere la sezione osservazioni in [getenv_s _wgetenv_s](getenv-s-wgetenv-s.md) .

Il valore in *buffer* è una copia del valore della variabile di ambiente. la modifica non ha alcun effetto sull'ambiente. Per modificare il valore di una variabile di ambiente, usare la funzione [_putenv_s, _wputenv_s](putenv-s-wputenv-s.md).

**_wdupenv_s** è una versione a caratteri wide di **_dupenv_s**; gli argomenti di **_wdupenv_s** sono stringhe a caratteri wide. La **_wenviron** variabile globale è una versione a caratteri wide di **_environ**. Per altre informazioni su **_wenviron**, vedere le note in [getenv_s _wgetenv_s](getenv-s-wgetenv-s.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tdupenv_s**|**_dupenv_s**|**_dupenv_s**|**_wdupenv_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_dupenv_s**|\<stdlib.h>|
|**_wdupenv_s**|\<stdlib.h> o \<wchar.h>|

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

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[Costanti ambientali](../../c-runtime-library/environmental-constants.md)<br/>
[_dupenv_s_dbg, _wdupenv_s_dbg](dupenv-s-dbg-wdupenv-s-dbg.md)<br/>
[getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md)<br/>
[_putenv_s, _wputenv_s](putenv-s-wputenv-s.md)<br/>
