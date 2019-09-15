---
title: _get_osfhandle
ms.date: 05/29/2018
api_name:
- _get_osfhandle
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
- get_osfhandle
- _get_osfhandle
helpviewer_keywords:
- operating systems, getting file handles
- get_osfhandle function
- _get_osfhandle function
- file handles [C++], operating system
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
ms.openlocfilehash: 65060689e0a7fc72b67da8fc3bf7ce0af75fd645
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70955780"
---
# <a name="_get_osfhandle"></a>_get_osfhandle

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

Restituisce un handle di file del sistema operativo se *FD* è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituisce **INVALID_HANDLE_VALUE** (-1). Imposta anche **errno** su **EBADF**, che indica un handle di file non valido. Per evitare un avviso quando il risultato viene utilizzato come handle di file Win32, eseguirne il cast a un tipo di **handle** .

> [!NOTE]
> Quando **stdin**, **stdout**e **stderr** non sono associati a un flusso (ad esempio, in un'applicazione Windows senza una finestra della console), i valori del descrittore di file per questi flussi vengono restituiti da [_fileno](fileno.md) come valore speciale-2. Analogamente, se si usa 0, 1 o 2 come parametro del descrittore del file anziché il risultato di una chiamata a **_fileno**, **_get_osfhandle** restituisce anche il valore speciale-2 Se il descrittore del file non è associato a un flusso e non imposta **errno**. Tuttavia, non si tratta di un valore di handle di file valido e le chiamate successive che tentano di utilizzarlo hanno probabilmente esito negativo.

Per ulteriori informazioni su **EBADF** e altri codici di errore, vedere [doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Per chiudere un file il cui handle di file del sistema operativo viene ottenuto da **_get_osfhandle**, chiamare [_close](close.md) sul descrittore di file *FD*. Non chiamare mai **CloseHandle** sul valore restituito della funzione. L'handle di file del sistema operativo sottostante è di proprietà del descrittore di file *FD* ed è chiuso quando viene chiamato [_close](close.md) su *FD*. Se il descrittore del file è `FILE *` di proprietà di un flusso, la `FILE *` chiamata a [fclose](fclose-fcloseall.md) su tale flusso chiude sia il descrittore del file che l'handle di file del sistema operativo sottostante. In questo caso, non chiamare [_close](close.md) sul descrittore del file.

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
