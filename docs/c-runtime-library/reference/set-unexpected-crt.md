---
title: set_unexpected (CRT) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- set_unexpected
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
- set_unexpected
dev_langs:
- C++
helpviewer_keywords:
- set_unexpected function
- unexpected function
- exception handling, termination
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c740f74dc13ea22819d0f792bfc1e3dbcc9f425e
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="setunexpected-crt"></a>set_unexpected (CRT)

Installa la funzione di terminazione personalizzata che verrà chiamata da **unexpected**.

## <a name="syntax"></a>Sintassi

```cpp
unexpected_function set_unexpected( unexpected_function unexpFunction );
```

### <a name="parameters"></a>Parametri

*unexpFunction*<br/>
Puntatore a una funzione che si scrive per sostituire i **imprevisto** (funzione).

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di terminazione precedente registrato da **_set_unexpected** in modo che la funzione precedente può essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere usato per ripristinare il comportamento predefinito. Questo valore può essere NULL.

## <a name="remarks"></a>Note

Il **set_unexpected** funzione installazioni *unexpFunction* come la funzione chiamata da **imprevisto**. **imprevisto** non viene usato nell'implementazione di gestione delle eccezioni C++ corrente. Il **unexpected_function** tipo è definito in EH. H come un puntatore a una funzione non prevista definita dall'utente *unexpFunction* che restituisce **void**. Personalizzato *unexpFunction* funzione non deve restituire al chiamante.

```cpp
typedef void ( *unexpected_function )( );
```

Per impostazione predefinita **imprevisto** chiamate **terminare**. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione e chiamando **set_unexpected** con il nome della funzione come relativo argomento. **imprevisto** chiama l'ultima funzione fornita come argomento al **set_unexpected**.

A differenza della funzione di terminazione personalizzata installata da una chiamata a **set_terminate**, può essere generata un'eccezione dall'interno *unexpFunction*.

In un ambiente multithreading, le funzioni unexpected vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione unexpected. Quindi, ogni thread è responsabile della propria gestione degli eventi imprevisti.

Nell'implementazione Microsoft corrente di gestione delle eccezioni C++, **imprevisto** chiamate **terminare** per impostazione predefinita e non viene mai chiamato dalla libreria di runtime di gestione delle eccezioni. Non offre alcun vantaggio determinato alla chiamata al metodo **imprevisto** anziché **terminare**.

Un singolo **set_unexpected** gestore per tutti i collegata in modo dinamico alle DLL o exe; anche se si chiama **set_unexpected** il gestore può essere sostituito da un'altra o che si sta sostituendo un gestore impostato da un altro file DLL o EXE.

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
