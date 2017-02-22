---
title: "Funzione CreateClassFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::CreateClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateClassFactory (funzione)"
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Funzione CreateClassFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una factory che produce istanze della classe specificata.  
  
## Sintassi  
  
```cpp  
  
template<typename Factory>  
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(  
   _In_ unsigned int *flags,   
   _In_ const CreatorMap* entry,   
   REFIID riid,   
   _Outptr_ IUnknown **ppFactory  
) throw();  
  
```  
  
#### Parametri  
 `flags`  
 Una combinazione di uno o più valori di enumerazione [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
 `entry`  
 Puntatore a [CreatorMap](../windows/creatormap-structure.md) che contiene l'inizializzazione e le informazioni di registrazione sul parametro `riid`.  
  
 `riid`  
 Riferimento a un'interfaccia ID.  
  
 `ppFactory`  
 Se l'operazione viene completata correttamente, un puntatore ad una classe factory.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Un errore di asserzione viene generato se il parametro di modello `Factory` non deriva dall'interfaccia IClassFactory.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)