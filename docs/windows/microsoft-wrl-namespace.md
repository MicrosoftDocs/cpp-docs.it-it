---
title: "Spazio dei nomi Microsoft::WRL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL"
  - "module/Microsoft::WRL"
  - "async/Microsoft::WRL"
  - "internal/Microsoft::WRL"
  - "event/Microsoft::WRL"
  - "ftm/Microsoft::WRL"
  - "client/Microsoft::WRL"
  - "corewrappers/Microsoft::WRL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WRL (spazio dei nomi)"
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Spazio dei nomi Microsoft::WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce i tipi fondamentali che costituiscono [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Microsoft::WRL;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InhibitWeakReferencePolicy`|`RuntimeClassFlags<WinRt &#124; InhibitWeakReference>`|  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ActivationFactory (classe)](../windows/activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|  
|[Asyncbase (classe)](../windows/asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|  
|[ClassFactory (classe)](../windows/classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|  
|[ComPtr (classe)](../windows/comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|  
|[Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)|Classe di modello usata per i tipi di argomento evento per rinvii.|  
|[EventSource (classe)](../windows/eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|  
|[Ftmbase (classe)](../windows/ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|  
|[Module (classe)](../windows/module-class.md)|Rappresenta una raccolta di oggetti correlati.|  
|[RuntimeClass (classe)](../windows/runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|  
|[Simpleactivationfactory (classe)](../windows/simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|  
|[Simpleclassfactory (classe)](../windows/simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|  
|[WeakRef (classe)](../windows/weakref-class.md)|Rappresenta un *riferimento debole* che può essere utilizzato solo da Windows Runtime, COM non classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ChainInterfaces (struttura)](../windows/chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|  
|[CloakedIid (struttura)](../windows/cloakediid-structure.md)|Indica ai modelli RuntimeClass, Implements e ChainInterfaces che l'interfaccia specificata non è accessibile nell'elenco di IID.|  
|[Implementa la struttura](../windows/implements-structure.md)|Implementa QueryInterface e GetIid per le interfacce specificate.|  
|[MixIn (struttura)](../windows/mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|  
|[RuntimeClassFlags (struttura)](../windows/runtimeclassflags-structure.md)|Contiene il tipo di un'istanza di un [RuntimeClass](../windows/runtimeclass-class.md).|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AsyncResultType (enumerazione)](../windows/asyncresulttype-enumeration.md)|Specifica il tipo di risultato restituito dal metodo GetResults().|  
|[ModuleType (enumerazione)](../windows/moduletype-enumeration.md)|Specifica se un modulo deve supportare un server in-process o un server out-of-process.|  
|[RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md)|Specifica il tipo di [RuntimeClass](../windows/runtimeclass-class.md) istanza che è supportata.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AsWeak (funzione)](../windows/asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|  
|[Funzione di callback](../windows/callback-function-windows-runtime-cpp-template-library.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|  
|[CreateActivationFactory (funzione)](../windows/createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|  
|[CreateClassFactory (funzione)](../windows/createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|  
|[Make (funzione)](../windows/make-function.md)|Inizializza la classe [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] specificata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** async.h, client.h, corewrappers. h, Event. h, ftm.h, implements.h, internal.h, module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)