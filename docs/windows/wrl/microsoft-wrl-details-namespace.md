---
title: Spazio dei nomi Microsoft::WRL::Details
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
ms.openlocfilehash: 149b78a20061dc9083c62df4e58d638009c5e0a2
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336547"
---
# <a name="microsoftwrldetails-namespace"></a>Spazio dei nomi Microsoft::WRL::Details

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Details;
```

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe ComPtrRef](comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr\<T >.|
|[Classe ComPtrRefBase](comptrrefbase-class.md)|Rappresenta la classe base per il [ComPtrRef](comptrref-class.md) classe.|
|[Classe DontUseNewUseMake](dontusenewusemake-class.md)|Impedisce usando l'operatore `new` in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](make-function.md) invece.|
|[Classe EventTargetArray](eventtargetarray-class.md)|Rappresenta una matrice di gestori di eventi.|
|[Classe MakeAllocator](makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza supporto dei riferimenti deboli.|
|[Classe ModuleBase](modulebase-class.md)|Rappresenta la classe di base di [modulo](module-class.md) classi.|
|[Classe RemoveIUnknown](removeiunknown-class.md)|Crea un tipo equivalente a un `IUnknown`-tipo di base, ma ha non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.|
|[Classe WeakReference](weakreference-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura ArgTraits](argtraits-structure.md)|Dichiara un delegato specificato dell'interfaccia e una funzione membro anonimo che include un numero specificato di parametri.|
|[Struttura ArgTraitsHelper](argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni di argomenti del delegato.|
|[Struttura BoolStruct](boolstruct-structure.md)|Definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct` viene usato internamente dal [BoolType()](comptr-class.md#operator-microsoft-wrl-details-booltype) operatore.|
|[Struttura CreatorMap](creatormap-structure.md)|Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|
|[Struttura DerefHelper](derefhelper-structure.md)|Rappresenta un puntatore dereferenziato al `T*` parametro di modello.|
|[Struttura EnableIf](enableif-structure.md)|Definisce un membro dati di tipo specificato dal secondo parametro di modello, se il primo parametro di modello restituisce `true`.|
|[Struttura FactoryCache](factorycache-structure.md)|Contiene il percorso di una class factory e un valore che identifica un oggetto di classe di Windows Runtime o COM registrato.|
|[Struttura ImplementsBase](implementsbase-structure.md)|Usato per convalidare i tipi di parametro di modello in [implementa la struttura](implements-structure.md).|
|[Struttura ImplementsHelper](implementshelper-structure.md)|Consente di implementare il [implementa](implements-structure.md) struttura.|
|[Struttura InterfaceList](interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|
|[Struttura InterfaceListHelper](interfacelisthelper-structure.md)|Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.|
|[Struttura InterfaceTraits](interfacetraits-structure.md)|Caratteristiche comuni implementa un'interfaccia.|
|[Struttura InvokeHelper](invokehelper-structure.md)|Fornisce un'implementazione del `Invoke()` metodo basato sul numero specificato e il tipo di argomenti.|
|[Struttura IsBaseOfStrict](isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|
|[Struttura IsSame](issame-structure.md)|Consente di verificare se un tipo specificato è uguale a un altro tipo specificato.|
|[Struttura Nil](nil-structure.md)|Utilizzato per indicare un parametro di modello non specificato, facoltativo.|
|[Struttura RemoveReference](removereference-structure.md)|Rimuove il riferimento o un riferimento rvalue tratto dal parametro di modello della classe specificata.|
|[Struttura RuntimeClassBase](runtimeclassbase-structure.md)|Consente di rilevare `RuntimeClass` nella [rendere](make-function.md) (funzione).|
|[Struttura RuntimeClassBaseT](runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.|
|[Struttura VerifyInheritanceHelper](verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|
|[Struttura VerifyInterfaceHelper](verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.|

### <a name="enumerations"></a>Enumerazioni

|nome|Descrizione|
|----------|-----------------|
|[Enumerazione AsyncStatusInternal](asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e `Windows::Foundation::AsyncStatus` enumerazione.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[Funzione ActivationFactoryCallback](activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|
|[Funzione Move](move-function.md)|Sposta l'argomento specificato da una posizione a altra.|
|[Funzione RaiseException](raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|
|[Funzione swap(WRL)](swap-function-wrl.md)|Scambia i valori dei due argomenti specificati.|
|[Funzione TerminateMap](terminatemap-function.md)|Arresta la class factory nel modulo specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event, ftm.h, Implements. h, FTM, module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)<br/>
[Spazio dei nomi Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)