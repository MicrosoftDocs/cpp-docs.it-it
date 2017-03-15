---
title: "IRowsetNotifyCP::Fire_OnRowsetChange | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Fire_OnRowsetChange"
  - "IRowsetNotifyCP::Fire_OnRowsetChange"
  - "IRowsetNotifyCP.Fire_OnRowsetChange"
  - "ATL::IRowsetNotifyCP::Fire_OnRowsetChange"
  - "ATL.IRowsetNotifyCP.Fire_OnRowsetChange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Fire_OnRowsetChange (metodo)"
ms.assetid: 412a9ec2-5041-4c56-acda-dc8f8e9b35f3
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IRowsetNotifyCP::Fire_OnRowsetChange
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasmette un evento di [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) a tutti i listener sul punto di connessione **IID\_IRowsetNotify** per notificare ai consumer di un modifica riguarda l'intero rowset.  
  
## Sintassi  
  
```  
  
      HRESULT Fire_OnRowsetChange(  
   IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny   
);  
```  
  
#### Parametri  
 Vedere [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)