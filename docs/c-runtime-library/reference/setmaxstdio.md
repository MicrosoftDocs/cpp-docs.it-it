---
title: _setmaxstdio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- maximum open files
- _setmaxstdio function
- setmaxstdio function
- open files, maximum
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 785fcc05c6b19086c14edc85983749894c867c18
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32407668"
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
Nuovo valore massimo per il numero di file aperti contemporaneamente la **stdio** livello.

## <a name="return-value"></a>Valore restituito

Restituisce *newmax* se ha esito positivo; in caso contrario -1.

Se *newmax* è inferiore a **_IOB_ENTRIES** o versione successiva, quindi il numero massimo di handle disponibili nel sistema operativo, il gestore di parametri non validi viene richiamato, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** alla **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **setmaxstdio** funzione modifica il valore massimo per il numero di file che possono essere aperte contemporaneamente la **stdio** livello.

Le operazioni di I/O del runtime C supportano ora molti più file aperti nelle piattaforme Win32 rispetto alle versioni precedenti. Fino a 2.048 file può essere aperta contemporaneamente la [livello lowio](../../c-runtime-library/low-level-i-o.md) (vale a dire, aperto e a cui si accede dal **Open**, **ulte_riori**, **Write**, e così via famiglia di funzioni dei / o). Fino a 512 file può essere aperta contemporaneamente la [livello stdio](../../c-runtime-library/stream-i-o.md) (vale a dire, aperto e a cui si accede dal **fopen**, **fgetc**, **fputc** e così via famiglia di funzioni). Il limite di 512 i file aperti i **stdio** livello può essere aumentato fino a un massimo di 2.048 mediante il **setmaxstdio** (funzione).

Poiché **stdio**-livello di funzioni, ad esempio **fopen**, vengono compilati in cima il **lowio** funzioni, il numero massimo di 2.048 è un limite superiore per il numero di contemporaneamente Aprire i file accessibili tramite la libreria di runtime C.

> [!NOTE]
> Questo limite superiore potrebbe essere maggiore di quanto supportato da una particolare configurazione e piattaforma Win32.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmaxstdio**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere [getmaxstdio](getmaxstdio.md) per un esempio di utilizzo **setmaxstdio**.

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
