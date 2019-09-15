---
title: _chsize_s
ms.date: 11/04/2016
api_name:
- _chsize_s
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- chsize_s
- _chsize_s
helpviewer_keywords:
- files [C++], changing size
- chsize_s function
- _chsize_s function
ms.assetid: d88d2e94-6e3b-42a5-8631-16ac4d82fa38
ms.openlocfilehash: 7250f0b570ae9a4b2478bad09ee7b0044068d972
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939172"
---
# <a name="_chsize_s"></a>_chsize_s

Modifica la dimensione di un file. Questa è una versione di [_chsize](chsize.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _chsize_s(
   int fd,
   __int64 size
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore del file che fa riferimento a un file aperto.

*size*<br/>
Nuova lunghezza, in byte, del file.

## <a name="return-value"></a>Valore restituito

**_chsize_s** restituisce il valore 0 se la dimensione del file è stata modificata correttamente. Un valore restituito diverso da zero indica un errore: il valore restituito è **EACCES** se il file specificato è bloccato per l'accesso, **EBADF** se il file specificato è di sola lettura o il descrittore non è valido, **ENOSPC** se nel dispositivo non è presente spazio o  **EINVAL** se la dimensione è minore di zero. **errno** è impostato sullo stesso valore.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_chsize_s** estende o tronca il file associato a *FD* alla lunghezza specificata dalla *dimensione*. Il file deve essere aperto in una modalità che consente la scrittura. Se il file viene esteso, vengono aggiunti caratteri null ("\0"). Se il file viene troncato, si perderanno tutti i dati a partire dalla fine del file abbreviato fino alla fine del file originale.

**_chsize_s** accetta un intero a 64 bit come dimensione del file e pertanto può gestire dimensioni dei file maggiori di 4 GB. **_chsize** è limitato alle dimensioni dei file a 32 bit.

Questa funzione convalida i relativi parametri. Se *FD* non è un descrittore di file valido o la dimensione è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_chsize_s**|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_chsize](chsize.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
