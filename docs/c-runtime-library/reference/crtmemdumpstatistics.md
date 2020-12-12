---
description: 'Altre informazioni su: _CrtMemDumpStatistics'
title: _CrtMemDumpStatistics
ms.date: 11/04/2016
api_name:
- _CrtMemDumpStatistics
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
- CrtMemDumpStatistics
- _CrtMemDumpStatistics
helpviewer_keywords:
- _CrtMemDumpStatistics function
- CrtMemDumpStatistics function
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
ms.openlocfilehash: 2f02c35ff61dc2bc5ac7e8dfbe921fa48731c2b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319613"
---
# <a name="_crtmemdumpstatistics"></a>_CrtMemDumpStatistics

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

## <a name="remarks"></a>Commenti

La funzione **_CrtMemDumpStatistics** esegue il dump delle informazioni di intestazione di debug per uno stato specificato dell'heap in un form leggibile dall'utente. Le statistiche di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Lo stato della memoria può contenere uno stato dell'heap specifico o la differenza tra i due stati. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtMemDumpStatistics** vengono rimosse durante la pre-elaborazione.

Il *parametro state* deve essere un puntatore a una struttura **_CrtMemState** compilata da [_CrtMemCheckpoint](crtmemcheckpoint.md) o restituita da [_CrtMemDifference](crtmemdifference.md) prima della chiamata a **_CrtMemDumpStatistics** . Se *lo stato* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e non viene eseguita alcuna azione. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla struttura **_CrtMemState** , vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_CrtMemDumpStatistics**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
