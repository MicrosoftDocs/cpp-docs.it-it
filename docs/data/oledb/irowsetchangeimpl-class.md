---
title: Classe IRowsetChangeImpl
ms.date: 11/04/2016
f1_keywords:
- ATL::IRowsetChangeImpl
- IRowsetChangeImpl
- ATL.IRowsetChangeImpl
- ATL.IRowsetChangeImpl.DeleteRows
- ATL::IRowsetChangeImpl::DeleteRows
- IRowsetChangeImpl.DeleteRows
- DeleteRows
- IRowsetChangeImpl::DeleteRows
- ATL.IRowsetChangeImpl.InsertRow
- InsertRow
- IRowsetChangeImpl.InsertRow
- ATL::IRowsetChangeImpl::InsertRow
- IRowsetChangeImpl::InsertRow
- IRowsetChangeImpl::SetData
- ATL.IRowsetChangeImpl.SetData
- IRowsetChangeImpl.SetData
- ATL::IRowsetChangeImpl::SetData
- IRowsetChangeImpl::FlushData
- IRowsetChangeImpl.FlushData
- FlushData
helpviewer_keywords:
- providers, updatable
- updatable providers, immediate update
- IRowsetChangeImpl class
- DeleteRows method
- InsertRow method
- SetData method
- FlushData method
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
ms.openlocfilehash: ae4ceea53ec91cc3f9593dd3789fcf61e0702274
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376952"
---
# <a name="irowsetchangeimpl-class"></a>Classe IRowsetChangeImpl

Implementazione dei modelli OLE DB dell'interfaccia [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) nella specifica OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
template <
   class T,
   class Storage,
   class BaseInterface = IRowsetChange,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>>
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata `IRowsetChangeImpl`da .

*Storage*<br/>
Record utente.

*Interfaccia di base*<br/>
Classe base per l'interfaccia, ad `IRowsetChange`esempio .

*Classe Row*<br/>
Unità di archiviazione per l'handle di riga.

*Classe MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga mantenuti dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)Interface Methods (Used with IRowsetChange)

|||
|-|-|
|[DeleteRows (Righe)](#deleterows)|Elimina righe dal set di righe.|
|[InsertRow](#insertrow)|Inserisce una riga nel set di righe.|
|[Setdata](#setdata)|Imposta i valori dei dati in una o più colonne.|

### <a name="implementation-method-callback"></a>Metodo di implementazione (callback)Implementation Method (Callback)

|||
|-|-|
|[Dati di flusso](#flushdata)|Eseguire l'override del provider per eseguire il commit dei dati nel relativo archivio.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia è responsabile delle operazioni di scrittura immediate in un archivio dati. "Immediato" significa che quando l'utente finale (la persona che utilizza il consumer) apporta modifiche, tali modifiche vengono immediatamente trasmesse all'archivio dati (e non possono essere annullate).

`IRowsetChangeImpl`implementa l'interfaccia `IRowsetChange` OLE DB, che consente l'aggiornamento dei valori delle colonne nelle righe esistenti, l'eliminazione di righe e l'inserimento di nuove righe.

L'implementazione dei modelli OLE DB`SetData` `InsertRow`supporta `DeleteRows`tutti i metodi di base ( , , e ).

> [!IMPORTANT]
> Si consiglia di leggere la seguente documentazione PRIMA di tentare di implementare il provider:

- [Creazione di un provider aggiornabileCreating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)

- Capitolo 6 di *OLE DB Programmer's Reference (informazioni* in inglese)

- Vedere anche `RUpdateRowset` come la classe viene utilizzata nell'esempio [UpdatePV.](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)

## <a name="irowsetchangeimpldeleterows"></a><a name="deleterows"></a>IRowsetChangeImpl::DeleteRows

Elimina righe dal set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (DeleteRows )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange::DeleteRows](/previous-versions/windows/desktop/ms724362(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetchangeimplinsertrow"></a><a name="insertrow"></a>IRowsetChangeImpl::InsertRow

Crea e inizializza una nuova riga nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (InsertRow )(HCHAPTER /* hReserved */,
   HACCESSOR hAccessor,
   void* pData,
   HROW* phRow);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange::InsertRow](/previous-versions/windows/desktop/ms716921(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetchangeimplsetdata"></a><a name="setdata"></a>IRowsetChangeImpl::SetDataIRowsetChangeImpl::SetData

Imposta i valori dei dati in una o più colonne.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (SetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pSrcData);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange::SetData](/previous-versions/windows/desktop/ms721232(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetchangeimplflushdata"></a><a name="flushdata"></a>IRowsetChangeImpl::FlushDataIRowsetChangeImpl::FlushData

Eseguire l'override del provider per eseguire il commit dei dati nel relativo archivio.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT FlushData(HROW hRowToFlush,
   HACCESSOR hAccessorToFlush);
```

#### <a name="parameters"></a>Parametri

*hRowToFlush*<br/>
[in] Gestire le righe per i dati. Il tipo di questa riga è determinato dall'argomento`CSimpleRow` di modello *RowClass* della `IRowsetImpl` classe ( per impostazione predefinita).

*hAccessorToFlush (informazioni in stato inosono del servizio)*<br/>
[in] Handle alla funzione di accesso , che contiene `PROVIDER_MAP` informazioni sull'associazione e informazioni sul tipo nella relativa (vedere [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)).

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
