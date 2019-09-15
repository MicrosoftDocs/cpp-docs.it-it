---
title: strerror, _strerror, _wcserror, __wcserror
ms.date: 11/04/2016
api_name:
- strerror
- _strerror
- _wcserror
- __wcserror
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
- __sys_errlist
- wcserror
- _strerror
- __wcserror
- strerror
- __sys_nerr
- _tcserror
- _wcserror
- tcserror
helpviewer_keywords:
- strerror function
- _strerror function
- __sys_errlist
- wcserror function
- error messages, printing
- __sys_nerr
- tcserror function
- printing error messages
- _wcserror function
- _tcserror function
- __wcserror function
- error messages, getting
ms.assetid: 27b72255-f627-43c0-8836-bcda8b003e14
ms.openlocfilehash: 0b4d70687bc2f428162d035c80d6bc8525a8fb9e
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70958139"
---
# <a name="strerror-_strerror-_wcserror-__wcserror"></a>strerror, _strerror, _wcserror, __wcserror

Ottiene una stringa del messaggio di errore di sistema (**strerror**, **wcserror**) o formatta una stringa del messaggio di errore fornita dall'utente ( **_strerror**, **__wcserror**). Sono disponibili versioni più sicure di queste funzioni. Vedere [strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](strerror-s-strerror-s-wcserror-s-wcserror-s.md).

## <a name="syntax"></a>Sintassi

```C
char *strerror(
   int errnum
);
char *_strerror(
   const char *strErrMsg
);
wchar_t * _wcserror(
   int errnum
);
wchar_t * __wcserror(
   const wchar_t *strErrMsg
);
```

### <a name="parameters"></a>Parametri

*errnum*<br/>
Numero errore.

*strErrMsg*<br/>
Messaggio fornito dall'utente.

## <a name="return-value"></a>Valore restituito

Tutte queste funzioni restituiscono un puntatore alla stringa del messaggio di errore. Le chiamate successive possono sovrascrivere la stringa.

## <a name="remarks"></a>Note

La funzione **strerror** esegue il mapping di *errnum* a una stringa di messaggio di errore e restituisce un puntatore alla stringa. Né **strerror** né **_strerror** stampano effettivamente il messaggio: A tale proposito, è necessario chiamare una funzione di output, ad esempio [fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md):

```C
if (( _access( "datafile",2 )) == -1 )
   fprintf( stderr, _strerror(NULL) );
```

Se *strErrMsg* viene passato come **null**, **_strerror** restituisce un puntatore a una stringa che contiene il messaggio di errore di sistema per l'ultima chiamata di libreria che ha generato un errore. La stringa del messaggio di errore termina con il carattere di nuova riga ("\n"). Se *strErrMsg* è diverso da **null**, **_strerror** restituisce un puntatore a una stringa che contiene (in ordine) il messaggio della stringa, i due punti, uno spazio, il messaggio di errore di sistema per l'ultima chiamata di libreria che produce un errore e una nuova riga carattere. La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.

Il numero di errore effettivo per **_strerror** viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Per produrre risultati accurati, chiamare **_strerror** immediatamente dopo la restituzione di una routine di libreria con un errore. In caso contrario, le chiamate successive a **strerror** o **_strerror** possono sovrascrivere il valore **errno** .

**wcserror** e **__wcserror** sono rispettivamente versioni a caratteri wide di **strerror** e **_strerror**.

**_strerror**, **wcserror**e **__wcserror** non fanno parte della definizione ANSI; si tratta di estensioni Microsoft e si consiglia di non utilizzarle per il codice portabile. Per la compatibilità ANSI, usare invece **strerror** .

Per ottenere le stringhe di errore, è consigliabile usare **strerror** o **wcserror** anziché le macro deprecate [_sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e [_sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e le funzioni interne deprecate **__sys_errlist** e **__sys_nerr**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcserror**|**strerror**|**strerror**|**_wcserror**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strerror**|\<string.h>|
|**_strerror**|\<string.h>|
|**_wcserror**, **__wcserror**|\<string.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [perror](perror-wperror.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
