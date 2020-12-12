---
description: 'Altre informazioni su: _CrtSetAllocHook'
title: _CrtSetAllocHook
ms.date: 11/04/2016
api_name:
- _CrtSetAllocHook
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
- _CrtSetAllocHook
- CrtSetAllocHook
helpviewer_keywords:
- _CrtSetAllocHook function
- CrtSetAllocHook function
ms.assetid: 405df37b-2fd1-42c8-83bc-90887f17f29d
ms.openlocfilehash: a60024eff510f457cfc16f4afa3035efef37cca4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319664"
---
# <a name="_crtsetallochook"></a>_CrtSetAllocHook

Installa una funzione di allocazione definita dal client collegandola al processo di allocazione della memoria di debug del runtime del linguaggio C (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_CRT_ALLOC_HOOK _CrtSetAllocHook(
   _CRT_ALLOC_HOOK allocHook
);
```

### <a name="parameters"></a>Parametri

*allocHook*<br/>
Nuova funzione di allocazione definita dal client da collegare al processo di allocazione della memoria di debug del runtime del linguaggio C.

## <a name="return-value"></a>Valore restituito

Restituisce la funzione hook di allocazione definita in precedenza o **null** se *allocHook* è **null**.

## <a name="remarks"></a>Commenti

**_CrtSetAllocHook** consente a un'applicazione di associare la propria funzione di allocazione al processo di allocazione della memoria della libreria di debug del runtime del linguaggio C. Di conseguenza, ogni chiamata a una funzione di allocazione di debug per allocare, riallocare o liberare un blocco di memoria attiva una chiamata alla funzione hook dell'applicazione. **_CrtSetAllocHook** fornisce un'applicazione con un metodo semplice per testare il modo in cui l'applicazione gestisce le situazioni di memoria insufficiente, la possibilità di esaminare i modelli di allocazione e la possibilità di registrare le informazioni di allocazione per analisi successive. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetAllocHook** vengono rimosse durante la pre-elaborazione.

La funzione **_CrtSetAllocHook** installa la nuova funzione di allocazione definita dal client specificata in *allocHook* e restituisce la funzione hook definita in precedenza. Nell'esempio seguente viene illustrato come dovrebbe essere il prototipo di una funzione hook di allocazione definita dal client:

```C
int YourAllocHook( int allocType, void *userData, size_t size,
                   int blockType, long requestNumber,
                   const unsigned char *filename, int lineNumber);
```

L'argomento **allocType** specifica il tipo di operazione di allocazione (**_HOOK_ALLOC**, **_HOOK_REALLOC** e **_HOOK_FREE**) che ha attivato la chiamata alla funzione hook dell'allocazione. Quando il tipo di allocazione di attivazione è **_HOOK_FREE**, *UserData* è un puntatore alla sezione di dati utente del blocco di memoria che sta per essere liberato. Tuttavia, quando il tipo di allocazione di attivazione è **_HOOK_ALLOC** o **_HOOK_REALLOC**, *UserData* è **null** perché il blocco di memoria non è ancora stato allocato.

*dimensioni* specifica la dimensione del blocco di memoria in byte, *blockType* indica il tipo di blocco di memoria, *requestNumber* è il numero di ordine di allocazione dell'oggetto del blocco di memoria e, se disponibile, *filename* e **lineNumber** specificano il nome del file di origine e il numero di riga in cui è stata avviata l'operazione di allocazione di attivazione.

Dopo che la funzione hook ha terminato l'elaborazione, deve restituire un valore booleano che indica al processo di allocazione principale di runtime del linguaggio C come procedere. Quando la funzione hook desidera che il processo di allocazione principale continui come se la funzione hook non fosse mai stata chiamata, la funzione hook deve restituire **true**. In questo modo deve essere eseguita l'operazione originale di allocazione di attivazione. Mediante questa implementazione, la funzione hook può raggruppare e salvare le informazioni di allocazione per analisi successive, senza interferire con l'operazione di allocazione o lo stato corrente dell'heap di debug.

Quando la funzione hook richiede che il processo di allocazione principale continui come se l'operazione di allocazione di attivazione venisse chiamata e non avesse esito negativo, la funzione hook deve restituire **false**. Mediante questa implementazione, la funzione hook può simulare un'ampia gamma di condizioni della memoria e di stati dell'heap di debug per testare come l'applicazione gestisce ogni situazione.

Per cancellare la funzione hook, passare **null** a **_CrtSetAllocHook**.

Per altre informazioni sull'uso di **_CrtSetAllocHook** con altre funzioni di gestione della memoria o sulla scrittura di funzioni hook definite dal client, vedere debug di funzioni [hook di debug](/visualstudio/debugger/debug-hook-function-writing).

> [!NOTE]
> **_CrtSetAllocHook** non è supportato in **/CLR: pure**. Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e rimosse in Visual Studio 2017.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetAllocHook**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_CrtSetAllocHook**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtGetAllocHook](crtgetallochook.md)<br/>
