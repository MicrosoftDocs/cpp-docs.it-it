---
title: "IErrorRecordsImpl::GetErrorParameters | Microsoft Docs"
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
  - "IErrorRecordsImpl::GetErrorParameters"
  - "ATL.IErrorRecordsImpl.GetErrorParameters"
  - "IErrorRecordsImpl.GetErrorParameters"
  - "GetErrorParameters"
  - "ATL::IErrorRecordsImpl::GetErrorParameters"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorParameters (metodo)"
ms.assetid: 9bafac52-399e-4e0e-8365-b9f83074cdd5
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IErrorRecordsImpl::GetErrorParameters
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce i parametri di errore.  
  
## Sintassi  
  
```  
  
      STDMETHOD( GetErrorParameters )(  
   ULONG ulRecordNum,  
   DISPPARAMS *pdispparams   
);  
```  
  
#### Parametri  
 Vedere [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)