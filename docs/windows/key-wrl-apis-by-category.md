---
title: "API WRL chiave per categoria | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# API WRL chiave per categoria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti tabelle elencano primario [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] classi, strutture, funzioni e macro. Costrutti di classi e spazi dei nomi helper vengono omessi. Questi elenchi aumentano la documentazione dell'API, che è disposti dallo spazio dei nomi.  
  
### <a name="classes"></a>Classi  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[ActivationFactory (classe)](../windows/activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|  
|[Asyncbase (classe)](../windows/asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|  
|[ClassFactory (classe)](../windows/classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|  
|[ComPtr (classe)](../windows/comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|  
|[Classe di evento (libreria modelli C++ di Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)|Rappresenta un evento.|  
|[EventSource (classe)](../windows/eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|  
|[Ftmbase (classe)](../windows/ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|  
|[HandleT (classe)](../windows/handlet-class.md)|Rappresenta un handle a un oggetto.|  
|[Classe HString](../windows/hstring-class.md)|Fornisce supporto per la modifica handle HSTRING.|  
|[Classe HStringReference](../windows/hstringreference-class.md)|Rappresenta un HSTRING creata da una stringa esistente.|  
|[Module (classe)](../windows/module-class.md)|Rappresenta una raccolta di oggetti correlati.|  
|[Genericreleasenotifier (classe)](../windows/module-genericreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è indicato da un'espressione lambda, funtore o puntatore a funzione.|  
|[Methodreleasenotifier (classe)](../windows/module-methodreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è specificato da un oggetto e il relativo membro puntatore al metodo.|  
|[Releasenotifier (classe)](../windows/module-releasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|  
|[Classe RoInitializeWrapper](../windows/roinitializewrapper-class.md)|Inizializza [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[RuntimeClass (classe)](../windows/runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|  
|[Simpleactivationfactory (classe)](../windows/simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|  
|[Simpleclassfactory (classe)](../windows/simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|  
|[WeakRef (classe)](../windows/weakref-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato solo da Windows Runtime, COM non classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|  
  
### <a name="structures"></a>Strutture  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[ChainInterfaces (struttura)](../windows/chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|  
|[CloakedIid (struttura)](../windows/cloakediid-structure.md)|Indica il `RuntimeClass`, `Implements` e `ChainInterfaces` modelli che l'interfaccia specificata non è accessibile in elenco IID.|  
|[Implementa la struttura](../windows/implements-structure.md)|Implementa `QueryInterface` e `GetIid` per le interfacce specificate.|  
|[MixIn (struttura)](../windows/mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|  
  
### <a name="functions"></a>Funzioni  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[ActivateInstance (funzione)](../windows/activateinstance-function.md)|Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificata.|  
|[AsWeak (funzione)](../windows/asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|  
|[Funzione di callback](../windows/callback-function-windows-runtime-cpp-template-library.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|  
|[CreateActivationFactory (funzione)](../windows/createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|  
|[CreateClassFactory (funzione)](../windows/createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|  
|[GetActivationFactory (funzione)](../windows/getactivationfactory-function.md)|Recupera una factory di attivazione per il tipo specificato dal parametro del modello.|  
|[Make (funzione)](../windows/make-function.md)|Inizializza la classe [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] specificata.|  
  
### <a name="macros"></a>Macro  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Macro ActivatableClass](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che può creare un'istanza della classe specificata.|  
|[Macro InspectableClass](../windows/inspectableclass-macro.md)|Imposta il livello di attendibilità e nome classe runtime.|  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria modelli C++ di Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)