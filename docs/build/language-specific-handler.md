---
title: Gestore specifico del linguaggio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 6503e0cd-2d3a-4330-a925-8bed8c27c2be
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dc15e730666a643dfaa028fe7bc6166144897308
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="language-specific-handler"></a>Gestore specifico del linguaggio
L'indirizzo relativo del gestore specifico del linguaggio è presente in UNWIND_INFO ogni volta che vengano impostati flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER. Come descritto nella sezione precedente, viene chiamato il gestore specifico del linguaggio come parte della ricerca per un gestore di eccezioni o come parte di un'operazione di rimozione. Contiene il prototipo seguente:  
  
```  
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (  
    IN PEXCEPTION_RECORD ExceptionRecord,  
    IN ULONG64 EstablisherFrame,  
    IN OUT PCONTEXT ContextRecord,  
    IN OUT PDISPATCHER_CONTEXT DispatcherContext  
);  
```  
  
 **ExceptionRecord** fornisce un puntatore a un record di eccezione, che presenta la definizione Win64 standard.  
  
 **EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.  
  
 **ContextRecord** punta al contesto dell'eccezione corrente o di ora (nel caso del gestore eccezioni) è stato generato l'eccezione "rimozione" contesto (nel caso del gestore di terminazione).  
  
 **DispatcherContext** punta al contesto del dispatcher per questa funzione. Contiene la definizione seguente:  
  
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
  
 **ControlPc** è il valore di RIP all'interno di questa funzione. Si tratta di un indirizzo di eccezione o l'indirizzo di uscita della funzione. Si tratta del RIP che verrà utilizzato per determinare se il controllo è all'interno di un costrutto protetto all'interno della funzione (ad esempio, un blocco try per \_try /\_except o \_try /\_finally).  
  
 **ImageBase** è la base dell'immagine (indirizzo di caricamento) del modulo che contiene la funzione, per essere aggiunto agli offset a 32 bit utilizzati nella voce di funzione e UNWIND_INFO per registrare gli indirizzi relativi.  
  
 **FunctionEntry** fornisce un puntatore al RUNTIME_FUNCTION funzione voce contenente la funzione e gli indirizzi relativi info base dell'immagine per questa funzione.  
  
 **EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.  
  
 **TargetIp** fornisce un indirizzo istruzione facoltativo che specifica l'indirizzo di continuazione della rimozione. Questo indirizzo viene ignorato se **EstablisherFrame** non è specificato.  
  
 **ContextRecord** punta al contesto dell'eccezione, viene utilizzato per il codice di invio/rimozione eccezione di sistema.  
  
 **LanguageHandler** punta alla routine del gestore specifico del linguaggio Java la chiamata.  
  
 **HandlerData** punta ai dati del gestore specifico del linguaggio per questa funzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni (x64)](../build/exception-handling-x64.md)