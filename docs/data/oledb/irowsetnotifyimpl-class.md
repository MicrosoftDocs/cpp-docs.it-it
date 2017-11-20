---
title: Classe IRowsetNotifyImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetNotifyImpl
- ATL::IRowsetNotifyImpl
- IRowsetNotifyImpl
dev_langs: C++
helpviewer_keywords: IRowsetNotifyImpl class
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7473e63c7ca67dff200d5cf96f1774ca9a2d6817
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetnotifyimpl-class"></a>Classe IRowsetNotifyImpl
Implementa e registra [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) sul consumer (noto anche come "sink") in modo che possa gestire le notifiche.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[OnFieldChange](../../data/oledb/irowsetnotifyimpl-onfieldchange.md)|Notifica al consumer di qualsiasi modifica del valore di una colonna.|  
|[OnRowChange](../../data/oledb/irowsetnotifyimpl-onrowchange.md)|Notifica il consumer della prima modifica a una riga o di qualsiasi modifica che interessa l'intera riga.|  
|[OnRowsetChange](../../data/oledb/irowsetnotifyimpl-onrowsetchange.md)|Notifica al consumer di qualsiasi modifica che interessano l'intero set di righe.|  
  
## <a name="remarks"></a>Note  
 Vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia di punto di connessione sul consumer.  
  
 `IRowsetNotifyImpl`fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per il `IRowsetNotify` metodi [OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx), [OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx), e [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx). Se si eredita da questa classe quando si implementa un `IRowsetNotify` interfaccia, è possibile implementare solo i metodi necessari. È inoltre necessario fornire implementazioni vuote per gli altri metodi manualmente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx)   
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)