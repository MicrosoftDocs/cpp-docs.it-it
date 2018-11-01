---
title: Gestore specifico del linguaggio
ms.date: 11/04/2016
ms.assetid: 6503e0cd-2d3a-4330-a925-8bed8c27c2be
ms.openlocfilehash: f355c0578cdf898dbe8880b2c839cac5634dcbf4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596328"
---
# <a name="language-specific-handler"></a>Gestore specifico del linguaggio

L'indirizzo relativo del gestore specifico del linguaggio è presente in UNWIND_INFO ogni volta che vengono impostati flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER. Come descritto nella sezione precedente, viene chiamato il gestore specifico del linguaggio come parte della ricerca per un gestore di eccezioni o come parte di un'operazione di rimozione. Ha il seguente prototipo:

```
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (
    IN PEXCEPTION_RECORD ExceptionRecord,
    IN ULONG64 EstablisherFrame,
    IN OUT PCONTEXT ContextRecord,
    IN OUT PDISPATCHER_CONTEXT DispatcherContext
);
```

**ExceptionRecord** fornisce un puntatore a un record di eccezione, che presenta la definizione di Win64 standard.

**EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.

**ContextRecord** punta al contesto dell'eccezione corrente o l'ora (nel caso del gestore di eccezioni) è stata generata l'eccezione "Rimuovi" contesto (nel caso del gestore di terminazione).

**DispatcherContext** punta al contesto del dispatcher per questa funzione. Include la definizione seguente:

```
typedef struct _DISPATCHER_CONTEXT {
    ULONG64 ControlPc;
    ULONG64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    ULONG64 EstablisherFrame;
    ULONG64 TargetIp;
    PCONTEXT ContextRecord;
    PEXCEPTION_ROUTINE LanguageHandler;
    PVOID HandlerData;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;
```

**ControlPc** JE hodnotou RIP all'interno di questa funzione. Si tratta di un indirizzo di eccezione o l'indirizzo in corrispondenza del quale controllo uscita della funzione. Si tratta del RIP che verrà utilizzato per determinare se il controllo è all'interno di un costrutto sorvegliato all'interno di questa funzione (ad esempio, un blocco try per \_try /\_except oppure \_try /\_finally).

**ImageBase** rappresenta l'immagine di base (indirizzo di caricamento) del modulo contenente questa funzione, per essere aggiunti agli offset a 32 bit utilizzati nella voce di funzione e UNWIND_INFO per registrare indirizzi relativi.

**FunctionEntry** fornisce un puntatore al RUNTIME_FUNCTION funzione voce che contiene la funzione e gli indirizzi relativi informazioni sull'immagine di base per questa funzione.

**EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.

**TargetIp** fornisce un indirizzo dell'istruzione facoltativa che specifica l'indirizzo di continuazione della rimozione. Questo indirizzo viene ignorato se **EstablisherFrame** non è specificato.

**ContextRecord** punta al contesto dell'eccezione, viene utilizzato per il codice di invio/rimozione a eccezione di sistema.

**LanguageHandler** punta al chiamato la routine del gestore del linguaggio specifico del linguaggio.

**HandlerData** punta ai dati del gestore specifico del linguaggio per questa funzione.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni (x64)](../build/exception-handling-x64.md)