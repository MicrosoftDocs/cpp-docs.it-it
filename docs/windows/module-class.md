---
title: "Classe Module | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Module (classe)"
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe Module
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta una raccolta di oggetti correlati.  
  
## Sintassi  
  
```  
  
template<  
   ModuleType moduleType  
>  
class Module;  
  
template<>  
class Module<InProc> : public Details::ModuleBase;  
  
template<>  
class Module<OutOfProc> : public Module<InProc>;  
```  
  
#### Parametri  
 `moduleType`  
 Una combinazione di uno o più valori di enumerazione [ModuleType](../windows/moduletype-enumeration.md).  
  
## Membri  
  
### Classi protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)|Invoca un gestore eventi quando l'ultimo oggetto in un modulo viene rilasciato.  Il gestore eventi è specificato da una lambda, un functor, o un puntatore a funzione.|  
|[Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)|Invoca un gestore eventi quando l'ultimo oggetto in un modulo viene rilasciato.  Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a metodo.|  
|[Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)|Invoca un gestore eventi quando l'ultimo oggetto in un modulo viene rilasciato.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore Module::~Module](../windows/module-tilde-module-destructor.md)|Annulla l'inizializzazione dell'istanza corrente della classe di Module::ReleaseNotifier.|  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Module::Module](../windows/module-module-constructor.md)|Inizializza una nuova istanza della classe Modulo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::Create](../windows/module-create-method.md)|Crea un'istanza di un modulo.|  
|[Metodo Module::DecrementObjectCount](../windows/module-decrementobjectcount-method.md)|Decrementa il numero di oggetti tracciati dal modulo.|  
|[Metodo Module::GetActivationFactory](../windows/module-getactivationfactory-method.md)|Ottiene una factory di attivazione del modulo.|  
|[Metodo Module::GetClassObject](../windows/module-getclassobject-method.md)|recupera una cache delle classi factory.|  
|[Metodo Module::GetModule](../windows/module-getmodule-method.md)|Crea un'istanza di un modulo.|  
|[Metodo Module::GetObjectCount](../windows/module-getobjectcount-method.md)|Recupera il numero di oggetti gestiti da questo modulo.|  
|[Metodo Module::IncrementObjectCount](../windows/module-incrementobjectcount-method.md)|Incrementa il numero di oggetti tracciati dal modulo.|  
|[Metodo Module::RegisterCOMObject](../windows/module-registercomobject-method.md)|Registra uno o più oggetti COM in modo che le altre applicazioni possano connettersi ad essi.|  
|[Metodo Module::RegisterObjects](../windows/module-registerobjects-method.md)|Registra COM o oggetti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in modo da permettere ad altre applicazioni di connettersi a essi.|  
|[Metodo Module::RegisterWinRTObject](../windows/module-registerwinrtobject-method.md)|Registra uno o più oggetti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in modo che le altre applicazioni possano connettersi ad essi.|  
|[Metodo Module::Terminate](../windows/module-terminate-method.md)|Fa si che tutte le factory istanziate dal modulo si interrompano.|  
|[Metodo Module::UnregisterCOMObject](../windows/module-unregistercomobject-method.md)|Annulla la registrazione di uno o più oggetti COM, che impedisce ad altre applicazioni di connettere a essi.|  
|[Metodo Module::UnregisterObjects](../windows/module-unregisterobjects-method.md)|Annulla la registrazione degli oggetti nel modulo specificato in modo che non possano connettersi ad essi.|  
|[Metodo Module::UnregisterWinRTObject](../windows/module-unregisterwinrtobject-method.md)|Annullare la registrazione di uno o più oggetti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in modo che le altre applicazioni non possano connettersi ad essi.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::Create](../windows/module-create-method.md)|Crea un'istanza di un modulo.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Module::objectCount\_](../windows/module-objectcount-data-member.md)|Tiene traccia del numero di classi che sono state create con la funzione [Make](../windows/make-function.md).|  
|[Membro dati Module::releaseNotifier\_](../windows/module-releasenotifier-data-member.md)|Contiene un puntatore a un oggetto di ReleaseNotifier.|  
  
### Macro  
  
|||  
|-|-|  
|[ActivatableClass](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che può creare un'istanza della classe specificata.  Questa macro specifica i parametri predefiniti groupid e factory.|  
|[ActivatableClassWithFactory](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che può creare un'istanza della classe specificata.  Questa macro consente di specificare un particolare parametro della factory.|  
|[ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md)|Popola una cache interna che contiene una factory che può creare un'istanza della classe specificata.  Questa macro consente di specificare particolari parametri groupid e factory.|  
  
## Gerarchia di ereditarietà  
 `ModuleBase`  
  
 `Module`  
  
 `Module`  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)