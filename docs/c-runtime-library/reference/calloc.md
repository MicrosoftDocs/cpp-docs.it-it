---
title: calloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- calloc
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
- calloc
dev_langs:
- C++
helpviewer_keywords:
- memory allocation, arrays
- calloc function
ms.assetid: 17bb79a1-98cf-4096-90cb-1f9365cd6829
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e755be214542dc4a601ad5e0f1d4aa02201dd552
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="calloc"></a>calloc

Alloca una matrice in memoria con elementi inizializzati a 0.

## <a name="syntax"></a>Sintassi

```C
void *calloc(
   size_t num,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*Numero*<br/>
Numero di elementi.

*size*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**calloc** restituisce un puntatore per lo spazio allocato. Lo spazio di archiviazione a cui punta il valore restituito garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

Il **calloc** funzione alloca spazio di archiviazione per una matrice di *numero* elementi, ognuno di lunghezza *dimensioni* byte. Ogni elemento viene inizializzato a 0.

**calloc** imposta **errno** a **ENOMEM** se fallisce un'allocazione di memoria o se la quantità di memoria richiesto supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**calloc** chiamate **malloc** per l'utilizzo di C++ [set_new_mode](set-new-mode.md) funzione per impostare la nuova modalità di gestione. Indica la nuova modalità di gestione se, in caso di errore, **malloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la nuova routine del gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **calloc** non riesce ad allocare memoria, **malloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** (operatore) Quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegarsi a NEWMODE.OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **calloc** risolve [calloc_dbg](calloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**calloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali e che il puntatore restituito non è associato un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**calloc**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_calloc.c
// This program uses calloc to allocate space for
// 40 long integers. It initializes each element to zero.

#include <stdio.h>
#include <malloc.h>

int main( void )
{
   long *buffer;

   buffer = (long *)calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
```

```Output
Allocated 40 long integers
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[free](free.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
