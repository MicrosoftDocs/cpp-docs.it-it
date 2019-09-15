---
title: set_unexpected (CRT)
ms.date: 11/04/2016
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
ms.openlocfilehash: 77c8f0ae8c64423a656a2ebbe1fe3ef6dbe1b794
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948296"
---
# <a name="set_unexpected-crt"></a>set_unexpected (CRT)

Installa la funzione di terminazione personalizzata che verrà chiamata da **unexpected**.

## <a name="syntax"></a>Sintassi

```cpp
unexpected_function set_unexpected( unexpected_function unexpFunction );
```

### <a name="parameters"></a>Parametri

*unexpFunction*<br/>
Puntatore a una funzione che si scrive per sostituire la funzione **imprevista** .

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di terminazione precedente registrata da **_set_unexpected** in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **null**.

## <a name="remarks"></a>Note

La funzione **set_unexpected** installa *unexpFunction* come funzione chiamata da **Unexpected**. non **è utilizzato** nell'implementazione corrente C++ di gestione delle eccezioni. Il tipo **unexpected_function** è definito in eh. H come puntatore a una funzione imprevista definita dall'utente, *unexpFunction* che restituisce **void**. La funzione *unexpFunction* personalizzata non deve tornare al chiamante.

```cpp
typedef void ( *unexpected_function )( );
```

Per impostazione predefinita, le chiamate **impreviste** **terminano**. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_unexpected** con il nome della funzione come argomento. **imprevisto** chiama l'ultima funzione fornita come argomento a **set_unexpected**.

A differenza della funzione di terminazione personalizzata installata da una chiamata a **set_terminate**, un'eccezione può essere generata dall'interno di *unexpFunction*.

In un ambiente multithreading, le funzioni unexpected vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione unexpected. Quindi, ogni thread è responsabile della propria gestione degli eventi imprevisti.

Nell'implementazione Microsoft corrente della gestione C++ delle eccezioni, le chiamate **impreviste** **terminano** per impostazione predefinita e non vengono mai chiamate dalla libreria di runtime per la gestione delle eccezioni. Non vi è alcun vantaggio particolare derivante dalla chiamata di **Unexpected** anziché **terminare**.

È disponibile un singolo gestore **set_unexpected** per tutte le dll o i exe collegati in modo dinamico; anche se si chiama **set_unexpected** , il gestore può essere sostituito da un altro o che si sta sostituendo un gestore impostato da un altro file dll o exe.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_unexpected**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_get_unexpected](get-unexpected.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[Imprevisto](unexpected-crt.md)<br/>
