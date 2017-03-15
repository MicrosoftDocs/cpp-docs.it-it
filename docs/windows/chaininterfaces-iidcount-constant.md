---
title: "Costante ChainInterfaces::IidCount | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::IidCount"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IidCount (costante)"
ms.assetid: d4a90aa0-513c-4e99-b978-e12149734936
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Costante ChainInterfaces::IidCount
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il numero totale delle interfacce ID contenute nelle interfacce specificate dai parametri di modello da `I0` a `I9`.  
  
## Sintassi  
  
```  
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;  
```  
  
## Valore restituito  
 Il numero totale delle interfaccia ID.  
  
## Note  
 I parametri di modello `I0` e `I1` sono necessari, mentre i parametri da `I2` a `I9` sono facoltativi. Il conteggio di IID per ogni interfaccia è in genere 1.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)