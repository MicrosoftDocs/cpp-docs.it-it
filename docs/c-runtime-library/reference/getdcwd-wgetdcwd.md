---
title: _getdcwd, _wgetdcwd | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
apitype: DLLExport
f1_keywords:
- wgetdcwd
- getdcwd
- _getdcwd
- tgetdcwd
- _wgetdcwd
- _tgetdcwd
dev_langs:
- C++
helpviewer_keywords:
- wgetdcwd function
- working directory
- getdcwd function
- _getdcwd function
- _wgetdcwd function
- current working directory
- directories [C++], current working
ms.assetid: 184152f5-c7b0-495b-918d-f9a6adc178bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b0ccc526b196982402ca3b795276df8c790ad35a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

*Unità*<br/>
Integer non negativo che specifica l'unità (0 = unità predefinita, 1 = A, B = 2, e così via).

Se l'unità specificata non è disponibile o il tipo di unità (ad esempio disco rimovibile, fisso, CD-ROM, RAM, o un'unità di rete) non può essere determinato, viene richiamato il gestore di parametro non valido, descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

*buffer*<br/>
Posizione di archiviazione per il percorso o **NULL**.

Se **NULL** è specificato, questa funzione alloca un buffer di almeno *maxlen* dimensioni utilizzando **malloc**e il valore restituito di **getdcwd**è un puntatore al buffer allocato. Il buffer può essere liberato chiamando **libero** e passandola al puntatore.

*maxlen*<br/>
Numero intero positivo diverso da zero che specifica la lunghezza massima del percorso, in caratteri: **char** per **getdcwd** e **wchar_t** per **wgetdcwd**.

Se *maxlen* non è maggiore di zero, il gestore di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md), viene richiamato.

## <a name="return-value"></a>Valore restituito

Puntatore a una stringa che rappresenta il percorso completo della directory di lavoro corrente nell'unità specificata, o **NULL**, che indica un errore.

Se *buffer* è specificato come **NULL** e vi è memoria sufficiente per allocare *maxlen* caratteri, si verifica un errore e **errno** è impostato su **ENOMEM**. Se la lunghezza del percorso, che include il carattere null di terminazione, supera *maxlen*, si verifica un errore e **errno** è impostato su **ERANGE**. Per altre informazioni su questi codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **getdcwd** funzione Ottiene il percorso completo della directory di lavoro corrente nell'unità specificata e lo archivia in *buffer*. Se la directory di lavoro corrente è impostata sulla radice, la stringa termina con una barra rovesciata (\\). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**wgetdcwd** è una versione a caratteri wide **getdcwd**e il relativo *buffer* parametro e il valore restituito sono stringhe a caratteri "wide". In caso contrario, **wgetdcwd** e **getdcwd** si comportano in modo identico.

Questa funzione è comunque thread-safe anche se dipende da **GetFullPathName**, che è non thread-safe. Tuttavia, è possibile violare la thread safety se le applicazioni multithread chiamano sia questa funzione che **GetFullPathName**. Per altre informazioni, visitare [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) , quindi cercare **GetFullPathName**.

La versione di questa funzione con il **NOLOCK** suffisso si comporta in modo identico a questa funzione di ad eccezione del fatto che non è thread-safe e non è protetta da interferenze da altri thread. Per altre informazioni, vedere [_getdcwd_nolock, _wgetdcwd_nolock](getdcwd-nolock-wgetdcwd-nolock.md).

Quando si **debug** e **CRTDBG_MAP_ALLOC** sono definiti, le chiamate a **getdcwd** e **wgetdcwd** vengono sostituiti dalle chiamate a **getdcwd_dbg** e **wgetdcwd_dbg** in modo che è possibile eseguire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_getdcwd_dbg, _wgetdcwd_dbg](getdcwd-dbg-wgetdcwd-dbg.md).

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
