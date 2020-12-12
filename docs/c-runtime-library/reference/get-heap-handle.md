---
description: 'Altre informazioni su: _get_heap_handle'
title: _get_heap_handle
ms.date: 4/2/2020
api_name:
- _get_heap_handle
- _o__get_heap_handle
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _get_heap_handle
- get_heap_handle
helpviewer_keywords:
- heap functions
- memory allocation, heap memory
- _get_heap_handle function
- get_heap_handle function
ms.assetid: a4d05049-8528-494a-8281-a470d1e1115c
ms.openlocfilehash: dacf90e981233c92534a2667ad31462e9bf5992c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205213"
---
# <a name="_get_heap_handle"></a>_get_heap_handle

Restituisce l'handle dell'heap che viene usato dal sistema di runtime del linguaggio C.

## <a name="syntax"></a>Sintassi

```C
intptr_t _get_heap_handle( void );
```

## <a name="return-value"></a>Valore restituito

Restituisce l'handle dell'heap Win32 che viene usato dal sistema di runtime del linguaggio C.

## <a name="remarks"></a>Commenti

Usare questa funzione se si vuole chiamare [HeapSetInformation](/windows/win32/api/heapapi/nf-heapapi-heapsetinformation) e abilitare Low Fragmentation Heap sull'heap CRT.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_heap_handle**|\<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="sample"></a>Esempio

```cpp
// crt_get_heap_handle.cpp
// compile with: /MT
#include <windows.h>
#include <malloc.h>
#include <stdio.h>

int main(void)
{
    intptr_t hCrtHeap = _get_heap_handle();
    ULONG ulEnableLFH = 2;
    if (HeapSetInformation((PVOID)hCrtHeap,
                           HeapCompatibilityInformation,
                           &ulEnableLFH, sizeof(ulEnableLFH)))
        puts("Enabling Low Fragmentation Heap succeeded");
    else
        puts("Enabling Low Fragmentation Heap failed");
    return 0;
}
```

## <a name="see-also"></a>Vedi anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
