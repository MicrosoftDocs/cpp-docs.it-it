---
description: 'Altre informazioni su: _CrtCheckMemory'
title: _CrtCheckMemory
ms.date: 11/04/2016
api_name:
- _CrtCheckMemory
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CrtCheckMemory
- _CrtCheckMemory
helpviewer_keywords:
- _CrtCheckMemory function
- CrtCheckMemory function
ms.assetid: 457cc72e-60fd-4177-ab5c-6ae26a420765
ms.openlocfilehash: f2537997a9adc1c2346560d3b65eecc633933616
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221592"
---
# <a name="_crtcheckmemory"></a>_CrtCheckMemory

Conferma l'integrità dei blocchi di memoria allocati nell'heap di debug (solo per versione di debug).

## <a name="syntax"></a>Sintassi

```C

int _CrtCheckMemory( void );
```

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **_CrtCheckMemory** restituisce true; in caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Commenti

La funzione **_CrtCheckMemory** convalida la memoria allocata dal gestore dell'heap di debug verificando l'heap di base sottostante ed esaminando ogni blocco di memoria. Se viene rilevata un'incoerenza di errore o memoria nell'heap di base sottostante, nelle informazioni sull'intestazione di debug o nei buffer di sovrascrittura, **_CrtCheckMemory** genera un report di debug con informazioni che descrivono la condizione di errore. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtCheckMemory** vengono rimosse durante la pre-elaborazione.

Il comportamento di **_CrtCheckMemory** può essere controllato impostando i campi di bit del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) utilizzando la funzione [_CrtSetDbgFlag](crtsetdbgflag.md) . L'attivazione del campo **_CRTDBG_CHECK_ALWAYS_DF** bit sui risultati in **_CrtCheckMemory** viene chiamata ogni volta che viene richiesta un'operazione di allocazione della memoria. Sebbene questo metodo rallenti l'esecuzione, è utile per individuare gli errori rapidamente. La disattivazione del campo **_CRTDBG_ALLOC_MEM_DF** bit causa la mancata verifica dell'heap da parte di **_CrtCheckMemory** e restituisce immediatamente **true**.

Poiché questa funzione restituisce **true** o **false**, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. L'esempio seguente genera un errore di asserzione se il danneggiamento viene rilevato nell'heap:

```C
_ASSERTE( _CrtCheckMemory( ) );
```

Per ulteriori informazioni sull'utilizzo di **_CrtCheckMemory** con altre funzioni di debug, vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per una panoramica sulla gestione della memoria e l'heap per il debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtCheckMemory**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_CrtCheckMemory**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
[_CrtSetDbgFlag](crtsetdbgflag.md)<br/>
