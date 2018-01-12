---
title: 'IRowsetNotifyImpl:: Onrowsetchange | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- OnRowsetChange
- IRowsetNotifyImpl::OnRowsetChange
- IRowsetNotifyImpl.OnRowsetChange
dev_langs: C++
helpviewer_keywords: OnRowsetChange method
ms.assetid: 5125b0c8-f175-4ee6-befa-8df2c904d5e0
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c5245e7206e9c14895db8169e78bdcff6fe4ac9f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetnotifyimplonrowsetchange"></a>IRowsetNotifyImpl::OnRowsetChange
Notifica al consumer di qualsiasi modifica che interessano l'intero set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   STDMETHOD(OnRowsetChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) per le descrizioni dei parametri.  
  
## <a name="return-value"></a>Valore restituito  
 Vedere [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) per restituire le descrizioni dei valori.  
  
## <a name="remarks"></a>Note  
 Questo metodo esegue il wrapping di [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) metodo. Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)   
 [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx)