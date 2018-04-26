---
title: strerror, _strerror, _wcserror, __wcserror | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- strerror
- _strerror
- _wcserror
- __wcserror
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
- __sys_errlist
- wcserror
- _strerror
- __wcserror
- strerror
- __sys_nerr
- _tcserror
- _wcserror
- tcserror
dev_langs:
- C++
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
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 91b2460019d437f91b17f7aabc8522da53f6a61a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="strerror-strerror-wcserror-wcserror"></a>strerror, _strerror, _wcserror, __wcserror

Ottiene una stringa di messaggio di errore di sistema (**strerror**, **wcserror**) o formatta una stringa di messaggio di errore fornito dall'utente (**strerror**, **wcserror**). Sono disponibili versioni più sicure di queste funzioni. Vedere [strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](strerror-s-strerror-s-wcserror-s-wcserror-s.md).

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

Il **strerror** funzione mappe *errnum* su una stringa di messaggio di errore e restituisce un puntatore alla stringa. Né **strerror** né **strerror** effettivamente stampa il messaggio: tale scopo, è necessario chiamare una funzione di output, ad esempio [fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md):

```C
if (( _access( "datafile",2 )) == -1 )
   fprintf( stderr, _strerror(NULL) );
```

Se *strErrMsg* viene passato come **NULL**, **strerror** restituisce un puntatore a una stringa che contiene il messaggio di errore di sistema per l'ultima chiamata della libreria che ha causato un errore. La stringa del messaggio di errore termina con il carattere di nuova riga ("\n"). Se *strErrMsg* non è uguale a **NULL**, quindi **strerror** restituisce un puntatore a una stringa che contiene (in ordine), il messaggio stringa, due punti, uno spazio, l'errore di sistema messaggio per l'ultima chiamata della libreria che produce un errore e un carattere di nuova riga. La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.

Il numero di errore effettivo per **strerror** archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Per risultati accurati, chiamare **strerror** immediatamente dopo la restituzione di una routine di libreria con un errore. In caso contrario, le chiamate successive a **strerror** oppure **strerror** possono sovrascrivere il **errno** valore.

**wcserror** e **wcserror** sono versioni a caratteri wide di **strerror** e **strerror**, rispettivamente.

**strerror**, **wcserror**, e **wcserror** non fanno parte della definizione ANSI; sono estensioni Microsoft e si consiglia di non utilizzare tali laddove si voglia ottenere codice portabile. Per la compatibilità ANSI, utilizzare **strerror** invece.

Per ottenere stringhe di errore, è consigliabile **strerror** oppure **wcserror** anziché le macro deprecate [sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e [sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e le funzioni interne deprecate **__sys_errlist** e **__sys_nerr**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcserror**|**strerror**|**strerror**|**_wcserror**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strerror**|\<string.h>|
|**_strerror**|\<string.h>|
|**wcserror**, **wcserror**|\<string.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [perror](perror-wperror.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
