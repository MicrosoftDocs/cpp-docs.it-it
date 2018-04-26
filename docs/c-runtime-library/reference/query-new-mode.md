---
title: _query_new_mode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _query_new_mode
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- query_new_mode
- _query_new_mode
dev_langs:
- C++
helpviewer_keywords:
- query_new_mode function
- handler modes
- _query_new_mode function
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 67a7b52bc2a16e5c87e6ba83c3ba9c2710c2ed88
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="querynewmode"></a>_query_new_mode

Restituisce un intero che indica la nuova modalità di gestione l'impostazione **set_new_mode** per **malloc**.

## <a name="syntax"></a>Sintassi

```C
int _query_new_mode(
   void
);
```

## <a name="return-value"></a>Valore restituito

Restituisce la modalità gestore nuovo corrente, vale a dire 0 o 1, per **malloc**. Un valore restituito pari a 1 indica che, in caso di errore di allocazione della memoria, **malloc** chiama la routine del gestore nuova; un valore restituito pari a 0 indica che non è presente.

## <a name="remarks"></a>Note

C++ **query_new_mode** funzione restituisce un intero che indica la nuova modalità di gestione che l'impostazione è C++ [set_new_mode](set-new-mode.md) funzionare per [malloc](malloc.md). Indica la nuova modalità di gestione se, in caso di errore di allocazione della memoria, **malloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la nuova routine del gestore in caso di errore. È possibile utilizzare **set_new_mode** per eseguire l'override di questo comportamento in modo che in caso di errore **malloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** operatore esegue quando risulta impossibile allocare memoria. Per altre informazioni, vedere la discussione relativa agli [operatori new e delete](../../cpp/new-and-delete-operators.md) nelle informazioni di riferimento sul linguaggio C++.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_query_new_mode**|\<new.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_query_new_handler](query-new-handler.md)<br/>
