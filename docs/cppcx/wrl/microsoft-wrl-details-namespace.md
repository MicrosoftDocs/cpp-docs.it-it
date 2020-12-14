---
description: 'Altre informazioni su: Microsoft:: WRL::D etails spazio dei nomi'
title: Spazio dei nomi Microsoft::WRL::Details
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
ms.openlocfilehash: c82d7389c80d35aa041dccc7c6bc8d202fba9c29
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195112"
---
# <a name="microsoftwrldetails-namespace"></a>Spazio dei nomi Microsoft::WRL::Details

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Details;
```

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|Nome|Description|
|----------|-----------------|
|[Classe ComPtrRef](comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr \<T> .|
|[Classe ComPtrRefBase](comptrrefbase-class.md)|Rappresenta la classe di base per la classe [ComPtrRef](comptrref-class.md) .|
|[Classe DontUseNewUseMake](dontusenewusemake-class.md)|Impedisce l'utilizzo `new` dell'operatore in `RuntimeClass` . Di conseguenza, è necessario usare invece la [funzione Make](make-function.md) .|
|[Classe EventTargetArray](eventtargetarray-class.md)|Rappresenta una matrice di gestori eventi.|
|[Classe MakeAllocator](makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza supporto di riferimento debole.|
|[Classe ModuleBase](modulebase-class.md)|Rappresenta la classe di base delle classi del [modulo](module-class.md) .|
|[Classe RemoveIUnknown](removeiunknown-class.md)|Rende un tipo equivalente a un `IUnknown` tipo basato su, ma dispone di metodi, e non `QueryInterface` virtuali `AddRef` `Release` .|
|[WeakReference (classe)](weakreference-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Windows Runtime o com classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Description|
|----------|-----------------|
|[ArgTraits (struttura)](argtraits-structure.md)|Dichiara un'interfaccia del delegato specificata e una funzione membro anonima con un numero specificato di parametri.|
|[Struttura ArgTraitsHelper](argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni degli argomenti del delegato.|
|[BoolStruct (struttura)](boolstruct-structure.md)|Definisce se un `ComPtr` oggetto gestisce la durata degli oggetti di un'interfaccia. `BoolStruct` viene usato internamente dall'operatore [BoolType ()](comptr-class.md#operator-microsoft-wrl-details-booltype) .|
|[CreatorMap (struttura)](creatormap-structure.md)|Sono incluse informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|
|[DerefHelper (struttura)](derefhelper-structure.md)|Rappresenta un puntatore dereferenziato al `T*` parametro di modello.|
|[EnableIf (struttura)](enableif-structure.md)|Definisce un membro dati del tipo specificato dal secondo parametro di modello se il primo parametro di modello restituisce **`true`** .|
|[FactoryCache (struttura)](factorycache-structure.md)|Contiene la posizione di un class factory e un valore che identifica un Windows Runtime registrato o un oggetto classe COM.|
|[ImplementsBase (struttura)](implementsbase-structure.md)|Utilizzato per convalidare i tipi di parametro di modello nella [struttura Implements](implements-structure.md).|
|[ImplementsHelper (struttura)](implementshelper-structure.md)|Consente di implementare la struttura [Implements](implements-structure.md) .|
|[InterfaceList (struttura)](interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|
|[InterfaceListHelper (struttura)](interfacelisthelper-structure.md)|Compila un `InterfaceList` tipo ricorsivo applicando gli argomenti specificati per il parametro di modello.|
|[InterfaceTraits (struttura)](interfacetraits-structure.md)|Implementa caratteristiche comuni di un'interfaccia.|
|[InvokeHelper (struttura)](invokehelper-structure.md)|Fornisce un'implementazione del `Invoke()` metodo in base al numero e al tipo di argomenti specificati.|
|[IsBaseOfStrict (struttura)](isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|
|[IsSame (struttura)](issame-structure.md)|Verifica se un tipo specificato è uguale a un altro tipo specificato.|
|[Struttura Nil](nil-structure.md)|Utilizzato per indicare un parametro di modello facoltativo non specificato.|
|[RemoveReference (struttura)](removereference-structure.md)|Rimuove il riferimento o il tratto di riferimento rvalue dal parametro di modello di classe specificato.|
|[Struttura RuntimeClassBase](runtimeclassbase-structure.md)|Utilizzato per rilevare `RuntimeClass` nella funzione [make](make-function.md) .|
|[Struttura RuntimeClassBaseT](runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` le operazioni e il recupero degli ID di interfaccia.|
|[VerifyInheritanceHelper (struttura)](verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|
|[VerifyInterfaceHelper (struttura)](verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Description|
|----------|-----------------|
|[AsyncStatusInternal (enumerazione)](asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e dell' `Windows::Foundation::AsyncStatus` enumerazione.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|----------|-----------------|
|[ActivationFactoryCallback (funzione)](activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|
|[Move (funzione)](move-function.md)|Sposta l'argomento specificato da una posizione a un'altra.|
|[RaiseException (funzione)](raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|
|[Funzione swap (WRL)](swap-function-wrl.md)|Scambia i valori dei due argomenti specificati.|
|[TerminateMap (funzione)](terminatemap-function.md)|Arresta le class factory nel modulo specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event. h, FTM. h, Implements. h, Internal. h, Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)<br/>
[Spazio dei nomi Microsoft:: WRL:: Wrappers](microsoft-wrl-wrappers-namespace.md)
