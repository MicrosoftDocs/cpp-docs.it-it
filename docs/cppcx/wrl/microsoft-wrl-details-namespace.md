---
title: Spazio dei nomi Microsoft::WRL::Details
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
ms.openlocfilehash: 4e8d2e5a2c7e6655674c4e965cd7222d930dff9a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213785"
---
# <a name="microsoftwrldetails-namespace"></a>Spazio dei nomi Microsoft::WRL::Details

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Details;
```

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe ComPtrRef](comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr\<T >.|
|[Classe ComPtrRefBase](comptrrefbase-class.md)|Rappresenta la classe di base per la classe [ComPtrRef](comptrref-class.md) .|
|[Classe DontUseNewUseMake](dontusenewusemake-class.md)|Impedisce l'utilizzo dell'operatore `new` in `RuntimeClass`. Di conseguenza, è necessario usare invece la [funzione Make](make-function.md) .|
|[Classe EventTargetArray](eventtargetarray-class.md)|Rappresenta una matrice di gestori eventi.|
|[Classe MakeAllocator](makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza supporto di riferimento debole.|
|[Classe ModuleBase](modulebase-class.md)|Rappresenta la classe di base delle classi del [modulo](module-class.md) .|
|[Classe RemoveIUnknown](removeiunknown-class.md)|Rende un tipo equivalente a un tipo basato su `IUnknown`, ma dispone di metodi `QueryInterface`, `AddRef`e `Release` non virtuali.|
|[Classe WeakReference](weakreference-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Windows Runtime o com classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura ArgTraits](argtraits-structure.md)|Dichiara un'interfaccia del delegato specificata e una funzione membro anonima con un numero specificato di parametri.|
|[Struttura ArgTraitsHelper](argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni degli argomenti del delegato.|
|[Struttura BoolStruct](boolstruct-structure.md)|Definisce se un `ComPtr` gestisce la durata degli oggetti di un'interfaccia. `BoolStruct` viene utilizzato internamente dall'operatore [BoolType ()](comptr-class.md#operator-microsoft-wrl-details-booltype) .|
|[Struttura CreatorMap](creatormap-structure.md)|Sono incluse informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|
|[Struttura DerefHelper](derefhelper-structure.md)|Rappresenta un puntatore dereferenziato al parametro di modello `T*`.|
|[Struttura EnableIf](enableif-structure.md)|Definisce un membro dati del tipo specificato dal secondo parametro di modello se il primo parametro di modello restituisce `true`.|
|[Struttura FactoryCache](factorycache-structure.md)|Contiene la posizione di un class factory e un valore che identifica un Windows Runtime registrato o un oggetto classe COM.|
|[Struttura ImplementsBase](implementsbase-structure.md)|Utilizzato per convalidare i tipi di parametro di modello nella [struttura Implements](implements-structure.md).|
|[Struttura ImplementsHelper](implementshelper-structure.md)|Consente di implementare la struttura [Implements](implements-structure.md) .|
|[Struttura InterfaceList](interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|
|[Struttura InterfaceListHelper](interfacelisthelper-structure.md)|Compila un tipo di `InterfaceList` riapplicando in modo ricorsivo gli argomenti specificati per il parametro di modello.|
|[Struttura InterfaceTraits](interfacetraits-structure.md)|Implementa caratteristiche comuni di un'interfaccia.|
|[Struttura InvokeHelper](invokehelper-structure.md)|Fornisce un'implementazione del metodo `Invoke()` in base al numero e al tipo di argomenti specificati.|
|[Struttura IsBaseOfStrict](isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|
|[Struttura IsSame](issame-structure.md)|Verifica se un tipo specificato è uguale a un altro tipo specificato.|
|[Struttura Nil](nil-structure.md)|Utilizzato per indicare un parametro di modello facoltativo non specificato.|
|[Struttura RemoveReference](removereference-structure.md)|Rimuove il riferimento o il tratto di riferimento rvalue dal parametro di modello di classe specificato.|
|[Struttura RuntimeClassBase](runtimeclassbase-structure.md)|Utilizzato per rilevare `RuntimeClass` nella funzione [make](make-function.md) .|
|[Struttura RuntimeClassBaseT](runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.|
|[Struttura VerifyInheritanceHelper](verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|
|[Struttura VerifyInterfaceHelper](verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[Enumerazione AsyncStatusInternal](asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e l'enumerazione `Windows::Foundation::AsyncStatus`.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[Funzione ActivationFactoryCallback](activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|
|[Funzione Move](move-function.md)|Sposta l'argomento specificato da una posizione a un'altra.|
|[Funzione RaiseException](raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|
|[Funzione swap(WRL)](swap-function-wrl.md)|Scambia i valori dei due argomenti specificati.|
|[Funzione TerminateMap](terminatemap-function.md)|Arresta le class factory nel modulo specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event. h, FTM. h, Implements. h, Internal. h, Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)<br/>
[Spazio dei nomi Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)
