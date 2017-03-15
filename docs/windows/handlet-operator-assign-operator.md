---
title: "Operatore HandleT::operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (operatore)"
ms.assetid: 9e42dcca-30fa-4e8b-8954-802fd64a5595
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HandleT::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sposta il valore dell'oggetto HandleT specificato sull'oggetto HandleT corrente.  
  
## Sintassi  
  
```  
HandleT& operator=(  
   _Inout_ HandleT&& h  
);  
```  
  
#### Parametri  
 `h`  
 Un riferimento rvalue all'handle.  
  
## Valore restituito  
 Riferimento all'oggetto HandleT corrente.  
  
## Note  
 Questa operazione invalida l'oggetto di HandleT specificato dal parametro `h`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)