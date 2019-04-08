---
title: Spazio dei nomi Microsoft::WRL::Details
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
ms.openlocfilehash: fce6e620600164e73d3708d98d8a7fa979e8ab42
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027479"
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
|[ComPtrRef (classe)](comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr\<T >.|
|[ComPtrRefBase (classe)](comptrrefbase-class.md)|Rappresenta la classe base per il [ComPtrRef](comptrref-class.md) classe.|
|[DontUseNewUseMake (classe)](dontusenewusemake-class.md)|Impedisce usando l'operatore `new` in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](make-function.md) invece.|
|[Classe EventTargetArray](eventtargetarray-class.md)|Rappresenta una matrice di gestori di eventi.|
|[MakeAllocator (classe)](makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza supporto dei riferimenti deboli.|
|[Classe ModuleBase](modulebase-class.md)|Rappresenta la classe di base di [modulo](module-class.md) classi.|
|[Classe RemoveIUnknown](removeiunknown-class.md)|Crea un tipo equivalente a un `IUnknown`-tipo di base, ma ha non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.|
|[Classe WeakReference](weakreference-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[ArgTraits (struttura)](argtraits-structure.md)|Dichiara un delegato specificato dell'interfaccia e una funzione membro anonimo che include un numero specificato di parametri.|
|[ArgTraitsHelper (struttura)](argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni di argomenti del delegato.|
|[BoolStruct (struttura)](boolstruct-structure.md)|Definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct` viene usato internamente dal [BoolType()](comptr-class.md#operator-microsoft-wrl-details-booltype) operatore.|
|[CreatorMap (struttura)](creatormap-structure.md)|Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|
|[DerefHelper (struttura)](derefhelper-structure.md)|Rappresenta un puntatore dereferenziato al `T*` parametro di modello.|
|[EnableIf (struttura)](enableif-structure.md)|Definisce un membro dati di tipo specificato dal secondo parametro di modello, se il primo parametro di modello restituisce `true`.|
|[FactoryCache (struttura)](factorycache-structure.md)|Contiene il percorso di una class factory e un valore che identifica un oggetto di classe di Windows Runtime o COM registrato.|
|[ImplementsBase (struttura)](implementsbase-structure.md)|Usato per convalidare i tipi di parametro di modello in [implementa la struttura](implements-structure.md).|
|[ImplementsHelper (struttura)](implementshelper-structure.md)|Consente di implementare il [implementa](implements-structure.md) struttura.|
|[InterfaceList (struttura)](interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|
|[InterfaceListHelper (struttura)](interfacelisthelper-structure.md)|Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.|
|[InterfaceTraits (struttura)](interfacetraits-structure.md)|Caratteristiche comuni implementa un'interfaccia.|
|[InvokeHelper (struttura)](invokehelper-structure.md)|Fornisce un'implementazione del `Invoke()` metodo basato sul numero specificato e il tipo di argomenti.|
|[IsBaseOfStrict (struttura)](isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|
|[IsSame (struttura)](issame-structure.md)|Consente di verificare se un tipo specificato è uguale a un altro tipo specificato.|
|[Struttura Nil](nil-structure.md)|Utilizzato per indicare un parametro di modello non specificato, facoltativo.|
|[RemoveReference (struttura)](removereference-structure.md)|Rimuove il riferimento o un riferimento rvalue tratto dal parametro di modello della classe specificata.|
|[Struttura RuntimeClassBase](runtimeclassbase-structure.md)|Consente di rilevare `RuntimeClass` nella [rendere](make-function.md) (funzione).|
|[Struttura RuntimeClassBaseT](runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.|
|[VerifyInheritanceHelper (struttura)](verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|
|[VerifyInterfaceHelper (struttura)](verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[AsyncStatusInternal (enumerazione)](asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e `Windows::Foundation::AsyncStatus` enumerazione.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[ActivationFactoryCallback (funzione)](activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|
|[Move (funzione)](move-function.md)|Sposta l'argomento specificato da una posizione a altra.|
|[RaiseException (funzione)](raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|
|[Funzione swap (WRL)](swap-function-wrl.md)|Scambia i valori dei due argomenti specificati.|
|[Funzione TerminateMap](terminatemap-function.md)|Arresta la class factory nel modulo specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event, ftm.h, Implements. h, FTM, module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)<br/>
[Metodo Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)