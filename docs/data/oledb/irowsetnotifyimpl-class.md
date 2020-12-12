---
description: 'Altre informazioni su: classe IRowsetNotifyImpl'
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
ms.openlocfilehash: e07f918d7315998f5aa0dc14dbd613520a68f134
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287047"
---
# <a name="irowsetnotifyimpl-class"></a>Classe IRowsetNotifyImpl

Implementa e registra [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) nel consumer (noto anche come "sink") in modo che possa gestire le notifiche.

## <a name="syntax"></a>Sintassi

```cpp
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[OnFieldChange](#onfieldchange)|Notifica al consumer tutte le modifiche apportate al valore di una colonna.|
|[OnRowChange](#onrowchange)|Notifica al consumer la prima modifica apportata a una riga o tutte le modifiche che hanno effetto sull'intera riga.|
|[OnRowsetChange](#onrowsetchange)|Notifica al consumer tutte le modifiche che hanno effetto sull'intero set di righe.|

## <a name="remarks"></a>Commenti

Vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia del punto di connessione sul consumer.

`IRowsetNotifyImpl` fornisce un'implementazione fittizia per `IRowsetNotify` , con funzioni vuote per i `IRowsetNotify` metodi [OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)), [OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85))e [OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)). Se si eredita da questa classe quando si implementa un' `IRowsetNotify` interfaccia, è possibile implementare solo i metodi necessari. È anche necessario fornire implementazioni vuote per gli altri metodi.

## <a name="irowsetnotifyimplonfieldchange"></a><a name="onfieldchange"></a> IRowsetNotifyImpl:: OnFieldChange

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

### <a name="remarks"></a>Commenti

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="irowsetnotifyimplonrowchange"></a><a name="onrowchange"></a> IRowsetNotifyImpl:: OnRowChange

Notifica al consumer la prima modifica apportata a una riga o tutte le modifiche che hanno effetto sull'intera riga.

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

### <a name="remarks"></a>Commenti

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="irowsetnotifyimplonrowsetchange"></a><a name="onrowsetchange"></a> IRowsetNotifyImpl:: OnRowsetChange

Notifica al consumer tutte le modifiche che hanno effetto sull'intero set di righe.

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

### <a name="remarks"></a>Commenti

Questo metodo esegue il wrapping del metodo [IRowsetNotify:: OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) . Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) 
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)
