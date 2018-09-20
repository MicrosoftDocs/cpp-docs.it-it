---
title: Namespace Microsoft::WRL::Details | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3dd07ead0608657597a81b239732347f67455273
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436884"
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
|[Classe ComPtrRef](../windows/comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr\<T >.|
|[Classe ComPtrRefBase](../windows/comptrrefbase-class.md)|Rappresenta la classe base per il [ComPtrRef](../windows/comptrref-class.md) classe.|
|[Classe DontUseNewUseMake](../windows/dontusenewusemake-class.md)|Impedisce usando l'operatore **nuove** in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](../windows/make-function.md) invece.|
|[Classe EventTargetArray](../windows/eventtargetarray-class.md)|Rappresenta una matrice di gestori di eventi.|
|[Classe MakeAllocator](../windows/makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza supporto dei riferimenti deboli.|
|[Classe ModuleBase](../windows/modulebase-class.md)|Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.|
|[Classe RemoveIUnknown](../windows/removeiunknown-class.md)|Crea un tipo equivalente a un `IUnknown`-tipo di base, ma ha non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.|
|[Classe WeakReference](../windows/weakreference-class1.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura ArgTraits](../windows/argtraits-structure.md)|Dichiara un delegato specificato dell'interfaccia e una funzione membro anonimo che include un numero specificato di parametri.|
|[Struttura ArgTraitsHelper](../windows/argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni di argomenti del delegato.|
|[Struttura BoolStruct](../windows/boolstruct-structure.md)|Definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct` viene usato internamente dal [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.|
|[Struttura CreatorMap](../windows/creatormap-structure.md)|Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|
|[Struttura DerefHelper](../windows/derefhelper-structure.md)|Rappresenta un puntatore dereferenziato al `T*` parametro di modello.|
|[Struttura EnableIf](../windows/enableif-structure.md)|Definisce un membro dati di tipo specificato dal secondo parametro di modello, se il primo parametro di modello restituisce **true**.|
|[Struttura FactoryCache](../windows/factorycache-structure.md)|Contiene il percorso di una class factory e un valore che identifica un oggetto di classe di Windows Runtime o COM registrato.|
|[Struttura ImplementsBase](../windows/implementsbase-structure.md)|Usato per convalidare i tipi di parametro di modello in [implementa la struttura](../windows/implements-structure.md).|
|[Struttura ImplementsHelper](../windows/implementshelper-structure.md)|Consente di implementare il [implementa](../windows/implements-structure.md) struttura.|
|[Struttura InterfaceList](../windows/interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|
|[Struttura InterfaceListHelper](../windows/interfacelisthelper-structure.md)|Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.|
|[Struttura InterfaceTraits](../windows/interfacetraits-structure.md)|Caratteristiche comuni implementa un'interfaccia.|
|[Struttura InvokeHelper](../windows/invokehelper-structure.md)|Fornisce un'implementazione del `Invoke()` metodo basato sul numero specificato e il tipo di argomenti.|
|[Struttura IsBaseOfStrict](../windows/isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|
|[Struttura IsSame](../windows/issame-structure.md)|Consente di verificare se un tipo specificato è uguale a un altro tipo specificato.|
|[Struttura Nil](../windows/nil-structure.md)|Utilizzato per indicare un parametro di modello non specificato, facoltativo.|
|[Struttura RemoveReference](../windows/removereference-structure.md)|Rimuove il riferimento o un riferimento rvalue tratto dal parametro di modello della classe specificata.|
|[Struttura RuntimeClassBase](../windows/runtimeclassbase-structure.md)|Consente di rilevare `RuntimeClass` nella [rendere](../windows/make-function.md) (funzione).|
|[Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.|
|[Struttura VerifyInheritanceHelper](../windows/verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|
|[Struttura VerifyInterfaceHelper](../windows/verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.|

### <a name="enumerations"></a>Enumerazioni

|nome|Descrizione|
|----------|-----------------|
|[Enumerazione AsyncStatusInternal](../windows/asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e `Windows::Foundation::AsyncStatus` enumerazione.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[Funzione ActivationFactoryCallback](../windows/activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|
|[Funzione Move](../windows/move-function.md)|Sposta l'argomento specificato da una posizione a altra.|
|[Funzione RaiseException](../windows/raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|
|[Funzione swap (Libreria modelli C++ per Windows Runtime)](../windows/swap-function-windows-runtime-cpp-template-library.md)|Scambia i valori dei due argomenti specificati.|
|[Funzione TerminateMap](../windows/terminatemap-function.md)|Arresta la class factory nel modulo specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h, client. h, corewrappers. h, Event, ftm.h, Implements. h, FTM, module.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)<br/>
[Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)