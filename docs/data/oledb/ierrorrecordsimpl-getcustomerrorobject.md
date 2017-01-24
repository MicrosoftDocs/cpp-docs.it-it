---
title: "IErrorRecordsImpl::GetCustomErrorObject | Microsoft Docs"
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
  - "ATL::IErrorRecordsImpl::GetCustomErrorObject"
  - "IErrorRecordsImpl::GetCustomErrorObject"
  - "ATL.IErrorRecordsImpl.GetCustomErrorObject"
  - "IErrorRecordsImpl.GetCustomErrorObject"
  - "GetCustomErrorObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCustomErrorObject (metodo)"
ms.assetid: 96d3549b-a49c-4552-94b2-71babaf1bf20
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IErrorRecordsImpl::GetCustomErrorObject
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un puntatore a un'interfaccia a un oggetto di errore personalizzato.  
  
## Sintassi  
  
```  
  
      STDMETHOD( GetCustomErrorObject )(  
   ULONG ulRecordNum,  
   REFIID riid,  
   IUnknown **ppObject   
);  
```  
  
#### Parametri  
 Vedere [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)