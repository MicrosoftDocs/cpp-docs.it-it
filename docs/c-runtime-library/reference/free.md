---
title: free | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- free
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
- free
dev_langs:
- C++
helpviewer_keywords:
- memory blocks, deallocating
- free function
ms.assetid: 74ded9cf-1863-432e-9306-327a42080bb8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc6dfd832d18dbabc1ebc10aec252cc8afe15346
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32402517"
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

*memblock* allocato in precedenza il blocco di memoria da liberare.

## <a name="remarks"></a>Note

Il **gratuita** funzione dealloca un blocco di memoria (*memblock*) precedentemente allocato da una chiamata a **calloc**, **malloc**, o **realloc**. Il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato (o riallocato, nel caso di **realloc**). Se *memblock* viene **NULL**, il puntatore viene ignorato e **libero** restituisce immediatamente. Tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria che non è stato allocato da **calloc**, **malloc**, o **realloc**) possono influire sulle richieste di allocazione successive e provocare errori.

Se si verifica un errore nel liberare la memoria **errno** viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Dopo che un blocco di memoria è stato liberato, [_heapmin](heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **gratuita** risolve [free_dbg](free-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**libera** contrassegnato `__declspec(noalias)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

Per liberare la memoria allocata con [_malloca](malloca.md), usare [_freea](freea.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**free**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [malloc](malloc.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_alloca](alloca.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
[_free_dbg](free-dbg.md)<br/>
[_heapmin](heapmin.md)<br/>
[_freea](freea.md)<br/>
