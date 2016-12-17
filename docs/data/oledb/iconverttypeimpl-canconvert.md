---
title: "IConvertTypeImpl::CanConvert | Microsoft Docs"
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
  - "IConvertTypeImpl.CanConvert"
  - "CanConvert"
  - "IConvertTypeImpl::CanConvert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanConvert (metodo)"
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IConvertTypeImpl::CanConvert
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di specificare informazioni sulla disponibilità delle conversioni di tipo un comando o per un rowset.  
  
## Sintassi  
  
```  
  
      STDMETHOD(CanConvert)(   
   DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags    
);  
```  
  
#### Parametri  
 Vedere [IConvertType::CanConvert](https://msdn.microsoft.com/en-us/library/ms711224.aspx)*in OLE DB Programmer's Reference*.  
  
## Note  
 Conversione di dati di utilizzare OLE DB in `MSADC.DLL`.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)