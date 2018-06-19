---
title: _recalloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _recalloc
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
- _recalloc
- recalloc
dev_langs:
- C++
helpviewer_keywords:
- _recalloc function
- recalloc function
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c4ae06fbd3d10f1014fe1c879b482f30302a4f3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409303"
---
# <a name="recalloc"></a>_recalloc

Una combinazione di **realloc** e **calloc**. Rialloca una matrice in memoria e ne inizializza gli elementi su 0.

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

*size*<br/>
Lunghezza in byte di ogni elemento.

## <a name="return-value"></a>Valore restituito

**recalloc** restituisce un **void** puntatore al blocco di memoria riallocato (e possibilmente spostato).

Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale resta invariato, e **NULL** viene restituito.

Se la dimensione richiesta è uguale a zero, quindi il blocco a cui punta *memblock* viene liberato; il valore restituito è **NULL**, e *memblock* punta a un blocco liberato.

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

Il **recalloc** funzione modifica la dimensione di un blocco di memoria allocata. Il *memblock* argomento punta all'inizio del blocco di memoria. Se *memblock* viene **NULL**, **recalloc** si comporta esattamente come [calloc](calloc.md) e assegna un nuovo blocco di *numero*  *  *dimensioni* byte. Ogni elemento viene inizializzato a 0. Se *memblock* non **NULL**, deve essere un puntatore restituito da una precedente chiamata a **calloc**, [malloc](malloc.md), o [realloc ](realloc.md).

Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, il puntatore restituito da **recalloc** non è necessariamente il puntatore passato tramite il *memblock* argomento.

**recalloc** imposta **errno** a **ENOMEM** se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesto supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**recalloc** chiamate **realloc** per usare C++ [set_new_mode](set-new-mode.md) funzione per impostare la nuova modalità di gestione. Indica la nuova modalità di gestione se, in caso di errore, **realloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione [set_new_handler](set-new-handler.md). Per impostazione predefinita **realloc** non chiama la nuova routine del gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **recalloc** non riesce ad allocare memoria **realloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** (operatore) esegue quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare

```C
_set_new_mode(1);
```

all'inizio del programma o collegare con NEWMODE.OBJ.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **recalloc** risolve [recalloc_dbg](recalloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**recalloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali e che il puntatore restituito non è associato un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_recalloc**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_recalloc_dbg](recalloc-dbg.md)<br/>
[_aligned_recalloc](aligned-recalloc.md)<br/>
[_aligned_offset_recalloc](aligned-offset-recalloc.md)<br/>
[free](free.md)<br/>
[Opzioni di collegamento](../../c-runtime-library/link-options.md)<br/>
