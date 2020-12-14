---
description: 'Altre informazioni su: set_terminate (CRT)'
title: set_terminate (CRT)
ms.date: 4/2/2020
api_name:
- set_terminate
- _o_set_terminate
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
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- set_terminate
helpviewer_keywords:
- set_terminate function
- terminate function
- exception handling, termination
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
ms.openlocfilehash: 6b25e141bc9299389c80e629ff6eb03d7deba23c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211102"
---
# <a name="set_terminate-crt"></a>set_terminate (CRT)

Installa la routine di terminazione personalizzata che verrà chiamata da **Terminate**.

## <a name="syntax"></a>Sintassi

```cpp
terminate_function set_terminate( terminate_function termFunction );
```

### <a name="parameters"></a>Parametri

*termFunction*<br/>
Puntatore a una funzione di terminazione personalizzata.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione precedente registrata da **set_terminate** in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **null**.

## <a name="remarks"></a>Commenti

La funzione **set_terminate** installa *termFunction* come funzione chiamata da **Terminate**. **set_terminate** viene utilizzata con la gestione delle eccezioni C++ e può essere chiamata in qualsiasi punto del programma prima che venga generata l'eccezione. **terminare** le chiamate [Abort](abort.md) per impostazione predefinita. È possibile modificare questa impostazione predefinita scrivendo una funzione di terminazione personalizzata e chiamando **set_terminate** con il nome della funzione come argomento. **Terminate** chiama l'ultima funzione specificata come argomento per **set_terminate**. Dopo aver eseguito le attività di pulizia desiderate, *termFunction* deve uscire dal programma. Se non termina (se restituisce al chiamante), viene chiamato [Abort](abort.md) .

In un ambiente multithreading, le funzioni di terminazione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di terminazione. Quindi, ogni thread è responsabile della propria gestione della terminazione.

Il tipo di **terminate_function** è definito in eh. H come puntatore a una funzione di terminazione definita dall'utente, *termFunction* che restituisce **`void`** . La funzione personalizzata *termFunction* non può assumere argomenti e non deve tornare al chiamante. In caso contrario, viene chiamato [Abort](abort.md) . Un'eccezione non può essere generata dall'interno di *termFunction*.

```cpp
typedef void ( *terminate_function )( );
```

> [!NOTE]
> La funzione **set_terminate** funziona solo all'esterno del debugger.

È disponibile un singolo gestore di **set_terminate** per tutte le dll o i exe collegati in modo dinamico; anche se si chiama **set_terminate** il gestore può essere sostituito da un altro, oppure è possibile che si stia sostituendo un gestore impostato da un altro file dll o exe.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_terminate**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [terminate](terminate-crt.md).

## <a name="see-also"></a>Vedi anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[interruzione](abort.md)<br/>
[_get_terminate](get-terminate.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminare](terminate-crt.md)<br/>
[inaspettato](unexpected-crt.md)<br/>
