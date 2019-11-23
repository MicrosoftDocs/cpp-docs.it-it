---
title: Classe IRowsetNotifyImpl
ms.date: 11/04/2016
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
helpviewer_keywords:
- IRowsetNotifyImpl class
- OnFieldChange method
- OnRowChange method
- OnRowsetChange method
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
ms.openlocfilehash: 4e6b4c3298c063038e7365496f26f50d3789be86
ms.sourcegitcommit: 0e3da5cea44437c132b5c2ea522bd229ea000a10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/12/2019
ms.locfileid: "70311791"
---
# <a name="irowsetnotifyimpl-class"></a>Classe IRowsetNotifyImpl

Implementa e registra [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) nel consumer (noto anche come "sink") in modo che possa gestire le notifiche.

## <a name="syntax"></a>Sintassi

```cpp
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[OnFieldChange](#onfieldchange)|Notifica al consumer tutte le modifiche apportate al valore di una colonna.|
|[OnRowChange](#onrowchange)|Notifica al consumer la prima modifica apportata a una riga o di qualsiasi modifica che influisca sull'intera riga.|
|[OnRowsetChange](#onrowsetchange)|Notifica al consumer tutte le modifiche che interessano l'intero set di righe.|

## <a name="remarks"></a>Note

Vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia del punto di connessione sul consumer.

`IRowsetNotifyImpl` fornisce un'implementazione fittizia per `IRowsetNotify`, con funzioni vuote per i metodi di `IRowsetNotify` [OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)), [OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85))e [OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)). Se si eredita da questa classe quando si implementa un'interfaccia di `IRowsetNotify`, è possibile implementare solo i metodi necessari. È anche necessario fornire implementazioni vuote per gli altri metodi.

## <a name="onfieldchange"></a>IRowsetNotifyImpl:: OnFieldChange

Notifica al consumer tutte le modifiche apportate al valore di una colonna.

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

Per le descrizioni dei parametri, vedere [IRowsetNotify:: OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) .

### <a name="return-value"></a>Valore restituito

Per le descrizioni dei valori restituiti, vedere [IRowsetNotify:: OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) .

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="onrowchange"></a>IRowsetNotifyImpl:: OnRowChange

Notifica al consumer la prima modifica apportata a una riga o di qualsiasi modifica che influisca sull'intera riga.

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

Per le descrizioni dei parametri, vedere [IRowsetNotify:: OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) .

### <a name="return-value"></a>Valore restituito

Per le descrizioni dei valori restituiti, vedere [IRowsetNotify:: OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) .

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="onrowsetchange"></a>IRowsetNotifyImpl:: OnRowsetChange

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

Per le descrizioni dei parametri, vedere [IRowsetNotify:: OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) .

### <a name="return-value"></a>Valore restituito

Per le descrizioni dei valori restituiti, vedere [IRowsetNotify:: OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) .

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
Classe [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85))
[IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)
