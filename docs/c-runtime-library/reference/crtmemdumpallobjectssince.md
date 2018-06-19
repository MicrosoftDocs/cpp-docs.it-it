---
title: _CrtMemDumpAllObjectsSince | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtMemDumpAllObjectsSince
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
- CrtMemDumpAllObjectsSince
- _CrtMemDumpAllObjectsSince
dev_langs:
- C++
helpviewer_keywords:
- _CrtMemDumpAllObjectsSince function
- CrtMemDumpAllObjectsSince function
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24cf01facaba326c36454ea5410da8dbb05848f2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32396869"
---
# <a name="crtmemdumpallobjectssince"></a>_CrtMemDumpAllObjectsSince

Esegue il dump delle informazioni sugli oggetti nell'heap dall'inizio dell'esecuzione del programma o da uno stato di heap specificato (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemDumpAllObjectsSince(
   const _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*lo stato* puntatore allo stato dell'heap per iniziare il dump da o **NULL**.

## <a name="remarks"></a>Note

Il **CrtMemDumpAllObjectsSince** funzione trasferisce le informazioni di intestazione di debug di oggetti allocati nell'heap in un form leggibile dall'utente. Le informazioni di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtMemDumpAllObjectsSince** vengono rimosse durante la pre-elaborazione.

**CrtMemDumpAllObjectsSince** utilizza il valore della *stato* parametro per determinare la posizione in cui avviare l'operazione di dump. Per iniziare il dump da uno stato dell'heap specificato, il *stato* parametro deve essere un puntatore a un **CrtMemState** struttura che è stato compilato da [CrtMemCheckpoint](crtmemcheckpoint.md) prima **CrtMemDumpAllObjectsSince** è stato chiamato. Quando si *stato* viene **NULL**, la funzione avvia il dump dall'inizio dell'esecuzione del programma.

Se l'applicazione è installata una funzione hook di dump chiamando [CrtSetDumpClient](crtsetdumpclient.md), quindi ogni volta che **CrtMemDumpAllObjectsSince** trasferisce le informazioni su un **CLIENT_BLOCK** tipo di blocco, viene chiamato anche la funzione di dump fornita dall'applicazione. Per impostazione predefinita, i blocchi di runtime C interni (**CRT_BLOCK**) non sono inclusi nelle operazioni di dump di memoria. Il [CrtSetDbgFlag](crtsetdbgflag.md) funzione può essere utilizzata per attivare il **crtdbg_check_crt_df** bit di **crtDbgFlag** per includere questi blocchi. I blocchi contrassegnati come liberati o ignorati (**FREE_BLOCK**, **IGNORE_BLOCK**) non sono inclusi nel dump della memoria.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e il **CrtMemState** struttura, vedere [funzioni segnalazione dello stato dell'Heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **CrtMemDumpAllObjectsSince**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
