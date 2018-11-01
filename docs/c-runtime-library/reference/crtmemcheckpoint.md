---
title: _CrtMemCheckpoint
ms.date: 11/04/2016
apiname:
- _CrtMemCheckpoint
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
apitype: DLLExport
f1_keywords:
- CrtMemCheckpoint
- _CrtMemCheckpoint
- crtdbg/_CrtMemCheckpoint
helpviewer_keywords:
- CrtMemCheckpoint function
- _CrtMemCheckpoint function
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
ms.openlocfilehash: ee435ba3e9e40795280dee0f97feaad32c8b0fc3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589517"
---
# <a name="crtmemcheckpoint"></a>_CrtMemCheckpoint

Ottiene lo stato corrente dell'heap di debug e lo archivia in una fornita dall'applicazione **CrtMemState** struttura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemCheckpoint(
   _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*state*<br/>
Puntatore alla **CrtMemState** struttura da riempire con il checkpoint di memoria.

## <a name="remarks"></a>Note

Il **CrtMemCheckpoint** funzione crea uno snapshot dello stato corrente dell'heap di debug in qualsiasi momento. Questo snapshot potrà essere usato da altre funzioni dello stato dell'heap come [_CrtMemDifference](crtmemdifference.md) per aiutare a rilevare perdite di memoria e altri problemi. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtMemState** vengono rimosse durante la pre-elaborazione.

L'applicazione deve passare un puntatore a un'istanza precedentemente allocata della **CrtMemState** struttura, definita in CRTDBG. h, nelle *stato* parametro. Se **CrtMemCheckpoint** rileva un errore durante la creazione di checkpoint, la funzione genera un **CRT_WARN** report che descrive il problema di debug.

Per altre informazioni sulle funzioni dello stato dell'heap e la **CrtMemState** struttura, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Se *lo stato* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostata su **EINVAL** e restituisce la funzione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtMemCheckpoint**|\<crtdbg.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo versioni di debug di UCRT.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtMemDifference](crtmemdifference.md)<br/>
