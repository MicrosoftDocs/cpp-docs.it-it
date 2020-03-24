---
title: API WRL chiave per categoria
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
ms.openlocfilehash: 8ac89f3286866ac61bac5ae256bdb448fe88f07d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213824"
---
# <a name="key-wrl-apis-by-category"></a>API WRL chiave per categoria

Le tabelle seguenti elencano le C++ classi, gli struct, le funzioni e le macro della libreria di modelli di Windows Runtime primario. I costrutti negli spazi dei nomi e nelle classi helper vengono omessi. Questi elenchi aumentano la documentazione dell'API, disposta in base allo spazio dei nomi.

## <a name="classes"></a>Classi

|Titolo|Descrizione|
|-----------|-----------------|
|[Classe ActivationFactory](activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|
|[Classe AsyncBase](asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|
|[Classe ClassFactory](classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|
|[Classe ComPtr](comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|
|[Classe di eventi (Libreria modelli C++ per Windows Runtime)](event-class-wrl.md)|Rappresenta un evento.|
|[classe EventSource](eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|
|[Classe FtmBase](ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|
|[Classe HandleT](handlet-class.md)|Rappresenta un handle per un oggetto.|
|[Classe HString](hstring-class.md)|Fornisce supporto per la modifica degli handle HSTRING.|
|[Classe HStringReference](hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|
|[Classe Module](module-class.md)|Rappresenta una raccolta di oggetti correlati.|
|[Classe Module::GenericReleaseNotifier](module-genericreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da su un lambda, un functor o un puntatore a funzione.|
|[Classe Module::MethodReleaseNotifier](module-methodreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a metodo.|
|[Classe Module::ReleaseNotifier](module-releasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|
|[Classe RoInitializeWrapper](roinitializewrapper-class.md)|Inizializza la Windows Runtime.|
|[Classe RuntimeClass](runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|
|[Classe SimpleActivationFactory](simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|
|[Classe SimpleClassFactory](simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|
|[Classe WeakRef](weakref-class.md)|Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

## <a name="structures"></a>Strutture

|Titolo|Descrizione|
|-----------|-----------------|
|[Struttura ChainInterfaces](chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|
|[Struttura CloakedIid](cloakediid-structure.md)|Indica ai modelli `RuntimeClass`, `Implements` e `ChainInterfaces` che l'interfaccia specificata non è accessibile nell'elenco di IID.|
|[Struttura Implements](implements-structure.md)|Implementa `QueryInterface` e `GetIid` per le interfacce specificate.|
|[Struttura MixIn](mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|

## <a name="functions"></a>Funzioni

|Titolo|Descrizione|
|-----------|-----------------|
|[Funzione ActivateInstance](activateinstance-function.md)|Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificato.|
|[Funzione AsWeak](asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|
|[Funzione di callback](callback-function-wrl.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|
|[Funzione CreateActivationFactory](createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|
|[Funzione CreateClassFactory](createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|
|[Funzione GetActivationFactory](getactivationfactory-function.md)|Recupera una factory di attivazione per il tipo specificato dal parametro di modello.|
|[Funzione Make](make-function.md)|Inizializza la classe Windows Runtime specificata.|

## <a name="macros"></a>Macro

|Titolo|Descrizione|
|-----------|-----------------|
|[Macro ActivatableClass](activatableclass-macros.md)|Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata.|
|[Macro InspectableClass](inspectableclass-macro.md)|Imposta il nome della classe di runtime e il livello di attendibilità.|

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)
