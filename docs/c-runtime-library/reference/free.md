---
description: 'Altre informazioni su: gratuito'
title: free
ms.date: 4/2/2020
api_name:
- free
- _o_free
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
- free
helpviewer_keywords:
- memory blocks, deallocating
- free function
ms.assetid: 74ded9cf-1863-432e-9306-327a42080bb8
ms.openlocfilehash: 731bd1ea6cf3bfe56bf71ee762fb3477346ddf13
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314022"
---
# <a name="free"></a>free

Dealloca o libera un blocco di memoria.

## <a name="syntax"></a>Sintassi

```C
void free(
   void *memblock
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Blocco di memoria precedentemente allocata da liberare.

## <a name="remarks"></a>Commenti

La funzione **Free** consente di deallocare un blocco di memoria (*memblock*) precedentemente allocato da una chiamata a **calloc**, **malloc** o **realloc**. Il numero di byte liberati è equivalente al numero di byte richiesti quando il blocco è stato allocato (o riallocato, nel caso di **realloc**). Se *memblock* è **null**, il puntatore viene ignorato e **Free** restituisce immediatamente un risultato. Il tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria non allocato da **calloc**, **malloc** o **realloc**) può influire sulle richieste di allocazione successive e causare errori.

Se si verifica un errore durante la liberazione della memoria, **errno** viene impostato con le informazioni del sistema operativo sulla natura dell'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Dopo che un blocco di memoria è stato liberato, [_heapmin](heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C **, viene** risolto in [_free_dbg](free-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**Free** è contrassegnato `__declspec(noalias)` , pertanto la funzione non modifica le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

Per liberare la memoria allocata con [_malloca](malloca.md), usare [_freea](freea.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**free**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [malloc](malloc.md).

## <a name="see-also"></a>Vedi anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_alloca](alloca.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
[_free_dbg](free-dbg.md)<br/>
[_heapmin](heapmin.md)<br/>
[_freea](freea.md)<br/>
