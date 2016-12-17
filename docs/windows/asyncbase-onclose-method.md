---
title: "Metodo AsyncBase::OnClose | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::OnClose"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnClose (metodo)"
ms.assetid: 96766450-c262-4611-8534-7d190b799142
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::OnClose
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se sottoposto a override in una classe derivata, chiude un'operazione asincrona.  
  
## Sintassi  
  
```  
virtual void OnClose(  
   void  
) = 0;  
```  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)   
 [Metodo AsyncBase::Close](../windows/asyncbase-close-method.md)