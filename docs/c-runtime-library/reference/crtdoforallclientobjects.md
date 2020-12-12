---
description: 'Altre informazioni su: _CrtDoForAllClientObjects'
title: _CrtDoForAllClientObjects
ms.date: 11/04/2016
api_name:
- _CrtDoForAllClientObjects
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
- _CrtDoForAllClientObjects
- CrtDoForAllClientObjects
- crtdbg/_CrdDoForAllClientObjects
helpviewer_keywords:
- _CrtDoForAllClientObjects function
- CrtDoForAllClientObjects function
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
ms.openlocfilehash: 73d2718aa4bfb68752a8424a385638a48aba2e36
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319791"
---
# <a name="_crtdoforallclientobjects"></a>_CrtDoForAllClientObjects

Chiama una funzione fornita dall'applicazione per tutti i tipi di **_CLIENT_BLOCK** nell'heap (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtDoForAllClientObjects(
   void ( * pfn )( void *, void * ),
   void *context
);
```

### <a name="parameters"></a>Parametri

*PFN*<br/>
Puntatore alla funzione di callback della funzione fornita dall'applicazione. Il primo parametro a questa funzione punta ai dati. Il secondo parametro è il puntatore di contesto che viene passato alla chiamata a **_CrtDoForAllClientObjects**.

*context*<br/>
Puntatore al contesto fornito dall'applicazione da passare alla funzione fornita dall'applicazione.

## <a name="remarks"></a>Commenti

La funzione **_CrtDoForAllClientObjects** Cerca nell'elenco collegato dell'heap i blocchi di memoria con il tipo di **_CLIENT_BLOCK** e chiama la funzione fornita dall'applicazione quando viene trovato un blocco di questo tipo. Il blocco trovato e il parametro di *contesto* vengono passati come argomenti alla funzione fornita dall'applicazione. Durante il debug, un'applicazione può tenere traccia di un gruppo specifico di allocazioni chiamando in modo esplicito le funzioni heap di debug per allocare la memoria e specificando che ai blocchi venga assegnato il tipo di blocco **_CLIENT_BLOCK** . Questi blocchi possono quindi essere controllati separatamente ed essere segnalati in modo diverso durante la creazione dello stato della memoria e del rilevamento di perdite.

Se il **_CRTDBG_ALLOC_MEM_DF** campo di bit del flag di [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) non è attivato, **_CrtDoForAllClientObjects** restituisce immediatamente. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtDoForAllClientObjects** vengono rimosse durante la pre-elaborazione.

Per altre informazioni sul tipo di **_CLIENT_BLOCK** e su come può essere usato da altre funzioni di debug, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Se *PFN* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostato su **EINVAL** e la funzione restituisce.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDoForAllClientObjects**|\<crtdbg.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

**Librerie** : Solo versioni di debug delle librerie di runtime C universali.

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetDbgFlag](crtsetdbgflag.md)<br/>
[Funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details)<br/>
[_CrtReportBlockType](crtreportblocktype.md)<br/>
