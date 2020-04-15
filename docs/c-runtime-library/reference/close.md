---
title: _close
ms.date: 4/2/2020
api_name:
- _close
- _o__close
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
- _close
helpviewer_keywords:
- _close function
- close function
- files [C++], closing
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
ms.openlocfilehash: 4d8b702a10624ae80629b4ce4644c428322500cb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81348650"
---
# <a name="_close"></a>_close

Chiude un file.

## <a name="syntax"></a>Sintassi

```C
int _close(
   int fd
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

## <a name="return-value"></a>Valore restituito

**_close** restituisce 0 se il file è stato chiuso correttamente. Un valore restituito di -1 indica un errore.

## <a name="remarks"></a>Osservazioni

La funzione **_close** chiude il file associato a *fd*.

Il descrittore di file e il punto di controllo file del sistema operativo sottostante vengono chiusi. Pertanto, non è necessario chiamare **CloseHandle** se il file è stato originariamente aperto utilizzando la funzione Win32 **CreateFile** e convertito in un descrittore di file utilizzando **_open_osfhandle**.

Questa funzione convalida i relativi parametri. Se *fd* è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono -1 e **errno** è impostato su **EBADF**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_close**|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_open](open-wopen.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chsize](chsize.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
