---
title: "ICommandImpl::m_bCancelWhenExecuting | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl::m_bCancelWhenExecuting"
  - "ICommandImpl.m_bCancelWhenExecuting"
  - "ATL::ICommandImpl::m_bCancelWhenExecuting"
  - "m_bCancelWhenExecuting"
  - "ATL.ICommandImpl.m_bCancelWhenExecuting"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_bCancelWhenExecuting"
ms.assetid: d7d33e4c-a862-4e6d-a9a1-4400bfe45b88
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandImpl::m_bCancelWhenExecuting
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica se il comando può essere annullato quando viene eseguita.  
  
## Sintassi  
  
```  
  
unsigned m_bCancelWhenExecuting:1;  
  
```  
  
## Note  
 L'impostazione predefinita è **true** \(può essere annullato\).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe ICommandImpl](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m\_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)