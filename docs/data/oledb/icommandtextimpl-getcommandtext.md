---
title: "ICommandTextImpl::GetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCommandText"
  - "ICommandTextImpl.GetCommandText"
  - "ICommandTextImpl::GetCommandText"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCommandText (metodo)"
ms.assetid: 0f8da470-b1c3-4573-974f-1acc111e3984
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# ICommandTextImpl::GetCommandText
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il comando di tipo testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).  
  
## Sintassi  
  
```  
  
      STDMETHOD(GetCommandText)(   
   GUID * pguidDialect,   
   LPOLESTR * ppwszCommand    
);  
```  
  
#### Parametri  
 Vedere [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) in *OLE DB Programmer's Reference*.  Il parametro *pguidDialect* viene ignorato per impostazione predefinita.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)