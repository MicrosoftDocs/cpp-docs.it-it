---
description: 'Altre informazioni su: _free_dbg'
title: _free_dbg
ms.date: 11/04/2016
api_name:
- _free_dbg
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
- _free_dbg
- free_dbg
helpviewer_keywords:
- memory blocks, deallocating
- freeing memory
- _free_dbg function
- free_dbg function
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
ms.openlocfilehash: 4baba591349c197b301b0dcd11b1998adfc7a971
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314035"
---
# <a name="_free_dbg"></a>_free_dbg

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
Tipo di blocco di memoria allocato da liberare: **_CLIENT_BLOCK**, **_NORMAL_BLOCK** o **_IGNORE_BLOCK**.

## <a name="remarks"></a>Commenti

La funzione **_free_dbg** è una versione di debug della funzione [Free](free.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_free_dbg** viene ridotta a una chiamata a **Free**. Sia **gratuito** che **_free_dbg** liberare un blocco di memoria nell'heap di base, ma **_free_dbg** supporta due funzionalità di debug: la possibilità di tenere i blocchi liberati nell'elenco collegato dell'heap per simulare condizioni di memoria insufficiente e un parametro di tipo blocco per liberare tipi di allocazione specifici.

**_free_dbg** esegue un controllo di validità su tutti i file e i percorsi dei blocchi specificati prima di eseguire l'operazione gratuita. Non è previsto che l'applicazione fornisca queste informazioni. Quando un blocco di memoria viene liberato, il gestore dell'heap di debug controlla automaticamente l'integrità dei buffer a ogni lato della porzione utente e genera un rapporto errori se si sono verificate sovrascritture. Se viene impostato il campo **_CRTDBG_DELAY_FREE_MEM_DF** bit del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) , il blocco liberato viene riempito con il valore 0xDD, viene assegnato il tipo di blocco **_FREE_BLOCK** e mantenuto nell'elenco collegato dell'heap dei blocchi di memoria.

Se si verifica un errore durante la liberazione della memoria, **errno** viene impostato con le informazioni del sistema operativo sulla natura dell'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_free_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_free_dbg**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
