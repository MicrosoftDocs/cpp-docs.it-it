---
title: _get_osfhandle
ms.date: 4/2/2020
api_name:
- _get_osfhandle
- _o__get_osfhandle
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: a12c0c93ae15350a4b91a8aa905acb941f8b6a10
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345036"
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

*Fd*<br/>
Descrittore di file esistente.

## <a name="return-value"></a>Valore restituito

Restituisce un handle di file del sistema operativo se *fd* è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituisce **INVALID_HANDLE_VALUE** (-1). Imposta inoltre **errno** su **EBADF**, che indica un handle di file non valido. Per evitare un avviso quando il risultato viene utilizzato come handle di file Win32, eseguire il cast a un tipo **HANDLE.**

> [!NOTE]
> Quando **stdin**, **stdout**e **stderr** non sono associati a un flusso (ad esempio, in un'applicazione Windows senza una finestra della console), i valori del descrittore di file per questi flussi vengono restituiti da [_fileno](fileno.md) come valore speciale -2. Analogamente, se si utilizza un parametro 0, 1 o 2 come parametro del descrittore di file anziché il risultato di una chiamata a **_fileno**, **_get_osfhandle** restituisce anche il valore speciale -2 quando il descrittore di file non è associato a un flusso e non imposta **errno**. Tuttavia, questo non è un valore di handle di file valido e le chiamate successive che tentano di utilizzarlo sono suscettibili di esito negativo.

Per ulteriori informazioni su **EBADF** e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Per chiudere un file il cui handle di file del sistema operativo (OS) viene ottenuto **_get_osfhandle**, chiamare [_close](close.md) sul descrittore di file *fd*. Non chiamare mai **CloseHandle** sul valore restituito di questa funzione. L'handle di file del sistema operativo sottostante è di proprietà del descrittore di file *fd* e viene chiuso quando [_close](close.md) viene chiamato su *fd*. Se il descrittore di `FILE *` file è di proprietà `FILE *` di un flusso, la chiamata a [fclose](fclose-fcloseall.md) su tale flusso comporta la chiusura sia del descrittore di file che dell'handle di file del sistema operativo sottostante. In questo caso, non chiamare [_close](close.md) sul descrittore di file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_osfhandle**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[\_open_osfhandle](open-osfhandle.md)
