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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 57972a48336d8dd362b5da7513c854703134921b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338114"
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

*Numero*<br/>
Numero di elementi.

*Dimensione*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**_recalloc** restituisce un puntatore **void** al blocco di memoria riallocato (ed eventualmente spostato).

Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata, il blocco originale viene lasciato invariato e viene restituito **NULL.**

Se la dimensione richiesta è zero, il blocco a cui punta *memblock* viene liberato; il valore restituito è **NULL**e *memblock* è a sinistra che punta a un blocco liberato.

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, utilizzare un cast di tipo sul valore restituito.

## <a name="remarks"></a>Osservazioni

La funzione **_recalloc** modifica la dimensione di un blocco di memoria allocato. L'argomento *memblock* punta all'inizio del blocco di memoria. Se *memblock* è **NULL**, **_recalloc** si comporta allo stesso modo di [calloc](calloc.md) e alloca un nuovo blocco di byte*di dimensione* *numerica.* *  Ogni elemento viene inizializzato a 0. Se *memblock* non è **NULL**, deve essere un puntatore restituito da una precedente chiamata a **calloc**, [malloc](malloc.md)o [realloc](realloc.md).

Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, non è garantito che il puntatore restituito da **_recalloc** sia il puntatore passato tramite l'argomento *memblock.*

**_recalloc** imposta **errno** su **ENOMEM** se l'allocazione della memoria non riesce o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**recalloc** chiama **realloc** per utilizzare la funzione [_set_new_mode](set-new-mode.md) C, per impostare la nuova modalità di gestione. La nuova modalità del gestore indica se, in caso di errore, **realloc** deve chiamare la nuova routine del gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **realloc** non chiama la nuova routine del gestore in caso di errore nell'allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **_recalloc** non riesce ad allocare memoria, **realloc** chiama la nuova routine del gestore nello stesso modo in cui l'operatore **new** esegue quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegare con NEWMODE.OBJ.

Quando l'applicazione è collegata a una versione di debug delle librerie di runtime del linguaggio C, **_recalloc** viene risolto in [_recalloc_dbg](recalloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**_recalloc** è `__declspec(noalias)` `__declspec(restrict)`contrassegnato e , ovvero la funzione non modifica le variabili globali e che il puntatore restituito non è un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
[Gratuito](free.md)<br/>
[Opzioni di collegamento](../../c-runtime-library/link-options.md)<br/>
