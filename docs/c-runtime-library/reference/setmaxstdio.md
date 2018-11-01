---
title: _setmaxstdio
ms.date: 11/04/2016
apiname:
- _setmaxstdio
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
- setmaxstdio
- _setmaxstdio
helpviewer_keywords:
- maximum open files
- _setmaxstdio function
- setmaxstdio function
- open files, maximum
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
ms.openlocfilehash: 58cffedf673e23a69c2d8040071b2e3353ff4502
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445084"
---
# <a name="setmaxstdio"></a>_setmaxstdio

Imposta un valore massimo per il numero di file aperti contemporaneamente la **stdio** livello.

## <a name="syntax"></a>Sintassi

```C
int _setmaxstdio(
   int newmax
);
```

### <a name="parameters"></a>Parametri

*newmax*<br/>
Nuovo massimo per il numero di file aperti contemporaneamente la **stdio** livello.

## <a name="return-value"></a>Valore restituito

Restituisce *newmax* se ha esito positivo; in caso contrario, -1.

Se *newmax* è minore di **_IOB_ENTRIES** o versioni successive il numero massimo di handle disponibili nel sistema operativo, il gestore di parametri non validi viene richiamato, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** al **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **setmaxstdio** funzione modifica il valore massimo per il numero di file che possono essere aperti contemporaneamente la **stdio** livello.

Le operazioni di I/O del runtime C supportano ora molti più file aperti nelle piattaforme Win32 rispetto alle versioni precedenti. Fino a 2.048 file può essere aperto contemporaneamente al [livello lowio](../../c-runtime-library/low-level-i-o.md) (vale a dire, aperto e si accede tramite il **Open**, **Read**, **Write**, e così via della famiglia di funzioni dei / o). Fino a 512 file può essere aperto contemporaneamente al [livello stdio](../../c-runtime-library/stream-i-o.md) (vale a dire, aperto e si accede tramite il **fopen**, **fgetc**, **fputc** e così via della famiglia di funzioni). Il limite di 512 file aperti contemporaneamente la **stdio** livello può essere aumentato a un massimo di 2.048 tramite il **setmaxstdio** (funzione).

Perché **stdio**-il livello di funzioni, ad esempio **fopen**, vengono compilati in cima il **lowio** funzioni, il numero massimo di 2.048 è un limite superiore fisso per il numero di contemporaneamente Aprire i file accessibili tramite la libreria di runtime C.

> [!NOTE]
> Questo limite superiore potrebbe essere maggiore di quanto supportato da una particolare configurazione e piattaforma Win32.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmaxstdio**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Visualizzare [getmaxstdio](getmaxstdio.md) per un esempio di utilizzo **setmaxstdio**.

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
