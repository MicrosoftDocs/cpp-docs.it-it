---
title: 'Microsoft:: wrl Namespace | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
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
dev_langs:
- C++
helpviewer_keywords:
- WRL namespace
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 37d4d5391da4dfb6e25754eb1350224acb97e972
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="microsoftwrl-namespace"></a>Spazio dei nomi Microsoft::WRL
Definisce i tipi fondamentali che costituiscono la libreria di modelli di Windows Runtime C++.  
  
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
|[Classe ActivationFactory](../windows/activationfactory-class.md)|Abilita l'attivazione di una o più classi da Windows Runtime.|  
|[Classe AsyncBase](../windows/asyncbase-class.md)|Implementa la macchina a stati asincrona di Windows Runtime.|  
|[Classe ClassFactory](../windows/classfactory-class.md)|Implementa le funzionalità di base di un'interfaccia `IClassFactory`.|  
|[Classe ComPtr](../windows/comptr-class.md)|Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.|  
|[Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)|Classe di modello usata per i tipi di argomento evento per rinvii.|  
|[Classe EventSource](../windows/eventsource-class.md)|Rappresenta un evento. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi.|  
|[Classe FtmBase](../windows/ftmbase-class.md)|Rappresenta un oggetto gestore del marshalling a thread libero.|  
|[Classe Module](../windows/module-class.md)|Rappresenta una raccolta di oggetti correlati.|  
|[Classe RuntimeClass](../windows/runtimeclass-class.md)|Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.|  
|[Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.|  
|[Classe SimpleClassFactory](../windows/simpleclassfactory-class.md)|Fornisce un meccanismo semplice per creare una classe base.|  
|[Classe WeakRef](../windows/weakref-class.md)|Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)|Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.|  
|[Struttura CloakedIid](../windows/cloakediid-structure.md)|Indica ai modelli RuntimeClass, Implements e ChainInterfaces che l'interfaccia specificata non è accessibile nell'elenco di IID.|  
|[Struttura Implements](../windows/implements-structure.md)|Implementa QueryInterface e GetIid per le interfacce specificate.|  
|[Struttura MixIn](../windows/mixin-structure.md)|Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.|  
|[Struttura RuntimeClassFlags](../windows/runtimeclassflags-structure.md)|Contiene il tipo di un'istanza di un [RuntimeClass](../windows/runtimeclass-class.md).|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione AsyncResultType](../windows/asyncresulttype-enumeration.md)|Specifica il tipo di risultato restituito dal metodo GetResults().|  
|[Enumerazione ModuleType](../windows/moduletype-enumeration.md)|Specifica se un modulo deve supportare un server in-process o un server out-of-process.|  
|[Enumerazione RuntimeClassType](../windows/runtimeclasstype-enumeration.md)|Specifica il tipo di [RuntimeClass](../windows/runtimeclass-class.md) istanza che è supportata.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione AsWeak](../windows/asweak-function.md)|Recupera un riferimento debole a un'istanza specificata.|  
|[Funzione di callback](../windows/callback-function-windows-runtime-cpp-template-library.md)|Crea un oggetto la cui funzione membro è un metodo di callback.|  
|[Funzione CreateActivationFactory](../windows/createactivationfactory-function.md)|Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.|  
|[Funzione CreateClassFactory](../windows/createclassfactory-function.md)|Crea una factory che produce istanze della classe specificata.|  
|[Funzione Make](../windows/make-function.md)|Inizializza la classe di Windows Runtime specificata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h, client. h, corewrappers. h, Event. h,. h, FTM., h, Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)