---
title: _recalloc
ms.date: 4/2/2020
api_name:
- _recalloc
- _o__recalloc
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
- _recalloc
- recalloc
helpviewer_keywords:
- _recalloc function
- recalloc function
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
ms.openlocfilehash: 342228635e69d49e0b51196aef03a296c1f0e652
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82917857"
---
# <a name="_recalloc"></a>_recalloc

Combinazione di **realloc** e **calloc**. Rialloca una matrice in memoria e ne inizializza gli elementi su 0.

## <a name="syntax"></a>Sintassi

```C
void *_recalloc(
   void *memblock
   size_t num,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria allocato in precedenza.

*number*<br/>
Numero di elementi.

*size*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**_recalloc** restituisce un puntatore **void** al blocco di memoria riallocato (e possibilmente spostato).

Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata, il blocco originale viene lasciato invariato e viene restituito **null** .

Se la dimensione richiesta è zero, il blocco a cui punta *memblock* viene liberato; il valore restituito è **null**e *memblock* viene lasciato puntare a un blocco liberato.

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Osservazioni

La funzione **_recalloc** modifica la dimensione di un blocco di memoria allocato. L'argomento *memblock* punta all'inizio del blocco di memoria. Se *memblock* è **null**, **_recalloc** si comporta allo stesso modo di [calloc](calloc.md) e alloca un nuovo blocco di byte di *number* * *dimensioni* del numero. Ogni elemento viene inizializzato a 0. Se *memblock* non è **null**, deve essere un puntatore restituito da una precedente chiamata a **calloc**, [malloc](malloc.md)o [realloc](realloc.md).

Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, non è garantito che il puntatore restituito da **_recalloc** sia il puntatore passato tramite l'argomento *memblock* .

**_recalloc** imposta **errno** su **ENOMEM** se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**recalloc** chiama **realloc** per poter usare la funzione C++ [_set_new_mode](set-new-mode.md) per impostare la nuova modalità del gestore. La nuova modalità del gestore indica se, in caso di errore, **realloc** deve chiamare la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **realloc** non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **_recalloc** non riesce ad allocare memoria, **realloc** chiama la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore funziona quando ha esito negativo per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegare con NEWMODE.OBJ.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **_recalloc** risolve [_recalloc_dbg](recalloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**_recalloc** è contrassegnato `__declspec(noalias)` come `__declspec(restrict)`e, pertanto la funzione non modifica le variabili globali e il puntatore restituito non viene associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_recalloc**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Allocazione della memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_recalloc_dbg](recalloc-dbg.md)<br/>
[_aligned_recalloc](aligned-recalloc.md)<br/>
[_aligned_offset_recalloc](aligned-offset-recalloc.md)<br/>
[libero](free.md)<br/>
[Opzioni di collegamento](../../c-runtime-library/link-options.md)<br/>
