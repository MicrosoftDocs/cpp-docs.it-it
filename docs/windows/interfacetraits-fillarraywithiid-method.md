---
title: "Metodo InterfaceTraits::FillArrayWithIid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FillArrayWithIid (metodo)"
ms.assetid: 73583177-adc9-4fcb-917d-fa7e6d07c990
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo InterfaceTraits::FillArrayWithIid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
  
```  
  
#### Parametri  
 `index`  
 Puntatore a un campo che contiene un valore di indice a base zero.  
  
 `iids`  
 Un array di interfacce ID.  
  
## Note  
 Assegna l'interfaccia ID di `Base` all'elemento array specificato dall'argomento dell'indice.  
  
 Contrariamente al nome di questa API, un solo elemento di matrice viene modificato; non l'intera matrice.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione pubblica Typedef in [Struttura InterfaceTraits](../windows/interfacetraits-structure.md).  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura InterfaceTraits](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)