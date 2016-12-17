---
title: "Classe SimpleClassFactory | Microsoft Docs"
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
  - "module/Microsoft::WRL::SimpleClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SimpleClassFactory (classe)"
ms.assetid: 6edda1b2-4e44-4e14-9364-72f519249962
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe SimpleClassFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce un meccanismo semplice per creare una classe di base.  
  
## Sintassi  
  
```  
template<  
   typename Base  
>  
class SimpleClassFactory : public ClassFactory<>;  
```  
  
#### Parametri  
 `Base`  
 Una classe di base.  
  
## Osservazioni  
 La classe di base deve fornire un costruttore predefinito.  
  
 Nel frammento di codice d'esempio seguente viene illustrato come utilizzare SimpleClassFactory con la macro [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md).  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleClassFactory, MyServerName);`  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SimpleClassFactory::CreateInstance](../windows/simpleclassfactory-createinstance-method.md)|Crea un'istanza dell'interfaccia specificata.|  
  
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
  
 `SimpleClassFactory`  
  
## Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)