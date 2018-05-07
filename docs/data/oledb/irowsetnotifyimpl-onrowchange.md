---
title: 'IRowsetNotifyImpl:: Onrowchange | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetNotifyImpl::OnRowChange
- IRowsetNotifyImpl.OnRowChange
- OnRowChange
dev_langs:
- C++
helpviewer_keywords:
- OnRowChange method
ms.assetid: 148bee03-3707-4bbf-8c51-657efc63645f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8eae9d40b34adb6368b863f3534c5867a90979af
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="irowsetnotifyimplonrowchange"></a>IRowsetNotifyImpl::OnRowChange
Notifica il consumer della prima modifica a una riga o di qualsiasi modifica che interessa l'intera riga.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
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