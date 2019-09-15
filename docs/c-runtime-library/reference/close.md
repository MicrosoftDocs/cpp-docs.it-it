---
title: _close
ms.date: 11/04/2016
api_name:
- _close
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
- _close
helpviewer_keywords:
- _close function
- close function
- files [C++], closing
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
ms.openlocfilehash: e274cd45c42a5cf49430ecce69e111cbbf6fe88b
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942939"
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

*fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

## <a name="return-value"></a>Valore restituito

**_close** restituisce 0 se il file è stato chiuso correttamente. Un valore restituito di-1 indica un errore.

## <a name="remarks"></a>Note

La funzione **_close** chiude il file associato a *FD*.

Il descrittore di file e il punto di controllo file del sistema operativo sottostante vengono chiusi. Non è quindi necessario chiamare **CloseHandle** se il file è stato originariamente aperto usando la funzione Win32 **CreateFile** e convertito in un descrittore di file usando **_open_osfhandle**.

Questa funzione convalida i relativi parametri. Se *FD* è un descrittore di file errato, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono-1 e **errno** viene impostato su **EBADF**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_close**|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_open](open-wopen.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chsize](chsize.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
