---
title: "Gestore specifico del linguaggio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6503e0cd-2d3a-4330-a925-8bed8c27c2be
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Gestore specifico del linguaggio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando i flag UNW\_FLAG\_EHANDLER o UNW\_FLAG\_UHANDLER sono impostati, in UNWIND\_INFO deve essere specificato l'indirizzo relativo del gestore specifico del linguaggio.  Come descritto nella sezione precedente, il gestore specifico del linguaggio viene chiamato durante la ricerca di un gestore eccezioni o di un'operazione di rimozione e  ha il seguente prototipo:  
  
```  
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (  
    IN PEXCEPTION_RECORD ExceptionRecord,  
    IN ULONG64 EstablisherFrame,  
    IN OUT PCONTEXT ContextRecord,  
    IN OUT PDISPATCHER_CONTEXT DispatcherContext  
);  
```  
  
 **ExceptionRecord** fornisce un puntatore a un record di eccezione, che utilizza la definizione Win64 standard.  
  
 **EstablisherFrame** indica l'indirizzo della base dell'allocazione fissa dello stack relativa alla funzione corrente.  
  
 **ContextRecord** punta al contesto dell'eccezione esistente al momento della generazione dell'eccezione \(nel caso del gestore eccezioni\) o al contesto di rimozione corrente \(nel caso del gestore della terminazione\).  
  
 **DispatcherContext** punta al contesto del dispatcher relativo alla funzione corrente.  Questo oggetto è definito nel modo seguente:  
  
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
  
 **ControlPc** indica il valore di RIP all'interno della funzione corrente.  Corrisponde all'indirizzo di un'eccezione o all'indirizzo di uscita della funzione.  Si tratta del RIP che verrà utilizzato per determinare se il controllo si trova in un costrutto vigilato all'interno della funzione corrente, ad esempio un blocco \_\_try di \_\_try\/\_\_except o \_\_try\/\_\_finally.  
  
 **ImageBase** indica la base dell'immagine \(indirizzo di caricamento\) del modulo contenente la funzione corrente, da aggiungere agli offset a 32 bit utilizzati nella voce nella tabella delle funzioni e nella struttura UNWIND\_INFO per registrare gli indirizzi relativi.  
  
 **FunctionEntry** fornisce un puntatore alla voce RUNTIME\_FUNCTION contenente gli indirizzi relativi della base dell'immagine per la voce nella tabella delle funzioni e la struttura UNWIND\_INFO associati alla funzione corrente.  
  
 **EstablisherFrame** indica l'indirizzo della base dell'allocazione fissa dello stack relativa alla funzione corrente.  
  
 **TargetIp** fornisce un indirizzo di istruzione facoltativo che specifica l'indirizzo di continuazione della rimozione.  Questo indirizzo viene ignorato se **EstablisherFrame** non è specificato.  
  
 **ContextRecord** punta al contesto dell'eccezione e viene utilizzato dal codice di invio\/rimozione eccezioni del sistema.  
  
 **LanguageHandler** punta alla routine del gestore specifico del linguaggio che deve essere chiamata.  
  
 **HandlerData** punta ai dati del gestore specifico del linguaggio relativi alla funzione corrente.  
  
## Vedere anche  
 [Gestione delle eccezioni \(x64\)](../build/exception-handling-x64.md)