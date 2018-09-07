---
title: _CrtDoForAllClientObjects | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtDoForAllClientObjects
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
- _CrtDoForAllClientObjects
- CrtDoForAllClientObjects
- crtdbg/_CrdDoForAllClientObjects
dev_langs:
- C++
helpviewer_keywords:
- _CrtDoForAllClientObjects function
- CrtDoForAllClientObjects function
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 378ef3c6218d1f57cd1d817d8895b3ff8b081ecb
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44105342"
---
# <a name="crtdoforallclientobjects"></a>_CrtDoForAllClientObjects

Chiama una funzione fornita dall'applicazione per tutti i **CLIENT_BLOCK** tipi nell'heap (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtDoForAllClientObjects(
   void ( * pfn )( void *, void * ),
   void *context
);
```

### <a name="parameters"></a>Parametri

*pfn*<br/>
Puntatore alla funzione di callback della funzione fornita dall'applicazione. Il primo parametro a questa funzione punta ai dati. Il secondo parametro è il puntatore di contesto che viene passato alla chiamata a **CrtDoForAllClientObjects**.

*context*<br/>
Puntatore al contesto fornito dall'applicazione da passare alla funzione fornita dall'applicazione.

## <a name="remarks"></a>Note

Il **CrtDoForAllClientObjects** funzione Cerca a elenco collegato dell'heap i blocchi di memoria con il **CLIENT_BLOCK** tipo e chiama la funzione fornita dall'applicazione quando un blocco di questo tipo è stata trovata. Il blocco individuato e il *contesto* parametri vengono passati come argomenti alla funzione fornita dall'applicazione. Durante il debug, un'applicazione può rilevare un gruppo specifico di allocazioni chiamando in modo esplicito il debug funzioni degli heap allocare la memoria e specificando che i blocchi vengano assegnate le **CLIENT_BLOCK** tipo di blocco. Questi blocchi possono quindi essere controllati separatamente ed essere segnalati in modo diverso durante la creazione dello stato della memoria e del rilevamento di perdite.

Se il **CRTDBG_ALLOC_MEM_DF** campo di bit delle [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag non è attivato, **CrtDoForAllClientObjects** restituisce immediatamente. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtDoForAllClientObjects** vengono rimosse durante la pre-elaborazione.

Per altre informazioni sul **CLIENT_BLOCK** digitare e come può essere usato da altre funzioni di debug, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Se *pfn* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostata su **EINVAL** e restituisce la funzione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDoForAllClientObjects**|\<crtdbg.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie** : Solo versioni di debug delle librerie di runtime C universali.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetDbgFlag](crtsetdbgflag.md)<br/>
[Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details)<br/>
[_CrtReportBlockType](crtreportblocktype.md)<br/>
