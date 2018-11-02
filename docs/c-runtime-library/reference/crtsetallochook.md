---
title: _CrtSetAllocHook
ms.date: 11/04/2016
apiname:
- _CrtSetAllocHook
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
- _CrtSetAllocHook
- CrtSetAllocHook
helpviewer_keywords:
- _CrtSetAllocHook function
- CrtSetAllocHook function
ms.assetid: 405df37b-2fd1-42c8-83bc-90887f17f29d
ms.openlocfilehash: cfa466ec4bce6034c15a627ccab4ee4bb0ef8f5b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50533679"
---
# <a name="crtsetallochook"></a>_CrtSetAllocHook

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

Restituisce la funzione hook di allocazione definita in precedenza, oppure **NULL** se *allocHook* viene **NULL**.

## <a name="remarks"></a>Note

**CrtSetAllocHook** consente a un'applicazione associare la propria funzione di allocazione al processo di allocazione della memoria della libreria di debug del runtime C. Di conseguenza, ogni chiamata a una funzione di allocazione di debug per allocare, riallocare o liberare un blocco di memoria attiva una chiamata alla funzione hook dell'applicazione. **CrtSetAllocHook** fornisce un'applicazione con un metodo semplice per testare come l'applicazione gestisce situazioni di memoria insufficiente, la possibilità di esaminare schemi di allocazione e la possibilità di registrare informazioni di allocazione in un secondo momento analisi. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetAllocHook** vengono rimosse durante la pre-elaborazione.

Il **CrtSetAllocHook** funzione consente di installare la nuova funzione di allocazione definita dal client specificata *allocHook* e restituisce la funzione hook definita in precedenza. Nell'esempio seguente viene illustrato come dovrebbe essere il prototipo di una funzione hook di allocazione definita dal client:

```C
int YourAllocHook( int allocType, void *userData, size_t size,
                   int blockType, long requestNumber,
                   const unsigned char *filename, int lineNumber);
```

Il **allocType** argomento specifica il tipo di operazione di allocazione (**HOOK_ALLOC**, **HOOK_REALLOC**, e **HOOK_FREE**) che ha attivato la chiamata alla funzione hook di allocazione. Quando è il tipo di allocazione di attivazione **HOOK_FREE**, *userData* è un puntatore alla sezione dati utente del blocco di memoria che sarà liberato. Tuttavia, quando il tipo di allocazione di attivazione è **HOOK_ALLOC** oppure **HOOK_REALLOC**, *userData* è **NULL** di bloccare la memoria non è stato allocato ancora.

*le dimensioni* specifica le dimensioni della memoria di blocco in byte *blockType* indica il tipo del blocco di memoria, *requestNumber* è il numero di ordine di allocazione di oggetto del blocco di memoria e, se disponibile, *nomefile* e **lineNumber** specificare l'origine file nome del numero di riga e in cui è stata avviata l'operazione di allocazione di attivazione.

Dopo che la funzione hook ha terminato l'elaborazione, deve restituire un valore booleano che indica al processo di allocazione principale di runtime del linguaggio C come procedere. Quando la funzione hook richiede che il processo di allocazione principale continui come se non fosse mai stata chiamata la funzione hook, allora la funzione hook deve restituire **TRUE**. In questo modo deve essere eseguita l'operazione originale di allocazione di attivazione. Mediante questa implementazione, la funzione hook può raggruppare e salvare le informazioni di allocazione per analisi successive, senza interferire con l'operazione di allocazione o lo stato corrente dell'heap di debug.

Quando la funzione hook richiede che il processo di allocazione principale continui come se è stato chiamato l'operazione di allocazione di attivazione e non è riuscita, quindi la funzione hook deve restituire **FALSE**. Mediante questa implementazione, la funzione hook può simulare un'ampia gamma di condizioni della memoria e di stati dell'heap di debug per testare come l'applicazione gestisce ogni situazione.

Per cancellare la funzione hook, passare **NULL** al **CrtSetAllocHook**.

Per altre informazioni su come **CrtSetAllocHook** può essere utilizzato con altre funzioni di gestione della memoria o sulla scrittura delle funzioni di hook definite dal client, vedere [scrittura di funzioni Hook di Debug](/visualstudio/debugger/debug-hook-function-writing).

> [!NOTE]
> **CrtSetAllocHook** non è supportato in **/clr: pure**. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e rimossa in Visual Studio 2017.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetAllocHook**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio d'uso **CrtSetAllocHook**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtGetAllocHook](crtgetallochook.md)<br/>
