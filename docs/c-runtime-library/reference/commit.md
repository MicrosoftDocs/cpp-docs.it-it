---
title: _commit
ms.date: 11/04/2016
apiname:
- _commit
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
- _commit
- commit
helpviewer_keywords:
- files [C++], flushing
- flushing files to disk
- commit function
- _commit function
- committing files to disk
ms.assetid: d0c74d3a-4f2d-4fb0-b140-2d687db3d233
ms.openlocfilehash: 8408158cb3d4ef0d29d9af24d8a2acbd28e00192
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523071"
---
# <a name="commit"></a>_commit

Scarica un file direttamente su disco.

## <a name="syntax"></a>Sintassi

```C
int _commit(
   int fd
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

## <a name="return-value"></a>Valore restituito

**commit** restituisce 0 se il file è stato scaricato su disco. Valore restituito di -1 indica un errore.

## <a name="remarks"></a>Note

Il **commit** funzione impone al sistema operativo per scrivere il file associato *fd* su disco. Questa chiamata assicura che il file specificato venga scaricato immediatamente, non a discrezione del sistema operativo.

Se *fd* è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostata su **EBADF**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_commit**|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_read](read.md)<br/>
[_write](write.md)<br/>
