---
title: _CrtMemDumpStatistics
ms.date: 11/04/2016
apiname:
- _CrtMemDumpStatistics
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
- CrtMemDumpStatistics
- _CrtMemDumpStatistics
helpviewer_keywords:
- _CrtMemDumpStatistics function
- CrtMemDumpStatistics function
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
ms.openlocfilehash: 66eb58b65f3fa20e01ad16d68f3fe1baafd8cd04
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605127"
---
# <a name="crtmemdumpstatistics"></a>_CrtMemDumpStatistics

Esegue il dump delle informazioni di intestazione di debug per uno stato dell'heap specificato in un form leggibile dall'utente (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemDumpStatistics(
   const _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*state*<br/>
Puntatore allo stato dell'heap per eseguire il dump.

## <a name="remarks"></a>Note

Il **CrtMemDumpStatistics** funzione trasferisce le informazioni di intestazione di debug per uno stato specificato dell'heap in un form leggibile dall'utente. Le statistiche di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Lo stato della memoria può contenere uno stato dell'heap specifico o la differenza tra i due stati. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtMemDumpStatistics** vengono rimosse durante la pre-elaborazione.

Il *lo stato* parametro deve essere un puntatore a un **CrtMemState** struttura che è stato compilato da [CrtMemCheckpoint](crtmemcheckpoint.md) o restituiti da [_ CrtMemDifference](crtmemdifference.md) prima **CrtMemDumpStatistics** viene chiamato. Se *lo stato* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e viene eseguita alcuna azione. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Per altre informazioni sulle funzioni dello stato dell'heap e la **CrtMemState** struttura, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_CrtMemDumpStatistics**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
