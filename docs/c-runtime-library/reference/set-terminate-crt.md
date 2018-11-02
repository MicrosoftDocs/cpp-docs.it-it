---
title: set_terminate (CRT)
ms.date: 11/04/2016
apiname:
- set_terminate
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- set_terminate
helpviewer_keywords:
- set_terminate function
- terminate function
- exception handling, termination
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
ms.openlocfilehash: 7be81dec7fba80a273d635cbd30b96b09928bc66
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50493912"
---
# <a name="setterminate-crt"></a>set_terminate (CRT)

Installa una propria routine di terminazione che verrà chiamata da **terminare**.

## <a name="syntax"></a>Sintassi

```cpp
terminate_function set_terminate( terminate_function termFunction );
```

### <a name="parameters"></a>Parametri

*termFunction*<br/>
Puntatore a una funzione di terminazione personalizzata.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione precedente registrata da **set_terminate** in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **NULL**.

## <a name="remarks"></a>Note

Il **set_terminate** funzione installazioni *termFunction* come nome della funzione chiamata dalla **terminare**. **set_terminate** viene usato con la gestione delle eccezioni C++ e può essere chiamato in qualsiasi punto del programma prima che venga generata l'eccezione. **terminare** chiamate [abort](abort.md) per impostazione predefinita. È possibile modificare questo valore predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_terminate** con il nome della funzione come relativo argomento. **terminare** chiama l'ultima funzione fornita come argomento al **set_terminate**. Dopo l'esecuzione di qualsiasi desiderato attività di pulizia *termFunction* deve uscire dal programma. Se non viene chiuso (se viene restituito al chiamante), [abort](abort.md) viene chiamato.

In un ambiente multithreading, le funzioni di terminazione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di terminazione. Quindi, ogni thread è responsabile della propria gestione della terminazione.

Il **terminate_function** tipo è definito in EH. H come puntatore a una funzione di terminazione definita dall'utente, *termFunction* che restituisce **void**. La funzione personalizzata *termFunction* non può accettare argomenti e non deve restituire al chiamante. In caso affermativo [abort](abort.md) viene chiamato. Non può essere generata un'eccezione dall'interno *termFunction*.

```cpp
typedef void ( *terminate_function )( );
```

> [!NOTE]
> Il **set_terminate** funzione funziona solo all'esterno del debugger.

È presente una sola **set_terminate** gestore per tutto in modo dinamico le DLL o exe collegati; anche se si chiama **set_terminate** il gestore può essere sostituito da un altro oppure si potrebbe essere sostituendo un gestore impostato da un altro File DLL o EXE.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_terminate**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [terminate](terminate-crt.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_get_terminate](get-terminate.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[Imprevisto](unexpected-crt.md)<br/>
