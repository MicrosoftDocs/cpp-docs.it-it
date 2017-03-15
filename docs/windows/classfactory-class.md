---
title: "Classe ClassFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ClassFactory (classe)"
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe ClassFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di base di un'interfaccia IClassFactory.  
  
## Sintassi  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ClassFactory : public Details::RuntimeClass<  
   typename Details::InterfaceListHelper<IClassFactory,   
   I0,   
   I1,   
   I2,   
   Details::Nil>::TypeT,   
   RuntimeClassFlags<ClassicCom | InhibitWeakReference>,   
      false>;  
```  
  
#### Parametri  
 `I0`  
 L'interfaccia con indice zero.  
  
 `I1`  
 La prima interfaccia ID.  
  
 `I2`  
 La seconda interfaccia ID.  
  
## Osservazioni  
 Utilizzare `ClassFactory` per fornire un'implementazione definita dall'utente factory.  
  
 Il modello di programmazione viene illustrato come utilizzare la struttura [Implementa](../windows/implements-structure.md) per specificare più di tre interfacce su una class factory.  
  
 `struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ClassFactory::ClassFactory](../windows/classfactory-classfactory-constructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ClassFactory::AddRef](../windows/classfactory-addref-method.md)|Incrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.|  
|[Metodo ClassFactory::LockServer](../windows/classfactory-lockserver-method.md)|Incrementa o diminuisce il numero di oggetti sottostanti rilevati dall'oggetto corrente di ClassFactory.|  
|[Metodo ClassFactory::QueryInterface](../windows/classfactory-queryinterface-method.md)|Recupera un puntatore a interfaccia specificata dal parametro.|  
|[Metodo ClassFactory::Release](../windows/classfactory-release-method.md)|Decrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.|  
  
## Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `RuntimeClassBase`  
  
 `ImplementsHelper`  
  
 `DontUseNewUseMake`  
  
 `RuntimeClassFlags`  
  
 `RuntimeClassBaseT`  
  
 `RuntimeClass`  
  
 `ClassFactory`  
  
## Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)   
 [Enumerazione RuntimeClassType](../windows/runtimeclasstype-enumeration.md)