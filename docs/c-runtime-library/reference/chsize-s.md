---
title: _chsize_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _chsize_s
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
- chsize_s
- _chsize_s
dev_langs:
- C++
helpviewer_keywords:
- files [C++], changing size
- chsize_s function
- _chsize_s function
ms.assetid: d88d2e94-6e3b-42a5-8631-16ac4d82fa38
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d131f5e21fa4980e77cfb9dc858d5329b94e2b93
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="chsizes"></a>_chsize_s

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

**chsize_s** restituisce il valore 0 se le dimensioni del file viene modificata. Valore restituito diverso da zero indica un errore: il valore restituito sarà **EACCES** se il file specificato è bloccato da accessi, **EBADF** se il file specificato è di sola lettura o non è valido, il descrittore **ENOSPC** se non lo spazio viene lasciato sul dispositivo, o **EINVAL** se dimensione è minore di zero. **errno** è impostato sullo stesso valore.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **chsize_s** funzione estende o tronca il file associato *fd* per la lunghezza specificata dal *dimensioni*. Il file deve essere aperto in una modalità che consente la scrittura. Se il file viene esteso, vengono aggiunti caratteri null ("\0"). Se il file viene troncato, si perderanno tutti i dati a partire dalla fine del file abbreviato fino alla fine del file originale.

**chsize_s** accetta un valore integer a 64 bit come le dimensioni del file e pertanto può gestire file di dimensioni maggiori di 4 GB. **chsize** è limitato alle dimensioni del file a 32 bit.

Questa funzione convalida i relativi parametri. Se *fd* non un descrittore di file valido o una dimensione minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

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
