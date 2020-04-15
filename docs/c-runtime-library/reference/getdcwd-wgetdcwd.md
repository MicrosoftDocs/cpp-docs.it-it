---
title: _getdcwd, _wgetdcwd
ms.date: 4/2/2020
api_name:
- _getdcwd
- _wgetdcwd
- _o__getdcwd
- _o__wgetdcwd
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-environment-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 3a4ca8ff3f1153893282c65bc4c2becd687138ce
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81344390"
---
# <a name="_getdcwd-_wgetdcwd"></a>_getdcwd, _wgetdcwd

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

*Guida*<br/>
Integer non negativo che specifica l'unità (0 = unità predefinita, 1 = A, B = 2, e così via).

Se l'unità specificata non è disponibile o non è possibile determinare il tipo di unità (ad esempio, rimovibile, fisso, CD-ROM, disco RAM o unità di rete), viene richiamato il gestore di parametri non validi. Per altre informazioni, vedere [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

*buffer*<br/>
Posizione di archiviazione per il percorso o **NULL**.

Se viene specificato **NULL,** questa funzione alloca un buffer di almeno *maxlen* size utilizzando **malloc**e il valore restituito di **_getdcwd** è un puntatore al buffer allocato. Il buffer può essere liberato chiamando **free** e passando il puntatore.

*maxlen*<br/>
Un numero intero positivo diverso da zero che specifica la lunghezza massima del percorso, in caratteri: **char** per **_getdcwd** e **wchar_t** per **_wgetdcwd**.

Se *maxlen* è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Per altre informazioni, vedere [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="return-value"></a>Valore restituito

Puntatore a una stringa che rappresenta il percorso completo della directory di lavoro corrente nell'unità specificata, oppure **NULL**, che indica un errore.

Se *buffer* viene specificato come **NULL** e la memoria non è sufficiente per allocare caratteri *maxlen,* si verifica un errore e **errno** è impostato su **ENOMEM**. Se la lunghezza del percorso, incluso il carattere di terminazione null, supera *maxlen*, si verifica un errore e **errno** è impostato su **ERANGE**. Per altre informazioni su questi codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_getdcwd** ottiene il percorso completo della directory di lavoro corrente nell'unità specificata e lo memorizza *nel buffer*. Se la directory di lavoro corrente è impostata sulla radice, la stringa termina con una barra rovesciata (\\). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**_wgetdcwd** è una versione a caratteri wide di **_getdcwd**e il relativo parametro *del buffer* e il valore restituito sono stringhe a caratteri wide. In caso contrario, **_wgetdcwd** e **_getdcwd** si comportano in modo identico.

Questa funzione è comunque thread-safe anche se dipende da **GetFullPathName**, che è non thread-safe. Tuttavia, è possibile violare la thread safety se le applicazioni multithread chiamano sia questa funzione che [GetFullPathName](/windows/win32/api/fileapi/nf-fileapi-getfullpathnamew).

La versione di questa funzione con il **suffisso _nolock** si comporta in modo identico a questa funzione, ad eccezione del fatto che non è thread-safe e non è protetta da interferenze da altri thread. Per altre informazioni, vedere [_getdcwd_nolock, _wgetdcwd_nolock](getdcwd-nolock-wgetdcwd-nolock.md).

Quando vengono definiti **_DEBUG** e **_CRTDBG_MAP_ALLOC,** le chiamate a **_getdcwd** e **_wgetdcwd** vengono sostituite da chiamate a **_getdcwd_dbg** e **_wgetdcwd_dbg** in modo da poter eseguire il debug delle allocazioni di memoria. Per altre informazioni, vedere[_getdcwd_dbg, _wgetdcwd_dbg](getdcwd-dbg-wgetdcwd-dbg.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetdcwd**|**_getdcwd**|**_getdcwd**|**_wgetdcwd**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getdcwd**|\<direct.h>|
|**_wgetdcwd**|\<direct.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [_getdrive](getdrive.md).

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
