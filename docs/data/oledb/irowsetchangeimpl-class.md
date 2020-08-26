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
ms.openlocfilehash: 66e7b758752a46fffff177323fe83eecc0b2fa55
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832779"
---
# <a name="irowsetchangeimpl-class"></a>Classe IRowsetChangeImpl

L'implementazione dei modelli di OLE DB dell'interfaccia [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) nella specifica OLE DB.

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
Classe derivata da `IRowsetChangeImpl` .

*Storage*<br/>
Record utente.

*BaseInterface*<br/>
Classe di base per l'interfaccia, ad esempio `IRowsetChange` .

*RowClass*<br/>
Unità di archiviazione per l'handle di riga.

*MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga utilizzati dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)

| Nome | Descrizione |
|-|-|
|[DeleteRows](#deleterows)|Elimina le righe dal set di righe.|
|[InsertRow](#insertrow)|Inserisce una riga nel set di righe.|
|[SetData](#setdata)|Imposta i valori dei dati in una o più colonne.|

### <a name="implementation-method-callback"></a>Metodo di implementazione (callback)

| Nome | Descrizione |
|-|-|
|[FlushData](#flushdata)|Sottoposto a override dal provider per eseguire il commit dei dati nell'archivio.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia è responsabile delle operazioni di scrittura immediate in un archivio dati. "Immediato" significa che quando l'utente finale (la persona che usa il consumer) apporta le modifiche, queste modifiche vengono immediatamente trasmesse all'archivio dati e non possono essere annullate.

`IRowsetChangeImpl` implementa l' `IRowsetChange` interfaccia OLE DB, che consente l'aggiornamento dei valori delle colonne nelle righe esistenti, l'eliminazione di righe e l'inserimento di nuove righe.

L'implementazione dei modelli di OLE DB supporta tutti i metodi di base ( `SetData` , `InsertRow` e `DeleteRows` ).

> [!IMPORTANT]
> PRIMA di tentare di implementare il provider, è consigliabile leggere la seguente documentazione:

- [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)

- Capitolo 6 del *riferimento per programmatori OLE DB*

- Vedere anche come `RUpdateRowset` viene usata la classe nell'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) .

## <a name="irowsetchangeimpldeleterows"></a><a name="deleterows"></a> IRowsetChangeImpl::D eleteRows

Elimina le righe dal set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (DeleteRows )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange::D eleterows](/previous-versions/windows/desktop/ms724362(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetchangeimplinsertrow"></a><a name="insertrow"></a> IRowsetChangeImpl:: InsertRow

Crea e Inizializza una nuova riga nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (InsertRow )(HCHAPTER /* hReserved */,
   HACCESSOR hAccessor,
   void* pData,
   HROW* phRow);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange:: InsertRow](/previous-versions/windows/desktop/ms716921(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetchangeimplsetdata"></a><a name="setdata"></a> IRowsetChangeImpl:: SetData

Imposta i valori dei dati in una o più colonne.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (SetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pSrcData);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange:: SetData](/previous-versions/windows/desktop/ms721232(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetchangeimplflushdata"></a><a name="flushdata"></a> IRowsetChangeImpl:: FlushData

Sottoposto a override dal provider per eseguire il commit dei dati nell'archivio.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT FlushData(HROW hRowToFlush,
   HACCESSOR hAccessorToFlush);
```

#### <a name="parameters"></a>Parametri

*hRowToFlush*<br/>
in Handle per le righe per i dati. Il tipo di questa riga è determinato dall'argomento del modello *RowClass* della `IRowsetImpl` classe ( `CSimpleRow` per impostazione predefinita).

*hAccessorToFlush*<br/>
in Handle per la funzione di accesso che contiene informazioni sull'associazione e informazioni sul tipo in `PROVIDER_MAP` (vedere [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
