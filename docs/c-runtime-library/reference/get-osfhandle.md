---
title: _get_osfhandle
ms.date: 05/29/2018
apiname:
- _get_osfhandle
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
- get_osfhandle
- _get_osfhandle
helpviewer_keywords:
- operating systems, getting file handles
- get_osfhandle function
- _get_osfhandle function
- file handles [C++], operating system
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
ms.openlocfilehash: cc3b50e3d3f65bee83b8df83aa0adb5c8694e35a
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821665"
---
# <a name="getosfhandle"></a>_get_osfhandle

Recupera l''handle di file del sistema operativo associato al descrittore di file specificato.

## <a name="syntax"></a>Sintassi

```C
intptr_t _get_osfhandle(
   int fd
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file esistente.

## <a name="return-value"></a>Valore restituito

Restituisce un handle di file del sistema operativo se *fd* è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito **INVALID_HANDLE_VALUE** (-1). Imposta inoltre **errno** al **EBADF**, che indica un handle di file non valido. Per evitare un avviso quando il risultato viene utilizzato come un handle di file Win32, eseguire il cast a un **gestire** tipo.

> [!NOTE]
> Quando **stdin**, **stdout**, e **stderr** non sono associate a un flusso (ad esempio, in un'applicazione Windows senza una finestra della console), i valori del descrittore di file per Questi flussi restituiti da [fileno](fileno.md) come speciale valore -2. Analogamente, se si usa il valore 0, 1 o 2 come il parametro del descrittore di file anziché il risultato di una chiamata a **fileno**, **get_osfhandle** restituisce anche il valore speciale -2 quando non è associato il descrittore del file con un flusso e non viene impostato **errno**. Tuttavia, non è un valore di handle di file valido e le chiamate successive proverà a usarlo si verifichino errori.

Per altre informazioni sulle **EBADF** e altri codici di errore, vedere [doserrno, errno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Per chiudere un file con handle di file del sistema operativo (OS) viene ottenuto da **get_osfhandle**, chiamare [Close](close.md) per il descrittore di file *fd*. Non chiamano mai **CloseHandle** sul valore restituito di questa funzione. L'handle di file del sistema operativo sottostante è di proprietà di *fd* descrittore di file e viene chiuso quando [Close](close.md) viene chiamato sul *fd*. Se il descrittore del file è di proprietà di un `FILE *` flusso, quindi chiamare [fclose](fclose-fcloseall.md) su esso `FILE *` flusso viene chiuso il descrittore del file sia l'handle di file del sistema operativo sottostante. In questo caso, non chiamare [Close](close.md) nel descrittore di file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[\_open_osfhandle](open-osfhandle.md)
