---
title: _CrtMemCheckpoint | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CrtMemCheckpoint function
- _CrtMemCheckpoint function
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 80f9d0b88e5bf1195ca8097e4cfbab5ba97942d7
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="crtmemcheckpoint"></a>_CrtMemCheckpoint

Ottiene lo stato corrente dell'heap di debug e lo memorizza in fornita dall'applicazione **CrtMemState** struttura (solo versione debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemCheckpoint(
   _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*lo stato* puntatore **CrtMemState** struttura da riempire con il checkpoint di memoria.

## <a name="remarks"></a>Note

Il **CrtMemCheckpoint** funzione crea uno snapshot dello stato corrente dell'heap di debug in qualsiasi momento. Questo snapshot potrà essere usato da altre funzioni dello stato dell'heap, ad esempio [_CrtMemDifference](crtmemdifference.md), per rilevare perdite di memoria e altri problemi. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtMemState** vengono rimosse durante la pre-elaborazione.

L'applicazione deve passare un puntatore a un'istanza precedentemente allocata della **CrtMemState** struttura, definita in CRTDBG. h, nel *stato* parametro. Se **CrtMemCheckpoint** incontra un errore durante la creazione del checkpoint, la funzione genera un **CRT_WARN** report che descrive il problema di debug.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e il **CrtMemState** struttura, vedere [funzioni segnalazione dello stato dell'Heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Se *stato* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostata su **EINVAL** e restituisce la funzione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtMemCheckpoint**|\<crtdbg.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo versioni di debug di UCRT.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtMemDifference](crtmemdifference.md)<br/>
