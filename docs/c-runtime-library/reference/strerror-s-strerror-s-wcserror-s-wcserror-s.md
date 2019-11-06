---
title: strerror_s, _strerror_s, _wcserror_s, __wcserror_s
ms.date: 11/04/2016
api_name:
- __wcserror_s
- _strerror_s
- _wcserror_s
- strerror_s
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 74caba0398fdb5cdd0f9c80270a42d2903200a5d
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73625814"
---
# <a name="strerror_s-_strerror_s-_wcserror_s-__wcserror_s"></a>strerror_s, _strerror_s, _wcserror_s, __wcserror_s

Ottenere un messaggio di errore di sistema (**strerror_s**, **_wcserror_s**) o stampare un messaggio di errore fornito dall'utente ( **_strerror_s**, **__wcserror_s**). Queste sono versioni di [strerror, _strerror, _wcserror, \__wcserror](strerror-strerror-wcserror-wcserror.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

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

|*buffer*|*numberOfElements*|*strErrMsg*|Contenuto del *buffer*|
|--------------|------------------------|-----------------|--------------------------|
|**NULL**|any|any|N/D|
|any|0|any|non modificato|

## <a name="remarks"></a>Note

La funzione **strerror_s** esegue il mapping di *errnum* a una stringa di messaggio di errore, restituendo la stringa nel *buffer*. **_strerror_s** non accetta il numero di errore. Usa il valore corrente di **errno** per determinare il messaggio appropriato. Né **strerror_s** né **_strerror_s** stampano effettivamente il messaggio. a tale proposito, è necessario chiamare una funzione di output, ad esempio [fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md):

```C
if (( _access( "datafile",2 )) == -1 )
{
   _strerror_s(buffer, 80);
   fprintf( stderr, buffer );
}
```

Se *strErrMsg* è **null**, **_strerror_s** restituisce una stringa nel *buffer* contenente il messaggio di errore di sistema per l'ultima chiamata di libreria che ha generato un errore. La stringa del messaggio di errore termina con il carattere di nuova riga ("\n"). Se *strErrMsg* è diverso da **null**, **_strerror_s** restituisce una stringa nel *buffer* contenente (nell'ordine) il messaggio della stringa, i due punti, uno spazio, il messaggio di errore di sistema per l'ultima chiamata di libreria che produce un errore e una nuova riga carattere. La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.

Queste funzioni troncano il messaggio di errore se la relativa lunghezza supera *NumberOfElements* -1. La stringa risultante nel *buffer* è sempre con terminazione null.

Il numero di errore effettivo per **_strerror_s** viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). I messaggi di errore di sistema sono accessibili tramite la variabile [sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), ovvero una matrice dei messaggi ordinati in base al numero di errore. **_strerror_s** accede al messaggio di errore appropriato utilizzando il valore **errno** come indice della variabile **_sys_errlist**. Il valore della variabile [_sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è definito come il numero massimo di elementi nella matrice **_sys_errlist** . Per produrre risultati accurati, chiamare **_strerror_s** immediatamente dopo la restituzione di una routine di libreria con un errore. In caso contrario, le chiamate successive a **strerror_s** o **_strerror_s** possono sovrascrivere il valore **errno** .

**_wcserror_s** e **__wcserror_s** sono rispettivamente versioni a caratteri wide di **strerror_s** e **_strerror_s**.

Queste funzioni convalidano i relativi parametri. Se il buffer è **null** o se il parametro size è 0, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e impostano **errno** su **EINVAL**.

**_strerror_s**, **_wcserror_s**e **__wcserror_s** non fanno parte della definizione ANSI ma sono estensioni Microsoft. Non usarli per la portabilità desiderata; per la compatibilità ANSI, usare invece **strerror_s** .

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcserror_s**|**strerror_s**|**strerror_s**|**_wcserror_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strerror_s**, **_strerror_s**|\<string.h>|
|**_wcserror_s**, **__wcserror_s**|\<string.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [perror](perror-wperror.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
