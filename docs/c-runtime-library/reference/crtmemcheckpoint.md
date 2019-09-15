---
title: _CrtMemCheckpoint
ms.date: 11/04/2016
api_name:
- _CrtMemCheckpoint
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CrtMemCheckpoint
- _CrtMemCheckpoint
- crtdbg/_CrtMemCheckpoint
helpviewer_keywords:
- CrtMemCheckpoint function
- _CrtMemCheckpoint function
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
ms.openlocfilehash: edf91cd8c76fd080326e2e5eeac98f7f81ab90cf
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942375"
---
# <a name="_crtmemcheckpoint"></a>_CrtMemCheckpoint

Ottiene lo stato corrente dell'heap di debug e archivia in una struttura **_CrtMemState** fornita dall'applicazione (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemCheckpoint(
   _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*state*<br/>
Puntatore alla struttura **_CrtMemState** da riempire con il Checkpoint di memoria.

## <a name="remarks"></a>Note

La funzione **CrtMemCheckpoint** crea uno snapshot dello stato corrente dell'heap di debug in un determinato momento. Questo snapshot potrà essere usato da altre funzioni dello stato dell'heap come [_CrtMemDifference](crtmemdifference.md) per aiutare a rilevare perdite di memoria e altri problemi. Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtMemState** vengono rimosse durante la pre-elaborazione.

L'applicazione deve passare un puntatore a un'istanza precedentemente allocata della struttura **_CrtMemState** , definita in CRTDBG. h, nel parametro *state* . Se **CrtMemCheckpoint** rileva un errore durante la creazione del checkpoint, la funzione genera un report di debug **_CRT_WARN** che descrive il problema.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla struttura **_CrtMemState** , vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Se *lo stato* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su **EINVAL** e la funzione restituisce.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtMemCheckpoint**|\<crtdbg.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie** Solo versioni di debug di UCRT.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtMemDifference](crtmemdifference.md)<br/>
