---
title: "Classe ActivationFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivationFactory (classe)"
ms.assetid: 5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe ActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Abilita una o più classi da attivare dal Runtime di Windows.  
  
## Sintassi  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ActivationFactory : public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference>, false>;  
```  
  
#### Parametri  
 `I0`  
 L'interfaccia con indice zero.  
  
 `I1`  
 La prima interfaccia ID.  
  
 `I2`  
 La seconda interfaccia ID.  
  
## Note  
 ActivationFactory fornisce metodi e le funzionalità di base di registrazione per l'interfaccia IActivationFactory.  ActivationFactory consente inoltre di fornire un'implementazione personalizzata della factory.  
  
 Nel frammento di codice riportato di seguito viene illustrato come utilizzare ActivationFactory.  
  
 [!code-cpp[wrl-microsoft__wrl__activationfactory#1](../windows/codesnippet/CPP/activationfactory-class_1.cpp)]  
  
 Nel codice seguente viene illustrato come utilizzare la struttura [Implementa](../windows/implements-structure.md) per specificare più di tre interfacce ID.  
  
 `struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ActivationFactory::ActivationFactory](../windows/activationfactory-activationfactory-constructor.md)|Inizializza la classe ActivationFactory.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ActivationFactory::AddRef](../windows/activationfactory-addref-method.md)|Incrementa il conteggio dei riferimenti dell'oggetto corrente di ActivationFactory.|  
|[Metodo ActivationFactory::GetIids](../windows/activationfactory-getiids-method.md)|Recupera un array dell'interfaccia implementata ID.|  
|[Metodo ActivationFactory::GetRuntimeClassName](../windows/activationfactory-getruntimeclassname-method.md)|Ottiene il nome della classe runtime dell'oggetto che istanzia ActivationFactory.|  
|[Metodo ActivationFactory::GetTrustLevel](../windows/activationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità dell'oggetto che l'ActivationFactory corrente istanzia.|  
|[Metodo ActivationFactory::QueryInterface](../windows/activationfactory-queryinterface-method.md)|Recupera un puntatore all'interfaccia specificata.|  
|[Metodo ActivationFactory::Release](../windows/activationfactory-release-method.md)|Decrementa il conteggio dei riferimenti dell'oggetto corrente di ActivationFactory.|  
  
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
  
 `ActivationFactory`  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)