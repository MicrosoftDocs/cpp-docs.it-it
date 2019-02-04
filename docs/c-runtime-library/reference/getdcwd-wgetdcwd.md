---
title: _getdcwd, _wgetdcwd
ms.date: 11/04/2016
apiname:
- _getdcwd
- _wgetdcwd
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wgetdcwd
- getdcwd
- _getdcwd
- tgetdcwd
- _wgetdcwd
- _tgetdcwd
helpviewer_keywords:
- wgetdcwd function
- working directory
- getdcwd function
- _getdcwd function
- _wgetdcwd function
- current working directory
- directories [C++], current working
ms.assetid: 184152f5-c7b0-495b-918d-f9a6adc178bd
ms.openlocfilehash: 464a254775d9a1d2488247d6dafb4b85cd763f10
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702934"
---
# <a name="getdcwd-wgetdcwd"></a>_getdcwd, _wgetdcwd

Ottiene il percorso completo della directory di lavoro corrente nell'unità specificata.

## <a name="syntax"></a>Sintassi

```C
char *_getdcwd(
   int drive,
   char *buffer,
   int maxlen
);
wchar_t *_wgetdcwd(
   int drive,
   wchar_t *buffer,
   int maxlen
);
```

### <a name="parameters"></a>Parametri

*drive*<br/>
Integer non negativo che specifica l'unità (0 = unità predefinita, 1 = A, B = 2, e così via).

Se l'unità specificata non è disponibile, o il tipo di unità (ad esempio, rimovibile, fisso, CD-ROM, disco nella RAM, o unità di rete) non può essere determinato, viene richiamato il gestore di parametri non validi. Per altre informazioni, vedere [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

*buffer*<br/>
Posizione di archiviazione per il percorso o **NULL**.

Se **NULL** è specificato, questa funzione alloca un buffer di almeno *maxlen* dimensione usando **malloc**e il valore restituito di **getdcwd**è un puntatore al buffer allocato. Il buffer possa essere liberato chiamando **gratuita** e passandola al puntatore.

*maxlen*<br/>
Numero intero positivo diverso da zero che specifica la lunghezza massima del percorso, in caratteri: **char** per **getdcwd** e **wchar_t** per **wgetdcwd**.

Se *maxlen* è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Per altre informazioni, vedere [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="return-value"></a>Valore restituito

Puntatore a una stringa che rappresenta il percorso completo della directory di lavoro corrente nell'unità specificata, oppure **NULL**, che indica un errore.

Se *buffer* è specificato come **NULL** ed è presente memoria sufficiente per allocare *maxlen* vuoti, si verifica un errore e **errno** è Impostare su **ENOMEM**. Se la lunghezza del percorso incluso il carattere null di terminazione supera *maxlen*, si verifica un errore, e **errno** è impostata su **ERANGE**. Per altre informazioni su questi codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **getdcwd** funzione Ottiene il percorso completo della directory di lavoro corrente nell'unità specificata e lo archivia in *buffer*. Se la directory di lavoro corrente è impostata sulla radice, la stringa termina con una barra rovesciata (\\). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**wgetdcwd** è una versione a caratteri wide di **getdcwd**e la relativa *buffer* parametro e il valore restituito sono stringhe a caratteri wide. In caso contrario, **wgetdcwd** e **getdcwd** si comportano in modo identico.

Questa funzione è comunque thread-safe anche se dipende da **GetFullPathName**, che è non thread-safe. Tuttavia, è possibile violare la thread safety se le applicazioni multithread chiamano sia questa funzione e [GetFullPathNameA](/windows/desktop/api/fileapi/nf-fileapi-getfullpathnamea).

La versione di questa funzione che ha il **NOLOCK** suffisso comportamento è identico a questa funzione, ad eccezione del fatto che non è thread-safe e non è protetta da interferenze da altri thread. Per altre informazioni, vedere [_getdcwd_nolock, _wgetdcwd_nolock](getdcwd-nolock-wgetdcwd-nolock.md).

Quando **debug** e **CRTDBG_MAP_ALLOC** definiti, le chiamate a **getdcwd** e **wgetdcwd** vengono sostituite da chiamate agli **getdcwd_dbg** e **wgetdcwd_dbg** in modo che è possibile eseguire il debug delle allocazioni di memoria. Per altre informazioni, vedere[_getdcwd_dbg, _wgetdcwd_dbg](getdcwd-dbg-wgetdcwd-dbg.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetdcwd**|**_getdcwd**|**_getdcwd**|**_wgetdcwd**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getdcwd**|\<direct.h>|
|**_wgetdcwd**|\<direct.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [_getdrive](getdrive.md).

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
