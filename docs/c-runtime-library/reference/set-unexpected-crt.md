---
description: 'Altre informazioni su: set_unexpected (CRT)'
title: set_unexpected (CRT)
ms.date: 1/14/2021
api_name:
- set_unexpected
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- set_unexpected
helpviewer_keywords:
- set_unexpected function
- unexpected function
- exception handling, termination
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
ms.openlocfilehash: b9918e152a5d27c853aef7769b932ee4efedeef8
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242631"
---
# <a name="set_unexpected-crt"></a>`set_unexpected` CRT

Installa la funzione di terminazione personalizzata che verrà chiamata da **`unexpected`** .

## <a name="syntax"></a>Sintassi

```cpp
unexpected_function set_unexpected( unexpected_function unexpFunction );
```

### <a name="parameters"></a>Parametri

*`unexpFunction`*\
Puntatore a una funzione che si scrive per sostituire la **`unexpected`** funzione.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di terminazione precedente registrata da in **`_set_unexpected`** modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **`NULL`** .

## <a name="remarks"></a>Commenti

La **`set_unexpected`** funzione installa *unexpFunction* come funzione chiamata da **`unexpected`** . **`unexpected`** non viene utilizzato nell'implementazione corrente di gestione delle eccezioni C++. Il **`unexpected_function`** tipo è definito in eh. H come puntatore a una funzione imprevista definita dall'utente, *unexpFunction* che restituisce **`void`** . La funzione *unexpFunction* personalizzata non deve tornare al chiamante.

```cpp
typedef void ( *unexpected_function )( );
```

Per impostazione predefinita, **`unexpected`** chiama **`terminate`** . È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **`set_unexpected`** con il nome della funzione come argomento. **`unexpected`** chiama l'ultima funzione fornita come argomento a **`set_unexpected`** .

A differenza della funzione di terminazione personalizzata installata da una chiamata a **`set_terminate`** , un'eccezione può essere generata dall'interno di **`unexpFunction`** .

In un ambiente multithreading, le funzioni unexpected vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione unexpected. Quindi, ogni thread è responsabile della propria gestione degli eventi imprevisti.

Nell'implementazione Microsoft corrente della gestione delle eccezioni C++, **`unexpected`** chiama **`terminate`** per impostazione predefinita e non viene mai chiamata dalla libreria di runtime per la gestione delle eccezioni. Non esiste alcun vantaggio particolare per chiamare **`unexpected`** anziché **term'inate**.

È disponibile un unico **`set_unexpected`** gestore per tutti i file dll o exe collegati in modo dinamico. anche se si chiama **`set_unexpected`** il gestore, è possibile che venga sostituito da un altro o che si stia sostituendo un gestore impostato da un altro file dll o exe.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`set_unexpected`**|`<eh.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)\
[`abort`](abort.md)\
[`_get_unexpected`](get-unexpected.md)\
[`set_terminate`](set-terminate-crt.md)\
[`terminate`](terminate-crt.md)\
[`unexpected`](unexpected-crt.md)\
