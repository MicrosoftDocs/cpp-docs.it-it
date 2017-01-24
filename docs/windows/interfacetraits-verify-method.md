---
title: "Metodo InterfaceTraits::Verify | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::InterfaceTraits::Verify"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Verify (metodo)"
ms.assetid: 46edd67f-7952-4552-a157-55e823f616c8
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo InterfaceTraits::Verify
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
__forceinline static void Verify();  
```  
  
## Note  
 Verifica che la base sia correttamente derivata.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione pubblica Typedef in [Struttura InterfaceTraits](../windows/interfacetraits-structure.md).  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura InterfaceTraits](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)