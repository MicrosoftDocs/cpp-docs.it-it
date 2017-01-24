---
title: "Metodo ComPtr::Detach | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
ms.assetid: b9016775-1ade-4581-be1f-0d6f9c2ca658
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ComPtr::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla l'associazione di questo oggetto `ComPtr` dall'interfaccia che rappresenta.  
  
## Sintassi  
  
```  
T* Detach();  
```  
  
## Valore restituito  
 Un puntatore a un'interfaccia che è stata rappresentata da questo oggetto `ComPtr`.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)