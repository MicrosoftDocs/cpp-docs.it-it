---
title: Spazio dei nomi Microsoft::WRL
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL
- module/Microsoft::WRL
- async/Microsoft::WRL
- internal/Microsoft::WRL
- event/Microsoft::WRL
- ftm/Microsoft::WRL
- client/Microsoft::WRL
- corewrappers/Microsoft::WRL
helpviewer_keywords:
- WRL namespace
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
ms.openlocfilehash: 749469c7ae2acf3a0da92d24a51bbfca9b68971d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033521"
---
# <a name="microsoftwrl-namespace"></a>Spazio dei nomi Microsoft::WRL

Definisce i tipi fondamentali che costituiscono la libreria di modelli di Windows Runtime C++.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL;
```

## <a name="members"></a>Membri

### <a name="typedefs"></a>Definizioni typedef

|Nome|Descrizione|
|----------|-----------------|
|`InhibitWeakReferencePolicy`|`RuntimeClassFlags<WinRt | InhibitWeakReference>`|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe ActivationFactory](activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|
|[Classe AsyncBase](asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|
|[Classe ClassFactory](classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|
|[Classe ComPtr](comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|
|[Classe DeferrableEventArgs](deferrableeventargs-class.md)|Classe di modello usata per i tipi di argomento evento per rinvii.|
|[Classe EventSource](eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|
|[Classe FtmBase](ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|
|[Classe Module](module-class.md)|Rappresenta una raccolta di oggetti correlati.|
|[Classe RuntimeClass](runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|
|[Classe SimpleActivationFactory](simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|
|[Classe SimpleClassFactory](simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|
|[Classe WeakRef](weakref-class.md)|Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura ChainInterfaces](chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|
|[Struttura CloakedIid](cloakediid-structure.md)|Indica al `RuntimeClass`, `Implements` e `ChainInterfaces` modelli che l'interfaccia specificata non è accessibile nell'elenco di IID.|
|[Struttura Implements](implements-structure.md)|Implements `QueryInterface` e `GetIid` per le interfacce specificate.|
|[Struttura MixIn](mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|
|[Struttura RuntimeClassFlags](runtimeclassflags-structure.md)|Contiene il tipo di un'istanza di un [RuntimeClass](runtimeclass-class.md).|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[Enumerazione AsyncResultType](asyncresulttype-enumeration.md)|Specifica il tipo di risultato restituito dal `GetResults()` (metodo).|
|[Enumerazione ModuleType](moduletype-enumeration.md)|Specifica se un modulo deve supportare un server in-process o un server out-of-process.|
|[Enumerazione RuntimeClassType](runtimeclasstype-enumeration.md)|Specifica il tipo della [RuntimeClass](runtimeclass-class.md) istanza in cui è supportata.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[Funzione AsWeak](asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|
|[Funzione di callback (WRL)](callback-function-wrl.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|
|[Funzione CreateActivationFactory](createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|
|[Funzione CreateClassFactory](createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|
|[Funzione Make](make-function.md)|Inizializza la classe di Runtime di Windows specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event, ftm.h, Implements. h, FTM, module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)