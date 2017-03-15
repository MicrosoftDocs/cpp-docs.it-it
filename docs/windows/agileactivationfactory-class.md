---
title: "Classe AgileActivationFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::AgileActivationFactory"
dev_langs: 
  - "C++"
ms.assetid: fab98f32-bb93-4c0f-badb-49fbddb194b0
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Classe AgileActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta una factory di attivazione rivolto alle istanze che implementa [FtmBase](../windows/ftmbase-class.md).  
  
## Sintassi  
  
```cpp  
template <  
   typename I0 = Details::Nil,   
   typename I1 = Details::Nil,   
   typename I2 = Details::Nil,   
FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>  
class AgileActivationFactory :   
   public ActivationFactory<Implements<FtmBase, I0>, I1, I2, cacheFlagValue>  
{};  
```  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)   
 [Classe ActivationFactory](../windows/activationfactory-class.md)