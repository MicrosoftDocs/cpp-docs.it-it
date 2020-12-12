---
description: 'Altre informazioni su: Classe IRowsetNotifyCP'
title: Classe IRowsetNotifyCP
ms.date: 11/04/2016
f1_keywords:
- IRowsetNotifyCP
- Fire_OnFieldChange
- ATL::IRowsetNotifyCP::Fire_OnFieldChange
- ATL.IRowsetNotifyCP.Fire_OnFieldChange
- IRowsetNotifyCP.Fire_OnFieldChange
- IRowsetNotifyCP::Fire_OnFieldChange
- IRowsetNotifyCP.Fire_OnRowChange
- ATL.IRowsetNotifyCP.Fire_OnRowChange
- Fire_OnRowChange
- ATL::IRowsetNotifyCP::Fire_OnRowChange
- IRowsetNotifyCP::Fire_OnRowChange
- Fire_OnRowsetChange
- IRowsetNotifyCP::Fire_OnRowsetChange
- IRowsetNotifyCP.Fire_OnRowsetChange
- ATL::IRowsetNotifyCP::Fire_OnRowsetChange
- ATL.IRowsetNotifyCP.Fire_OnRowsetChange
helpviewer_keywords:
- IRowsetNotifyCP class
- Fire_OnFieldChange method
- Fire_OnRowChange method
- Fire_OnRowsetChange method
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
ms.openlocfilehash: 70e759ed19c366f7e85511170439c24f319c5cd3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317272"
---
# <a name="irowsetnotifycp-class"></a>Classe IRowsetNotifyCP

Implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)).

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class ReentrantEventSync = CComSharedMutex>
class IRowsetNotifyCP :
   public IConnectionPointImpl<
      T,
      piid = &__uuidof(IRowsetNotify),
      CComDynamicUnkArray DynamicUnkArray>,
   public ReentrantEventSync
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetNotifyCP` .

*ReentrantEventSync*<br/>
Classe Mutex che supporta la rientranza (il valore predefinito è `CComSharedMutex` ). Un mutex è un oggetto di sincronizzazione che consente a un thread di accedere in modo reciproco a una risorsa.

*pIID*<br/>
Puntatore a un ID di interfaccia ( `IID*` ) per un' `IRowsetNotify` interfaccia del punto di connessione. Il valore predefinito è `&__uuidof(IRowsetNotify)`.

*DynamicUnkArray*<br/>
Matrice di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che è una matrice allocata in modo dinamico di `IUnknown` puntatori alle interfacce del sink client.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[Fire_OnFieldChange](#onfieldchange)|Notifica al consumer di una modifica al valore di una colonna.|
|[Fire_OnRowChange](#onrowchange)|Notifica al consumer una modifica che influisce sulle righe.|
|[Fire_OnRowsetChange](#onrowsetchange)|Notifica al consumer una modifica che influisce sull'intero set di righe.|

## <a name="remarks"></a>Commenti

`IRowsetNotifyCP` implementa funzioni broadcast per consigliare i listener sul punto di connessione `IID_IRowsetNotify` delle modifiche al contenuto del set di righe.

Si noti che è inoltre necessario implementare e registrare `IRowsetNotify` sul consumer (noto anche come "sink") utilizzando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) , in modo che il consumer possa gestire le notifiche. Vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia del punto di connessione sul consumer.

Per informazioni dettagliate sull'implementazione delle notifiche, vedere "supporto delle notifiche" nella pagina relativa alla [creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md).

## <a name="irowsetnotifycpfire_onfieldchange"></a><a name="onfieldchange"></a> IRowsetNotifyCP:: Fire_OnFieldChange

Trasmette un evento [OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) per notificare agli utenti una modifica al valore di una colonna.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Fire_OnFieldChange(IRowset* pRowset,
   HROW hRow,
   DBORDINAL cColumns,
   DBORDINAL* rgColumns,
   DBREASON eReason,
   DBEVENTPHASE ePhase,
   BOOL fCantDeny);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetNotify:: OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetnotifycpfire_onrowchange"></a><a name="onrowchange"></a> IRowsetNotifyCP:: Fire_OnRowChange

Trasmette un evento [OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) a tutti i listener nel punto `IID_IRowsetNotify` di connessione per notificare agli utenti una modifica che influisce sulle righe.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Fire_OnRowChange(IRowset* pRowset,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBREASON eReason,
   DBEVENTPHASE ePhase,
   BOOL fCantDeny);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetNotify:: OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetnotifycpfire_onrowsetchange"></a><a name="onrowsetchange"></a> IRowsetNotifyCP:: Fire_OnRowsetChange

Trasmette un evento [OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) a tutti i listener nel punto `IID_IRowsetNotify` di connessione per notificare agli utenti una modifica che influisce sull'intero set di righe.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,
   DBREASON eReason,
   DBEVENTPHASE ePhase,
   BOOL fCantDeny);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetNotify:: OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Notifiche (COM)](/windows/win32/com/notifications)<br/>
[BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)<br/>
[END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)<br/>
[CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)<br/>
[Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)
