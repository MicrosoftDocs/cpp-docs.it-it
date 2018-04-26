---
title: _CrtCheckMemory | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _CrtCheckMemory
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
- CrtCheckMemory
- _CrtCheckMemory
dev_langs:
- C++
helpviewer_keywords:
- _CrtCheckMemory function
- CrtCheckMemory function
ms.assetid: 457cc72e-60fd-4177-ab5c-6ae26a420765
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 18d1a51012a0950af2fe77cba4d8ecd0b1c89f90
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="crtcheckmemory"></a>_CrtCheckMemory

Conferma l'integrità dei blocchi di memoria allocati nell'heap di debug (solo per versione di debug).

## <a name="syntax"></a>Sintassi

```C

int _CrtCheckMemory( void );
```

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **CrtCheckMemory** restituisce TRUE; in caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

Il **CrtCheckMemory** funzione convalida memoria allocata dal gestore dell'heap di debug, verifica dell'heap di base sottostante e controllando ciascun blocco di memoria. Se viene rilevata un'incoerenza di errore o di memoria nell'heap di base sottostante, le informazioni sull'intestazione di debug o il buffer di sovrascrittura **CrtCheckMemory** genera un report di debug con informazioni che descrivono la condizione di errore. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtCheckMemory** vengono rimosse durante la pre-elaborazione.

Il comportamento delle **CrtCheckMemory** può essere controllato definendo i campi di bit il [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag utilizzando il [CrtSetDbgFlag](crtsetdbgflag.md) (funzione). L'attivazione di **crtdbg_check_always_df** risultato via del campo di bit **CrtCheckMemory** chiamato ogni volta che viene richiesta un'operazione di allocazione di memoria. Sebbene questo metodo rallenti l'esecuzione, è utile per individuare gli errori rapidamente. L'attivazione di **CRTDBG_ALLOC_MEM_DF** fa in modo che campo di bit **CrtCheckMemory** per non verifichi l'heap e viene restituito immediatamente **TRUE**.

Dato che la funzione restituisce **TRUE** o **FALSE**, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. L'esempio seguente genera un errore di asserzione se il danneggiamento viene rilevato nell'heap:

```C
_ASSERTE( _CrtCheckMemory( ) );
```

Per ulteriori informazioni sul **CrtCheckMemory** può essere utilizzato con altre funzioni di debug, vedere [funzioni segnalazione dello stato dell'Heap](/visualstudio/debugger/crt-debug-heap-details). Per una panoramica sulla gestione della memoria e l'heap per il debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtCheckMemory**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **CrtCheckMemory**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
[_CrtSetDbgFlag](crtsetdbgflag.md)<br/>
