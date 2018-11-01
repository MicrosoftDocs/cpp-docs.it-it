---
title: _free_dbg
ms.date: 11/04/2016
apiname:
- _free_dbg
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
- _free_dbg
- free_dbg
helpviewer_keywords:
- memory blocks, deallocating
- freeing memory
- _free_dbg function
- free_dbg function
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
ms.openlocfilehash: 5a0024101e4f5a74f1573b271d444b27738db8e1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442246"
---
# <a name="freedbg"></a>_free_dbg

Libera un blocco di memoria nell'heap (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _free_dbg(
   void *userData,
   int blockType
);
```

### <a name="parameters"></a>Parametri

*userData*<br/>
Puntatore al blocco di memoria precedentemente allocata da liberare.

*blockType*<br/>
Tipo di blocco di memoria allocata da liberare: **CLIENT_BLOCK**, **NORMAL_BLOCK**, o **IGNORE_BLOCK**.

## <a name="remarks"></a>Note

Il **free_dbg** funzione è una versione di debug di [gratuita](free.md) (funzione). Quando [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **free_dbg** viene ridotta a una chiamata a **gratuito**. Entrambe **gratuito** e **free_dbg** liberano un blocco di memoria nell'heap di base, ma **free_dbg** contiene due funzionalità di debug: la possibilità di mantenere liberati i blocchi dell'heap elenco collegato per simulare condizioni di memoria insufficiente e un parametro di tipo blocco per liberare tipi specifici di allocazioni.

**free_dbg** esegue un controllo di validità su tutti i file specificati e i percorsi di blocco prima di eseguire l'operazione gratuito. Non è previsto che l'applicazione fornisca queste informazioni. Quando un blocco di memoria viene liberato, il gestore dell'heap di debug controlla automaticamente l'integrità dei buffer a ogni lato della porzione utente e genera un rapporto errori se si sono verificate sovrascritture. Se il **CRTDBG_DELAY_FREE_MEM_DF** campo di bit delle [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag è impostato, il blocco liberato viene riempito con il valore 0xDD, viene assegnato il **FREE_BLOCK** , tipo di blocco e mantenuto nell'elenco collegato dell'heap di blocchi di memoria.

Se si verifica un errore nel liberare la memoria **errno** viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_free_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio d'uso **free_dbg**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
