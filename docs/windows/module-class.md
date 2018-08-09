---
title: Classe Module | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module
dev_langs:
- C++
helpviewer_keywords:
- Module class
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2d097c5c1193b74aa3e4d6ecea755390b0885a8d
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013060"
---
# <a name="module-class"></a>Module (classe)
Rappresenta una raccolta di oggetti correlati.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<ModuleType moduleType>  
class Module;  
  
template<>  
class Module<InProc> : public Details::ModuleBase;  
  
template<>  
class Module<OutOfProc> : public Module<InProc>;  
```  
  
### <a name="parameters"></a>Parametri  
 *tipo di modulo*  
 Una combinazione di uno o più [ModuleType](../windows/moduletype-enumeration.md) valori di enumerazione.  
  
## <a name="members"></a>Membri  
  
### <a name="protected-classes"></a>Classi protette  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è specificato da un'espressione lambda, funtore o puntatore a funzione.|  
|[Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e il relativo membro puntatore al metodo.|  
|[Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)|Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore Module::~Module](../windows/module-tilde-module-destructor.md)|Deinizializza l'istanza corrente del **modulo** classe.|  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Module::Module](../windows/module-module-constructor.md)|Inizializza una nuova istanza di **modulo** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::Create](../windows/module-create-method.md)|Crea un'istanza di un modulo.|  
|[Metodo Module::DecrementObjectCount](../windows/module-decrementobjectcount-method.md)|Decrementa il numero di oggetti registrati dal modulo.|  
|[Metodo Module::GetActivationFactory](../windows/module-getactivationfactory-method.md)|Ottiene una factory di attivazione per il modulo.|  
|[Metodo Module::GetClassObject](../windows/module-getclassobject-method.md)|Recupera una cache di class factory.|  
|[Metodo Module::GetModule](../windows/module-getmodule-method.md)|Crea un'istanza di un modulo.|  
|[Metodo Module::GetObjectCount](../windows/module-getobjectcount-method.md)|Recupera il numero di oggetti gestiti da questo modulo.|  
|[Metodo Module::IncrementObjectCount](../windows/module-incrementobjectcount-method.md)|Incrementa il numero di oggetti registrati dal modulo.|  
|[Metodo Module::RegisterCOMObject](../windows/module-registercomobject-method.md)|Registra uno o più oggetti COM in modo che altre applicazioni possono connettersi a essi.|  
|[Metodo Module::RegisterObjects](../windows/module-registerobjects-method.md)|Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possono connettersi a essi.|  
|[Metodo Module::RegisterWinRTObject](../windows/module-registerwinrtobject-method.md)|Registra uno o più oggetti di Windows Runtime in modo che altre applicazioni possono connettersi a essi.|  
|[Metodo Module::Terminate](../windows/module-terminate-method.md)|Fa sì che tutte le factory creata un'istanza mediante il modulo da arrestare.|  
|[Metodo Module::UnregisterCOMObject](../windows/module-unregistercomobject-method.md)|Annulla la registrazione di uno o più oggetti COM, che impedisce che altre applicazioni si connettano a essi.|  
|[Metodo Module::UnregisterObjects](../windows/module-unregisterobjects-method.md)|Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non è possibile connettersi a esse.|  
|[Metodo Module::UnregisterWinRTObject](../windows/module-unregisterwinrtobject-method.md)|Annulla la registrazione di uno o più oggetti di Windows Runtime in modo che altre applicazioni non è possibile connettersi a esse.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::Create](../windows/module-create-method.md)|Crea un'istanza di un modulo.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Module::objectCount_](../windows/module-objectcount-data-member.md)|Tiene traccia del numero di classi siano stato creato con la [rendere](../windows/make-function.md) (funzione).|  
|[Membro dati Module::releaseNotifier_](../windows/module-releasenotifier-data-member.md)|Contiene un puntatore a un `ReleaseNotifier` oggetto.|  
  
### <a name="macros"></a>Macro  
  
|||  
|-|-|  
|[ActivatableClass](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro specifica parametri di ID di factory e il gruppo predefinito.|  
|[ActivatableClassWithFactory](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro consente di specificare un parametro particolare factory.|  
|[ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro consente di specificare factory particolare e parametri dell'ID del gruppo.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ModuleBase`  
  
 `Module`  
  
 `Module`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)