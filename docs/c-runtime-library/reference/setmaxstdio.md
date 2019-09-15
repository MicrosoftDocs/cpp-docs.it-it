---
title: _setmaxstdio
ms.date: 05/21/2019
api_name:
- _setmaxstdio
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
- setmaxstdio
- _setmaxstdio
helpviewer_keywords:
- maximum open files
- _setmaxstdio function
- setmaxstdio function
- open files, maximum
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
ms.openlocfilehash: 620213b4df9ea555189a1403b3c9e83b55cad6c6
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948230"
---
# <a name="_setmaxstdio"></a>_setmaxstdio

Imposta un massimo per il numero di file aperti contemporaneamente al livello del flusso I/O.

## <a name="syntax"></a>Sintassi

```C
int _setmaxstdio(
   int new_max
);
```

### <a name="parameters"></a>Parametri

*new_max*<br/>
Nuovo valore massimo per il numero di file aperti contemporaneamente al livello del flusso I/O.

## <a name="return-value"></a>Valore restituito

Restituisce *new_max* in caso di esito positivo e -1 in caso contrario.

Se *new_max* è minore di **_IOB_ENTRIES** o maggiore del numero massimo di handle disponibili nel sistema operativo, viene chiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_setmaxstdio** modifica il valore massimo per il numero di file che possono essere aperti contemporaneamente al livello del flusso I/O.

L'I/O del runtime C ora supporta fino a 8192 file aperti contemporaneamente al [livello di I/O basso](../../c-runtime-library/low-level-i-o.md). Questo livello include i file aperti e ai quali è stato eseguito l'accesso tramite la famiglia di funzioni I/O **_open**, **_read** e **_write**. Per impostazione predefinita, è possibile aprire contemporaneamente un massimo di 512 file al [livello del flusso I/O](../../c-runtime-library/stream-i-o.md). Questo livello include i file aperti e ai quali è stato eseguito l'accesso tramite la famiglia di funzioni **fopen**, **fgetc** e **fputc**. Il limite di 512 file aperti al livello del flusso I/O può essere aumentato a un massimo di 8.192 file tramite la funzione **_setmaxstdio**.

Dato che le funzioni al livello del flusso I/O come **fopen** sono basate sulle funzioni del livello I/O basso, il numero massimo di 8.192 è un limite superiore fisso per il numero di file aperti contemporaneamente accessibili tramite la libreria di runtime C.

> [!NOTE]
> Questo limite superiore potrebbe essere maggiore di quello supportato da una particolare configurazione e piattaforma Win32.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmaxstdio**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere [_getmaxstdio](getmaxstdio.md) per un esempio dell'uso di **_setmaxstdio**.

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
