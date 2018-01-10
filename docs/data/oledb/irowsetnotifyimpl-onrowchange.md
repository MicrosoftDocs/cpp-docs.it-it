---
title: 'IRowsetNotifyImpl:: Onrowchange | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetNotifyImpl::OnRowChange
- IRowsetNotifyImpl.OnRowChange
- OnRowChange
dev_langs: C++
helpviewer_keywords: OnRowChange method
ms.assetid: 148bee03-3707-4bbf-8c51-657efc63645f
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d20e144ae700a19fb6b87820fd092bff11d3bc88
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetnotifyimplonrowchange"></a>IRowsetNotifyImpl::OnRowChange
Notifica il consumer della prima modifica a una riga o di qualsiasi modifica che interessa l'intera riga.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
STDMETHOD(OnRowChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBCOUNTITEM /* cRows */,  
/* [size_is][in] */ const HROW /* rghRows*/ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) per le descrizioni dei parametri.  
  
## <a name="return-value"></a>Valore restituito  
 Vedere [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) per restituire le descrizioni dei valori.  
  
## <a name="remarks"></a>Note  
 Questo metodo esegue il wrapping di [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) metodo. Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)   
 [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/en-us/library/ms722694.aspx)