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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 085bf20a12d9b77be0977521bde2ab75d9b2636a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918290"
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

*FD*<br/>
Descrittore di file esistente.

## <a name="return-value"></a>Valore restituito

Restituisce un handle di file del sistema operativo se *FD* è valido. In caso contrario, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituisce **INVALID_HANDLE_VALUE** (-1). Imposta anche **errno** su **EBADF**, che indica un handle di file non valido. Per evitare un avviso quando il risultato viene utilizzato come handle di file Win32, eseguirne il cast a un tipo di **handle** .

> [!NOTE]
> Quando **stdin**, **stdout**e **stderr** non sono associati a un flusso (ad esempio, in un'applicazione Windows senza una finestra della console), i valori del descrittore di file per questi flussi vengono restituiti da [_fileno](fileno.md) come valore speciale-2. Analogamente, se si usa 0, 1 o 2 come parametro del descrittore del file anziché il risultato di una chiamata a **_fileno**, **_get_osfhandle** restituisce anche il valore speciale-2 Se il descrittore del file non è associato a un flusso e non imposta **errno**. Tuttavia, non si tratta di un valore di handle di file valido e le chiamate successive che tentano di utilizzarlo hanno probabilmente esito negativo.

Per ulteriori informazioni su **EBADF** e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Per chiudere un file il cui handle di file del sistema operativo viene ottenuto tramite **_get_osfhandle**, chiamare [_close](close.md) sul descrittore di file *FD*. Non chiamare mai **CloseHandle** sul valore restituito della funzione. L'handle di file del sistema operativo sottostante è di proprietà del descrittore di file *FD* e viene chiuso quando viene chiamato [_close](close.md) su *FD*. Se il descrittore del file è `FILE *` di proprietà di un flusso, la `FILE *` chiamata a [fclose](fclose-fcloseall.md) su tale flusso chiude sia il descrittore del file che l'handle di file del sistema operativo sottostante. In questo caso, non chiamare [_close](close.md) sul descrittore del file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
