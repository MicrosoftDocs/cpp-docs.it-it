---
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 08ea5bb8c446fadac6a7bcf7ca172c5d14546776
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332098"
---
# <a name="set_terminate-crt"></a>set_terminate (CRT)

Installa la propria routine di terminazione da chiamare **terminando**.

## <a name="syntax"></a>Sintassi

```cpp
terminate_function set_terminate( terminate_function termFunction );
```

### <a name="parameters"></a>Parametri

*termineFunzione*<br/>
Puntatore a una funzione di terminazione personalizzata.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione precedente registrata da **set_terminate** in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; questo valore può essere **NULL**.

## <a name="remarks"></a>Osservazioni

La funzione **set_terminate** installa *termFunction* come funzione chiamata da **terminate**. **set_terminate** viene utilizzata con la gestione delle eccezioni di C, che può essere chiamata in qualsiasi punto del programma prima che venga generata l'eccezione. **terminare** le chiamate [interrompere](abort.md) per impostazione predefinita. È possibile modificare questa impostazione predefinita scrivendo la propria funzione di terminazione e chiamando **set_terminate** con il nome della funzione come argomento. **terminate** chiama l'ultima funzione fornita come argomento per **set_terminate**. Dopo aver eseguito tutte le attività di pulizia desiderate, *termFunction* deve uscire dal programma. Se non esce (se ritorna al chiamante), [abort](abort.md) viene chiamato.

In un ambiente multithreading, le funzioni di terminazione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di terminazione. Quindi, ogni thread è responsabile della propria gestione della terminazione.

Il **tipo di terminate_function** è definito in EH. H come puntatore a una funzione di terminazione definita dall'utente, *termFunction* che restituisce **void**. La funzione personalizzata *termFunction* non può accettare argomenti e non deve restituire al chiamante. In caso affermativo, viene chiamato [abort.](abort.md) Un'eccezione non può essere generata da all'interno di *termFunction*.

```cpp
typedef void ( *terminate_function )( );
```

> [!NOTE]
> La funzione **set_terminate** funziona solo all'esterno del debugger.

Esiste un unico **gestore set_terminate** per tutte le DLL o eSE collegate dinamicamente; anche se si chiama **set_terminate** il gestore può essere sostituito da un altro o si potrebbe sostituire un gestore impostato da un'altra DLL o EXE.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_terminate**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [terminate](terminate-crt.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[Interrompere](abort.md)<br/>
[_get_terminate](get-terminate.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[termine](terminate-crt.md)<br/>
[Inaspettato](unexpected-crt.md)<br/>
