---
title: "Funzione CreateActivationFactory | Microsoft Docs"
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
  - "module/Microsoft::WRL::Details::CreateActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateActivationFactory (funzione)"
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione CreateActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.  
  
## Sintassi  
  
```cpp  
  
template<typename Factory>  
   inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(  
      _In_ unsigned int *flags,    
      _In_ const CreatorMap* entry,   
      REFIID riid,   
     _Outptr_ IUnknown **ppFactory) throw();  
  
```  
  
#### Parametri  
 `flags`  
 Una combinazione di uno o più valori di enumerazione [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
 `entry`  
 Puntatore a [CreatorMap](../windows/creatormap-structure.md) che contiene l'inizializzazione e le informazioni di registrazione sul parametro `riid`.  
  
 `riid`  
 Riferimento a un'interfaccia ID.  
  
 `ppFactory`  
 Se l'operazione viene completata correttamente, un puntatore a una factory di attivazione.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Un errore di asserzione viene generato se il parametro di modello `Factory` non deriva dall'interfaccia IActivationFactory.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)