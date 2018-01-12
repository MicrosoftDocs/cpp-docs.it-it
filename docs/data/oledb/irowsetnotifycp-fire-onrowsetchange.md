---
title: 'IRowsetNotifyCP:: Fire_onrowsetchange | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Fire_OnRowsetChange
- IRowsetNotifyCP::Fire_OnRowsetChange
- IRowsetNotifyCP.Fire_OnRowsetChange
- ATL::IRowsetNotifyCP::Fire_OnRowsetChange
- ATL.IRowsetNotifyCP.Fire_OnRowsetChange
dev_langs: C++
helpviewer_keywords: Fire_OnRowsetChange method
ms.assetid: 412a9ec2-5041-4c56-acda-dc8f8e9b35f3
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c86cf959ff2b1b9e05577823aa99da39b90222ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetnotifycpfireonrowsetchange"></a>IRowsetNotifyCP::Fire_OnRowsetChange
Trasmette un [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) evento a tutti i listener per il punto di connessione **IID_IRowsetNotify** notificare gli utenti di una modifica che interessano l'intero set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Fire_OnRowsetChange(  
   IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)