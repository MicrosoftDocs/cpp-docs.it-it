---
title: "Classe SimpleActivationFactory | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::SimpleActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SimpleActivationFactory (classe)"
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe SimpleActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce un meccanismo semplice per creare un Windows Runtime o una classe di base COM classica.  
  
## Sintassi  
  
```  
template<  
   typename Base  
>  
class SimpleActivationFactory : public ActivationFactory<>;  
```  
  
#### Parametri  
 `Base`  
 Una classe di base.  
  
## Osservazioni  
 La classe di base deve fornire un costruttore predefinito.  
  
 Nel frammento di codice d'esempio seguente viene illustrato come utilizzare SimpleActivationFactory con la macro [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md).  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SimpleActivationFactory::ActivateInstance](../windows/simpleactivationfactory-activateinstance-method.md)|Crea un'istanza dell'interfaccia specificata.|  
|[Metodo SimpleActivationFactory::GetRuntimeClassName](../windows/simpleactivationfactory-getruntimeclassname-method.md)|Ottiene il nome di classe runtime di un'istanza della classe specificata dal parametro di modello di classe `Base`.|  
|[Metodo SimpleActivationFactory::GetTrustLevel](../windows/simpleactivationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità di istanza della classe specificata dal parametro di template di classe `Base`.|  
  
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
  
 `SimpleActivationFactory`  
  
## Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)