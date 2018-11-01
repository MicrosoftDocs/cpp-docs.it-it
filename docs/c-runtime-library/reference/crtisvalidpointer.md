---
title: _CrtIsValidPointer
ms.date: 11/04/2016
apiname:
- _CrtIsValidPointer
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
apitype: DLLExport
f1_keywords:
- CrtlsValidPointer
- _CrtIsValidPointer
helpviewer_keywords:
- CrtIsValidPointer function
- _CrtIsValidPointer function
ms.assetid: 91c35590-ea5e-450f-a15d-ad8d62ade1fa
ms.openlocfilehash: 64197d460cdb7dd26d22196c08151be09df48573
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429247"
---
# <a name="crtisvalidpointer"></a>_CrtIsValidPointer

Verifica che un puntatore non sia Null. Nelle versioni della libreria di runtime del linguaggio C precedenti a Visual Studio 2010, verifica che l'intervallo di memoria specificato sia valido per lettura e scrittura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtIsValidPointer(
   const void *address,
   unsigned int size,
   int access
);
```

### <a name="parameters"></a>Parametri

*address*<br/>
Punta all'inizio dell'intervallo di memoria per il test della validità.

*size*<br/>
Dimensione dell'intervallo di memoria specificato (in byte).

*access*<br/>
Accessibilità in lettura/scrittura da determinare per l'intervallo di memoria.

## <a name="return-value"></a>Valore restituito

**CrtIsValidPointer** restituisce TRUE se il puntatore specificato non è null. Nelle versioni della libreria CRT precedenti a Visual Studio 2010, restituisce TRUE se l'intervallo di memoria è valido per l'operazione o per le operazioni specificate. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

Inizia con la libreria CRT in Visual Studio 2010, il *dimensioni* e *access* i parametri vengono ignorati, e **CrtIsValidPointer** si limita a verificare che il specificato*indirizzo* non null. Poiché è facile eseguire questo test manualmente , non è consigliabile usare questa funzione. Nelle versioni precedenti di Visual Studio 2010, la funzione verifica che l'intervallo di memoria partire *indirizzi* e si estende per *dimensioni* byte sia valido per l'accessibilità specificate o più operazioni. Quando *accesso* è impostato su TRUE, l'intervallo di memoria viene verificato per la lettura e scrittura. Quando *accesso* è FALSE, l'intervallo di memoria viene convalidato solo per la lettura. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtIsValidPointer** vengono rimosse durante la pre-elaborazione.

Dato che la funzione restituisce TRUE o FALSE, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. L'esempio seguente causa un errore di asserzione se l'intervallo di memoria non è valido per entrambe lettura e scrittura:

```C
_ASSERTE( _CrtIsValidPointer( address, size, TRUE ) );
```

Per altre informazioni su come **CrtIsValidPointer** può essere utilizzato con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtIsValidPointer**|\<crtdbg.h>|

**CrtIsValidPointer** è un'estensione Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio per l'argomento [_CrtIsValidHeapPointer](crtisvalidheappointer.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
