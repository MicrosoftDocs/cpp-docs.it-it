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
ms.openlocfilehash: f75f2cc2191fdaf2007d2c9a89544f917ccdcdd8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50506340"
---
# <a name="irowsetnotifyimpl-class"></a>Classe IRowsetNotifyImpl

Implementa e registra [IRowsetNotify](/previous-versions/windows/desktop/ms712959) sul consumer (noto anche come "sink") in modo che possa gestire le notifiche.

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

`IRowsetNotifyImpl` fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per il `IRowsetNotify` metodi [OnFieldChange](/previous-versions/windows/desktop/ms715961), [OnRowChange](/previous-versions/windows/desktop/ms722694), e [OnRowsetChange](/previous-versions/windows/desktop/ms722669). Se si eredita da questa classe quando si implementa un `IRowsetNotify` interfaccia, è possibile implementare solo i metodi necessari. È inoltre necessario fornire implementazioni vuote per gli altri metodi autonomamente.

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

Visualizzare [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) per le descrizioni dei parametri.

### <a name="return-value"></a>Valore restituito

Visualizzare [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) per restituire le descrizioni dei valori.

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping di [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

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

Visualizzare [IRowsetNotify:: Onrowchange](/previous-versions/windows/desktop/ms722694) per le descrizioni dei parametri.

### <a name="return-value"></a>Valore restituito

Visualizzare [IRowsetNotify:: Onrowchange](/previous-versions/windows/desktop/ms722694) per restituire le descrizioni dei valori.

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping di [IRowsetNotify:: Onrowchange](/previous-versions/windows/desktop/ms722694) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

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

Visualizzare [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) per le descrizioni dei parametri.

### <a name="return-value"></a>Valore restituito

Visualizzare [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) per restituire le descrizioni dei valori.

### <a name="remarks"></a>Note

Questo metodo esegue il wrapping di [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) (metodo). Per informazioni dettagliate, vedere la descrizione del metodo nella Guida di riferimento per programmatori OLE DB.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[IRowsetNotify](/previous-versions/windows/desktop/ms712959)
[classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)