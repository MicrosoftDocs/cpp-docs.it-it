---
title: _query_new_mode
ms.date: 11/04/2016
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
helpviewer_keywords:
- query_new_mode function
- handler modes
- _query_new_mode function
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
ms.openlocfilehash: 327f22c847793316bd126721b4a66846d7da84dd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50620025"
---
# <a name="querynewmode"></a>_query_new_mode

Restituisce un intero che indica la nuova modalità del gestore impostata da **set_new_mode** per **malloc**.

## <a name="syntax"></a>Sintassi

```C
int _query_new_mode(
   void
);
```

## <a name="return-value"></a>Valore restituito

Restituisce la modalità del gestore nuovo corrente, ovvero 0 o 1, per **malloc**. Valore restituito pari a 1 indica che, in caso di errore di allocazione della memoria, **malloc** chiama la routine del nuovo gestore; un valore restituito pari a 0 indica che non lo è.

## <a name="remarks"></a>Note

C++ **query_new_mode** funzione restituisce un intero che indica la nuova modalità del gestore impostata da C++ [set_new_mode](set-new-mode.md) per funziona [malloc](malloc.md). La nuova modalità del gestore indica se, in caso di errore di allocazione della memoria, **malloc** consiste nel chiamare la routine del nuovo gestore come impostato da [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la routine del nuovo gestore in caso di errore. È possibile usare **set_new_mode** per eseguire l'override di questo comportamento in modo che in caso di errore **malloc** chiama la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore esegue quando non riesce a allocare memoria. Per altre informazioni, vedere la discussione relativa agli [operatori new e delete](../../cpp/new-and-delete-operators.md) nelle informazioni di riferimento sul linguaggio C++.

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
