---
title: Chiave API WRL per categoria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b6d6bd580faf8c242ca5ac5e9b4b29ded9a7750a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612210"
---
# <a name="key-wrl-apis-by-category"></a>API WRL chiave per categoria
Le tabelle seguenti elencano primario libreria modelli C++ per Windows Runtime classi, strutture, funzioni e macro. Costrutti di nelle classi e spazi dei nomi helper vengono omessi. Questi elenchi potenziare la documentazione dell'API, che è disposta dallo spazio dei nomi.
  
### <a name="classes"></a>Classi
  
|Titolo|Descrizione|
|-----------|-----------------|
|[Classe ActivationFactory](../windows/activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|
|[Classe AsyncBase](../windows/asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|
|[Classe ClassFactory](../windows/classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|
|[Classe ComPtr](../windows/comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|
|[Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)|Rappresenta un evento.|
|[Classe EventSource](../windows/eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|
|[Classe FtmBase](../windows/ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|
|[Classe HandleT](../windows/handlet-class.md)|Rappresenta un handle a un oggetto.|
|[Classe HString](../windows/hstring-class.md)|Fornisce supporto per modificare un handle HSTRING.|
|[Classe HStringReference](../windows/hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|
|[Classe Module](../windows/module-class.md)|Rappresenta una raccolta di oggetti correlati.|
|[Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è specificato da un'espressione lambda, funtore o puntatore a funzione.|
|[Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e il relativo membro puntatore al metodo.|
|[Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|
|[Classe RoInitializeWrapper](../windows/roinitializewrapper-class.md)|Inizializza il Runtime di Windows.|
|[Classe RuntimeClass](../windows/runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|
|[Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|
|[Classe SimpleClassFactory](../windows/simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|
|[Classe WeakRef](../windows/weakref-class.md)|Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|
  
### <a name="structures"></a>Strutture
  
|Titolo|Descrizione|
|-----------|-----------------|
|[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|
|[Struttura CloakedIid](../windows/cloakediid-structure.md)|Indica al `RuntimeClass`, `Implements` e `ChainInterfaces` modelli che l'interfaccia specificata non è accessibile nell'elenco di IID.|
|[Struttura Implements](../windows/implements-structure.md)|Implements `QueryInterface` e `GetIid` per le interfacce specificate.|
|[Struttura MixIn](../windows/mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|
  
### <a name="functions"></a>Funzioni
  
|Titolo|Descrizione|
|-----------|-----------------|
|[Funzione ActivateInstance](../windows/activateinstance-function.md)|Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificata.|
|[Funzione AsWeak](../windows/asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|
|[Funzione di callback](../windows/callback-function-windows-runtime-cpp-template-library.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|
|[Funzione CreateActivationFactory](../windows/createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|
|[Funzione CreateClassFactory](../windows/createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|
|[Funzione GetActivationFactory](../windows/getactivationfactory-function.md)|Recupera una factory di attivazione per il tipo specificato dal parametro di modello.|
|[Funzione Make](../windows/make-function.md)|Inizializza la classe di Runtime di Windows specificata.|
  
### <a name="macros"></a>Macro
  
|Titolo|Descrizione|
|-----------|-----------------|
|[Macro ActivatableClass](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata.|
|[Macro InspectableClass](../windows/inspectableclass-macro.md)|Imposta il nome e la relazione di trust a livello di classe runtime.|
  
## <a name="see-also"></a>Vedere anche
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)