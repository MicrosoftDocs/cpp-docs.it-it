---
title: Classe IRowsetNotifyImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.IRowsetNotifyImpl
- ATL::IRowsetNotifyImpl
- IRowsetNotifyImpl
- IRowsetNotifyImpl.OnFieldChange
- IRowsetNotifyImpl::OnFieldChange
- OnFieldChange
- IRowsetNotifyImpl::OnRowChange
- IRowsetNotifyImpl.OnRowChange
- OnRowChange
- OnRowsetChange
- IRowsetNotifyImpl::OnRowsetChange
- IRowsetNotifyImpl.OnRowsetChange
dev_langs:
- C++
helpviewer_keywords:
- IRowsetNotifyImpl class
- OnFieldChange method
- OnRowChange method
- OnRowsetChange method
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a20be1a92c93be38d901f58339bb02b24cf2661f
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39339955"
---
# <a name="irowsetnotifyimpl-class"></a>Classe IRowsetNotifyImpl
Implementa e registra [IRowsetNotify](https://msdn.microsoft.com/library/ms712959.aspx) sul consumer (noto anche come "sink") in modo che possa gestire le notifiche.  
  
## <a name="syntax"></a>Sintassi

```cpp
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[OnFieldChange](#onfieldchange)|Notifica al consumer tutte le modifiche al valore di una colonna.|  
|[OnRowChange](#onrowchange)|Notifica al consumer la prima modifica apportata a una riga o di qualsiasi modifica che interessa l'intera riga.|  
|[OnRowsetChange](#onrowsetchange)|Notifica al consumer tutte le modifiche che interessano l'intero set di righe.|  
  
## <a name="remarks"></a>Note  
 Visualizzare [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia del punto di connessione sul consumer.  
  
 `IRowsetNotifyImpl` fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per il `IRowsetNotify` metodi [OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx), [OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx), e [OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx). Se si eredita da questa classe quando si implementa un `IRowsetNotify` interfaccia, è possibile implementare solo i metodi necessari. È inoltre necessario fornire implementazioni vuote per gli altri metodi autonomamente.  

## <a name="onfieldchange"></a> IRowsetNotifyImpl:: Onfieldchange
Notifica al consumer tutte le modifiche al valore di una colonna.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(OnFieldChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ HROW /* hRow */,  
/* [in] */ DBORDINAL /* cColumns */,  
/* [size_is][in] */ DBORDINAL /* rgColumns */ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) per le descrizioni dei parametri.  
  
### <a name="return-value"></a>Valore restituito  
 Visualizzare [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) per restituire le descrizioni dei valori.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il wrapping di [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.  

## <a name="onrowchange"></a> IRowsetNotifyImpl:: Onrowchange
Notifica al consumer la prima modifica apportata a una riga o di qualsiasi modifica che interessa l'intera riga.  
  
### <a name="syntax"></a>Sintassi  
  
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
 Visualizzare [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/library/ms722694.aspx) per le descrizioni dei parametri.  
  
### <a name="return-value"></a>Valore restituito  
 Visualizzare [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/library/ms722694.aspx) per restituire le descrizioni dei valori.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il wrapping di [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/library/ms722694.aspx) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB. 

## <a name="onrowsetchange"></a> IRowsetNotifyImpl:: Onrowsetchange
Notifica al consumer tutte le modifiche che interessano l'intero set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(OnRowsetChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) per le descrizioni dei parametri.  
  
### <a name="return-value"></a>Valore restituito  
 Visualizzare [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) per restituire le descrizioni dei valori.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il wrapping di [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [IRowsetNotify](https://msdn.microsoft.com/library/ms712959.aspx)   
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)