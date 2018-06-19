---
title: _aligned_free_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _aligned_free_dbg
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
- _aligned_free_dbg
- aligned_free_dbg
dev_langs:
- C++
helpviewer_keywords:
- _aligned_free_dbg function
- aligned_free_dbg function
ms.assetid: eb0cb3c8-0992-4db8-bac3-65f1b8311ca6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88c7eb281ecc7a7175614c5c72c54c7267cf55e8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32393459"
---
# <a name="alignedfreedbg"></a>_aligned_free_dbg

Libera un blocco di memoria che è stato allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md) (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _aligned_free_dbg(
   void *memblock
);
```

### <a name="parameters"></a>Parametri

*memblock* un puntatore al blocco di memoria che è stato restituito per il [aligned_malloc](aligned-malloc.md) o [aligned_offset_malloc](aligned-offset-malloc.md) (funzione).

## <a name="remarks"></a>Note

Il **aligned_free_dbg** funzione è una versione di debug di [aligned_free](aligned-free.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **aligned_free_dbg** viene ridotta a una chiamata a **aligned_free**. Entrambi **aligned_free** e **aligned_free_dbg** liberano un blocco di memoria nell'heap di base, ma **aligned_free_dbg** include una funzionalità di debug: la possibilità di mantenere liberato blocchi nell'elenco collegato dell'heap per simulare condizioni di memoria insufficiente.

**aligned_free_dbg** esegue un controllo di validità su tutti i file specificati e i percorsi di blocco prima di eseguire l'operazione disponibile. Non è previsto che l'applicazione fornisca queste informazioni. Quando un blocco di memoria viene liberato, il gestore dell'heap di debug controlla automaticamente l'integrità dei buffer a ogni lato della porzione utente e genera un rapporto errori se si sono verificate sovrascritture. Se il **CRTDBG_DELAY_FREE_MEM_DF** campo di bit del [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag è impostato, il blocco liberato viene riempito con il valore 0xDD, viene assegnato il **FREE_BLOCK** , tipo di blocco e mantenuti nell'elenco collegato dell'heap di blocchi di memoria.

Se si verifica un errore nel liberare la memoria **errno** viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_free_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
