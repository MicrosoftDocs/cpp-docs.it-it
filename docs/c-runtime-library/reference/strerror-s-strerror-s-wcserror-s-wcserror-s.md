---
title: strerror_s, _strerror_s, _wcserror_s, __wcserror_s
ms.date: 11/04/2016
apiname:
- __wcserror_s
- _strerror_s
- _wcserror_s
- strerror_s
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wcserror_s
- __wcserror_s
- _tcserror_s
- _wcserror_s
- tcserror_s
- strerror_s
- _strerror_s
helpviewer_keywords:
- __wcserror_s function
- error messages, printing
- tcserror_s function
- printing error messages
- strerror_s function
- _wcserror_s function
- _tcserror_s function
- _strerror_s function
- wcserror_s function
- error messages, getting
ms.assetid: 9e5b15a0-efe1-4586-b7e3-e1d7c31a03d6
ms.openlocfilehash: 00ff9d0df1a78d07eaa509201fb998b30396cc4c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429640"
---
# <a name="strerrors-strerrors-wcserrors-wcserrors"></a>strerror_s, _strerror_s, _wcserror_s, __wcserror_s

Ottiene un messaggio di errore di sistema (**strerror_s**, **wcserror_s**) o stampa un messaggio di errore fornito dall'utente (**strerror_s**, **wcserror_s** ). Queste sono versioni di [strerror, _strerror, _wcserror, \__wcserror](strerror-strerror-wcserror-wcserror.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t strerror_s(
   char *buffer,
   size_t numberOfElements,
   int errnum
);
errno_t _strerror_s(
   char *buffer,
   size_t numberOfElements,
   const char *strErrMsg
);
errno_t _wcserror_s(
   wchar_t *buffer,
   size_t numberOfElements,
   int errnum
);
errno_t __wcserror_s(
   wchar_t *buffer,
   size_t numberOfElements,
   const wchar_t *strErrMsg
);
template <size_t size>
errno_t strerror_s(
   char (&buffer)[size],
   int errnum
); // C++ only
template <size_t size>
errno_t _strerror_s(
   char (&buffer)[size],
   const char *strErrMsg
); // C++ only
template <size_t size>
errno_t _wcserror_s(
   wchar_t (&buffer)[size],
   int errnum
); // C++ only
template <size_t size>
errno_t __wcserror_s(
   wchar_t (&buffer)[size],
   const wchar_t *strErrMsg
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Buffer contenente la stringa di errore.

*numberOfElements*<br/>
Dimensioni del buffer.

*errnum*<br/>
Numero errore.

*strErrMsg*<br/>
Messaggio fornito dall'utente.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

### <a name="error-condtions"></a>Condizioni di errore

|*buffer*|*numberOfElements*|*strErrMsg*|Contenuto di *buffer*|
|--------------|------------------------|-----------------|--------------------------|
|**NULL**|qualsiasi|qualsiasi|N/D|
|qualsiasi|0|qualsiasi|non modificato|

## <a name="remarks"></a>Note

Il **strerror_s** funzione mappe *errnum* a una stringa di messaggio di errore, restituendo la stringa nella *buffer*. **strerror_s** non accetta il numero di errore, viene usato il valore corrente di **errno** per determinare il messaggio appropriato. Né **strerror_s** né **strerror_s** stampano effettivamente il messaggio: A tal fine, è necessario chiamare una funzione di output, ad esempio [fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md):

```C
if (( _access( "datafile",2 )) == -1 )
{
   _strerror_s(buffer, 80);
   fprintf( stderr, buffer );
}
```

Se *strErrMsg* viene **NULL**, **strerror_s** restituisce una stringa in *buffer* contenente il messaggio di errore di sistema per l'ultima chiamata della libreria che ha generato un errore. La stringa del messaggio di errore termina con il carattere di nuova riga ("\n"). Se *strErrMsg* non è uguale a **NULL**, quindi **strerror_s** restituisce una stringa in *buffer* contenente (in ordine) il messaggio della stringa, un i due punti, uno spazio, il messaggio di errore di sistema per l'ultima chiamata della libreria che ha generato un errore e un carattere di nuova riga. La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.

Queste funzioni troncano il messaggio di errore se la lunghezza eccede *numberOfElements* -1. La stringa risultante nel *buffer* sono sempre con terminazione null.

Il numero di errore effettivo per **strerror_s** viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). I messaggi di errore di sistema sono accessibili tramite la variabile [sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), ovvero una matrice dei messaggi ordinati in base al numero di errore. **strerror_s** accede al messaggio di errore appropriato usando il **errno** valore come indice per la variabile **sys_errlist**. Il valore della variabile [sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene definito come il numero massimo di elementi nel **sys_errlist** matrice. Per risultati accurati, chiamare **strerror_s** immediatamente dopo una routine di libreria restituisce un errore. In caso contrario, le chiamate successive a **strerror_s** oppure **strerror_s** può sovrascrivere il **errno** valore.

**wcserror_s** e **wcserror_s** sono versioni a caratteri wide di **strerror_s** e **strerror_s**, rispettivamente.

Queste funzioni convalidano i relativi parametri. Se il buffer è **NULL** o se il parametro delle dimensioni è 0, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL**.

**strerror_s**, **wcserror_s**, e **wcserror_s** non fanno parte della definizione ANSI ma sono estensioni Microsoft a esso. Non utilizzarli dove si desidera la portabilità; Per garantire la compatibilità ANSI, usare **strerror_s** invece.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcserror_s**|**strerror_s**|**strerror_s**|**_wcserror_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strerror_s**, **strerror_s**|\<string.h>|
|**wcserror_s**, **wcserror_s**|\<string.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [perror](perror-wperror.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
