---
title: "Spazio dei nomi Microsoft::WRL::Details | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Spazio dei nomi Microsoft::WRL::Details
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Microsoft::WRL::Details;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ComPtrRef (classe)](../windows/comptrref-class.md)|Rappresenta un riferimento a un oggetto di tipo ComPtr \< T>.|  
|[ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)|Rappresenta la classe base per il [ComPtrRef](../windows/comptrref-class.md) (classe).|  
|[Dontusenewusemake (classe)](../windows/dontusenewusemake-class.md)|Impedisce l'utilizzo di operatore `new` in `RuntimeClass`. Di conseguenza, è necessario utilizzare il [funzione](../windows/make-function.md) invece.|  
|[EventTargetArray (classe)](../windows/eventtargetarray-class.md)|Rappresenta una matrice dei gestori di eventi.|  
|[MakeAllocator (classe)](../windows/makeallocator-class.md)|Alloca memoria per una classe attivabile, con o senza il supporto di riferimento debole.|  
|[ModuleBase (classe)](../windows/modulebase-class.md)|Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.|  
|[Classe RemoveIUnknown](../windows/removeiunknown-class.md)|Crea un tipo che corrisponde a un `IUnknown`-tipo di base, ma è non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.|  
|[Classe WeakReference](../windows/weakreference-class1.md)|Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ArgTraits (struttura)](../windows/argtraits-structure.md)|Dichiara un delegato specificato interfaccia e una funzione membro anonimo che include un numero specificato di parametri.|  
|[ArgTraitsHelper (struttura)](../windows/argtraitshelper-structure.md)|Consente di definire le caratteristiche comuni di argomenti del delegato.|  
|[BoolStruct (struttura)](../windows/boolstruct-structure.md)|Definisce se un ComPtr gestisce la durata dell'oggetto di un'interfaccia. Viene utilizzato internamente da BoolStruct di [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.|  
|[CreatorMap (struttura)](../windows/creatormap-structure.md)|Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.|  
|[DerefHelper (struttura)](../windows/derefhelper-structure.md)|Rappresenta un puntatore dereferenziato il `T*` parametro di modello.|  
|[EnableIf (struttura)](../windows/enableif-structure.md)|Definisce un membro dati del tipo specificato dal secondo parametro di modello se il primo parametro di modello restituisce `true`.|  
|[FactoryCache (struttura)](../windows/factorycache-structure.md)|Contiene il percorso di una class factory e un valore che identifica un registrati [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o oggetto di classe COM.|  
|[ImplementsBase (struttura)](../windows/implementsbase-structure.md)|Utilizzato per convalidare i tipi di parametro di modello [implementa la struttura](../windows/implements-structure.md).|  
|[ImplementsHelper (struttura)](../windows/implementshelper-structure.md)|Consente di implementare il [implementa](../windows/implements-structure.md) struttura.|  
|[InterfaceList (struttura)](../windows/interfacelist-structure.md)|Utilizzato per creare un elenco ricorsivo di interfacce.|  
|[InterfaceListHelper (struttura)](../windows/interfacelisthelper-structure.md)|Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.|  
|[InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)|Caratteristiche comuni implementa un'interfaccia.|  
|[InvokeHelper (struttura)](../windows/invokehelper-structure.md)|Fornisce un'implementazione del metodo Invoke () in base al numero specificato e il tipo di argomenti.|  
|[IsBaseOfStrict (struttura)](../windows/isbaseofstrict-structure.md)|Verifica se un tipo è la base di un altro tipo.|  
|[IsSame (struttura)](../windows/issame-structure.md)|Consente di verificare se un oggetto di tipo è identico a un altro tipo specificato.|  
|[Struttura nil](../windows/nil-structure.md)|Utilizzato per indicare un parametro di modello facoltativo non specificato.|  
|[RemoveReference (struttura)](../windows/removereference-structure.md)|Rimuove il tratto di riferimento o un riferimento rvalue del parametro di modello di classe specificata.|  
|[Struttura RuntimeClassBase](../windows/runtimeclassbase-structure.md)|Consente di rilevare `RuntimeClass` nel [rendere](../windows/make-function.md) (funzione).|  
|[Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)|Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.|  
|[VerifyInheritanceHelper (struttura)](../windows/verifyinheritancehelper-structure.md)|Verifica se un'interfaccia è derivata da un'altra interfaccia.|  
|[VerifyInterfaceHelper (struttura)](../windows/verifyinterfacehelper-structure.md)|Verifica che l'interfaccia specificata dal parametro di modello soddisfa requisiti specifici.|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AsyncStatusInternal (enumerazione)](../windows/asyncstatusinternal-enumeration.md)|Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e **Windows::Foundation::AsyncStatus** enumerazione.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ActivationFactoryCallback (funzione)](../windows/activationfactorycallback-function.md)|Ottiene la factory di attivazione per l'ID di attivazione specificato.|  
|[Move (funzione)](../windows/move-function.md)|Sposta l'argomento specificato da una posizione a altra.|  
|[RaiseException (funzione)](../windows/raiseexception-function.md)|Genera un'eccezione nel thread chiamante.|  
|[Funzione swap (libreria modelli C++ di Windows Runtime)](../windows/swap-function-windows-runtime-cpp-template-library.md)|Scambia i valori dei due argomenti specificati.|  
|[TerminateMap (funzione)](../windows/terminatemap-function.md)|Arresta la class factory del modulo specificato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** async.h, client.h, corewrappers. h, Event. h, ftm.h, implements.h, internal.h, module.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)   
 [Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)