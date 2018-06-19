---
title: _CrtIsValidPointer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CrtIsValidPointer function
- _CrtIsValidPointer function
ms.assetid: 91c35590-ea5e-450f-a15d-ad8d62ade1fa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1bb78f8dee494fd213df6db16e2800cb9090bdf3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32397270"
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

Inizia con la libreria CRT in Visual Studio 2010, il *dimensioni* e *accesso* i parametri vengono ignorati, e **CrtIsValidPointer** verifica solo che specificato*indirizzo* non è null. Poiché è facile eseguire questo test manualmente , non è consigliabile usare questa funzione. Nelle versioni precedenti a Visual Studio 2010, la funzione verifica che l'intervallo di memoria partire *indirizzo* e si estende per *dimensioni* byte sia valido per l'accessibilità specificata o più operazioni. Quando si *accesso* è impostata su TRUE, viene verificata l'intervallo di memoria per la lettura e scrittura. Quando si *accesso* è FALSE, l'intervallo di memoria viene convalidato solo per la lettura. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtIsValidPointer** vengono rimosse durante la pre-elaborazione.

Dato che la funzione restituisce TRUE o FALSE, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. L'esempio seguente causa un errore di asserzione se l'intervallo di memoria non è valido per entrambe lettura e scrittura:

```C
_ASSERTE( _CrtIsValidPointer( address, size, TRUE ) );
```

Per ulteriori informazioni sul **CrtIsValidPointer** può essere utilizzato con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

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
