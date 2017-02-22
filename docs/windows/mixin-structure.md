---
title: "Struttura MixIn | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::MixIn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MixIn (struttura)"
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Struttura MixIn
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica che una classe di runtime deriva dalle interfacce [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]; in caso positivo, se deriva da interfacce COM classiche.  
  
## Sintassi  
  
```  
template<  
   typename Derived,  
   typename MixInType,  
   bool hasImplements = __is_base_of(Details::ImplementsBase,  
   MixInType)  
>  
struct MixIn;  
```  
  
#### Parametri  
 `Derived`  
 Un tipo derivato dalla struttura [Implements](../windows/implements-structure.md).  
  
 `MixInType`  
 Un tipo base.  
  
 `hasImplements`  
 `true` se `MixInType` è derivato dall'implementazione del tipo di base corrente; in caso contrario, `false`.  
  
## Note  
 Se la classe derivata sia da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e dalle interfacce COM della classe, l'elenco delle dichiarazioni di classe deve innanzitutto elencare tutte le interfacce [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] quindi le interfacce COM classiche.  MixIn garantisce che le interfacce sono specificate nell'ordine corretto.  
  
## Gerarchia di ereditarietà  
 `MixIn`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)