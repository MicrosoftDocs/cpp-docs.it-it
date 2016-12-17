---
title: "Metodo AsyncBase::OnCancel | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::OnCancel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnCancel (metodo)"
ms.assetid: 4bd0b68e-a9df-4913-9f6c-e093ed55c3f9
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::OnCancel
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se sottoposto a override in una classe derivata, annulla un'operazione asincrona .  
  
## Sintassi  
  
```  
virtual void OnCancel(  
   void  
) = 0;  
```  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)   
 [Metodo AsyncBase::Cancel](../windows/asyncbase-cancel-method.md)