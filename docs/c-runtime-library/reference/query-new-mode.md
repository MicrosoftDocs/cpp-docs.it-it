---
title: _query_new_mode
ms.date: 11/04/2016
api_name:
- _query_new_mode
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
- api-ms-win-crt-heap-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- query_new_mode
- _query_new_mode
helpviewer_keywords:
- query_new_mode function
- handler modes
- _query_new_mode function
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
ms.openlocfilehash: 59724dafdc6488596478d0b44b254c4f498fce99
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70950107"
---
# <a name="_query_new_mode"></a>_query_new_mode

Restituisce un Integer che indica la nuova modalità del gestore impostata da **_set_new_mode** per **malloc**.

## <a name="syntax"></a>Sintassi

```C
int _query_new_mode(
   void
);
```

## <a name="return-value"></a>Valore restituito

Restituisce la nuova modalità del gestore corrente, ovvero 0 o 1, per **malloc**. Il valore restituito 1 indica che, in caso di errore di allocazione della memoria, **malloc** chiama la routine del nuovo gestore; il valore restituito 0 indica che non lo è.

## <a name="remarks"></a>Note

La C++ funzione **_query_new_mode** restituisce un Integer che indica la nuova modalità del gestore impostata C++ dalla funzione [_set_new_mode](set-new-mode.md) per [malloc](malloc.md). La nuova modalità del gestore indica se, in caso di errore di allocazione della memoria, **malloc** chiama la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **malloc** non chiama la routine del nuovo gestore in caso di errore. È possibile usare **_set_new_mode** per eseguire l'override di questo comportamento in modo che in caso di errore **malloc** chiami la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore esegue quando non riesce ad allocare memoria. Per altre informazioni, vedere la discussione relativa agli [operatori new e delete](../../cpp/new-and-delete-operators.md) nelle informazioni di riferimento sul linguaggio C++.

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
