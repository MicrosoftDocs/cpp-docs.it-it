---
title: Classe CUtlProps
ms.date: 11/04/2016
f1_keywords:
- CUtlProps
- CUtlProps::GetPropValue
- CUtlProps.GetPropValue
- GetPropValue
- CUtlProps::IsValidValue
- CUtlProps.IsValidValue
- IsValidValue
- OnPropertyChanged
- CUtlProps.OnPropertyChanged
- CUtlProps::OnPropertyChanged
- SetPropValue
- ATL::CUtlProps<T>::SetPropValue
- ATL.CUtlProps<T>.SetPropValue
- ATL.CUtlProps.SetPropValue
- CUtlProps::SetPropValue
- CUtlProps<T>::SetPropValue
- CUtlProps.SetPropValue
- CUtlProps<T>.SetPropValue
- ATL::CUtlProps::SetPropValue
helpviewer_keywords:
- CUtlProps class
- GetPropValue method
- IsValidValue method
- OnInterfaceRequested method
- OnPropertyChanged method
- SetPropValue method
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
ms.openlocfilehash: bbeae4faad4d650d8dc44a61a22b1fcc63a0bc15
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441032"
---
# <a name="cutlprops-class"></a>Classe CUtlProps

Implementa proprietà per un'ampia gamma di interfacce di proprietà OLE DB, ad esempio `IDBProperties`, `IDBProperties`e `IRowsetInfo`.

## <a name="syntax"></a>Sintassi

```cpp
template < class T >
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe che contiene il `BEGIN_PROPSET_MAP`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetPropValue](#getpropvalue)|Ottiene una proprietà da un set di proprietà.|
|[IsValidValue](#isvalidvalue)|Utilizzato per convalidare un valore prima di impostare una proprietà.|
|[OnInterfaceRequested](#oninterfacerequested)|Gestisce le richieste di un'interfaccia facoltativa quando un consumer chiama un metodo su un'interfaccia di creazione di oggetti.|
|[OnPropertyChanged](#onpropertychanged)|Chiamato dopo l'impostazione di una proprietà per gestire le proprietà concatenate.|
|[SetPropValue](#setpropvalue)|Imposta una proprietà in un set di proprietà.|

## <a name="remarks"></a>Osservazioni

La maggior parte di questa classe è un dettaglio di implementazione.

`CUtlProps` contiene due membri per l'impostazione interna delle proprietà: [GetPropValue](../../data/oledb/cutlprops-getpropvalue.md) e [SetPropValue](../../data/oledb/cutlprops-setpropvalue.md).

Per ulteriori informazioni sulle macro utilizzate in una mappa di set di proprietà, vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) e [END_PROPSET_MAP](../../data/oledb/end-propset-map.md).

## <a name="getpropvalue"></a>CUtlProps:: GetPropValue

Ottiene una proprietà da un set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
OUT_OF_LINE HRESULT GetPropValue(const GUID* pguidPropSet,
   DBPROPID dwPropId,
   VARIANT* pvValue);
```

#### <a name="parameters"></a>Parametri

*pguidPropSet*<br/>
in GUID per il propset.

*dwPropId*<br/>
in Indice della proprietà.

*pvValue*<br/>
out Puntatore a un Variant che contiene il nuovo valore della proprietà.

### <a name="return-value"></a>Valore restituito

`Failure` in caso di errore e S_OK in caso di esito positivo.

## <a name="isvalidvalue"></a>CUtlProps:: IsValidValue

Utilizzato per convalidare un valore prima di impostare una proprietà.

### <a name="syntax"></a>Sintassi

```cpp
virtual HRESULT CUtlPropsBase::IsValidValue(ULONG /* iCurSet */,
   DBPROP* pDBProp);
```

#### <a name="parameters"></a>Parametri

*iCurSet*<br/>
Indice nella matrice del set di proprietà. zero se è presente un solo set di proprietà.

*pDBProp*<br/>
ID della proprietà e nuovo valore in una struttura [DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85)) .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Il valore restituito predefinito è S_OK.

### <a name="remarks"></a>Osservazioni

Se si desidera eseguire routine di convalida in un valore che si sta per utilizzare per impostare una proprietà, è necessario eseguire l'override di questa funzione. È ad esempio possibile convalidare DBPROP_AUTH_PASSWORD in base a una tabella delle password per determinare un valore valido.

## <a name="oninterfacerequested"></a>CUtlProps:: OnInterfaceRequested

Gestisce le richieste di un'interfaccia facoltativa quando un consumer chiama un metodo su una delle interfacce di creazione degli oggetti.

### <a name="syntax"></a>Sintassi

```cpp
virtual HRESULT CUtlPropsBase::OnInterfaceRequested(REFIID riid);
```

#### <a name="parameters"></a>Parametri

*riid*<br/>
in IID per l'interfaccia richiesta. Per ulteriori informazioni, vedere la descrizione del parametro *riid* di `ICommand::Execute` nella Guida di *riferimento per programmatori OLE DB* (in *MDAC SDK*).

### <a name="remarks"></a>Osservazioni

`OnInterfaceRequested` gestisce le richieste del consumer per un'interfaccia facoltativa quando un consumer chiama un metodo su una delle interfacce di creazione di oggetti, ad esempio `IDBCreateSession`, `IDBCreateCommand`, `IOpenRowset`o `ICommand`. Imposta la proprietà OLE DB corrispondente per l'interfaccia richiesta. Se, ad esempio, il consumer richiede `IID_IRowsetLocate`, `OnInterfaceRequested` imposta l'interfaccia `DBPROP_IRowsetLocate`. In questo modo viene mantenuto lo stato corretto durante la creazione del set di righe.

Questo metodo viene chiamato quando il consumer chiama `IOpenRowset::OpenRowset` o `ICommand::Execute`.

Se un consumer apre un oggetto e richiede un'interfaccia facoltativa, il provider deve impostare la proprietà associata a tale interfaccia su VARIANT_TRUE. Per consentire l'elaborazione specifica della proprietà, `OnInterfaceRequested` viene chiamato prima della chiamata del metodo `Execute` del provider. Per impostazione predefinita, `OnInterfaceRequested` gestisce le interfacce seguenti:

- `IRowsetLocate`

- `IRowsetChange`

- `IRowsetUpdate`

- `IConnectionPointContainer`

- `IRowsetScroll`

Se si desidera gestire altre interfacce, eseguire l'override di questa funzione nell'origine dati, nella sessione, nel comando o nella classe del set di righe per elaborare le funzioni. Per assicurarsi che le proprietà dell'impostazione impostino anche le proprietà concatenate (vedere [OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)), è necessario eseguire l'override delle normali interfacce di proprietà set/get.

## <a name="onpropertychanged"></a>CUtlProps:: OnPropertyChanged

Chiamato dopo l'impostazione di una proprietà per gestire le proprietà concatenate.

### <a name="syntax"></a>Sintassi

```cpp
virtual HRESULT OnPropertyChanged(ULONG /* iCurSet */,
   DBPROP* pDBProp);
```

#### <a name="parameters"></a>Parametri

*iCurSet*<br/>
Indice nella matrice del set di proprietà. zero se è presente un solo set di proprietà.

*pDBProp*<br/>
ID della proprietà e nuovo valore in una struttura [DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85)) .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Il valore restituito predefinito è S_OK.

### <a name="remarks"></a>Osservazioni

Se si desidera gestire proprietà concatenate, ad esempio segnalibri o aggiornamenti i cui valori dipendono dal valore di un'altra proprietà, è necessario eseguire l'override di questa funzione.

### <a name="example"></a>Esempio

In questa funzione, l'utente ottiene l'ID della proprietà dal parametro `DBPROP*`. A questo punto è possibile confrontare l'ID con una proprietà per concatenare. Quando viene trovata la proprietà, `SetProperties` viene chiamato con la proprietà che ora verrà impostata insieme all'altra proprietà. In questo caso, se si ottiene la proprietà `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`o `DBPROP_ORDEREDBOOKMARKS`, è possibile impostare la proprietà `DBPROP_BOOKMARKS`.

[!code-cpp[NVC_OLEDB_Provider#2](../../data/oledb/codesnippet/cpp/cutlprops-onpropertychanged_1.h)]

## <a name="setpropvalue"></a>CUtlProps:: SetPropValue

Imposta una proprietà in un set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT SetPropValue(const GUID* pguidPropSet,
   DBPROPID dwPropId,
   VARIANT* pvValue);
```

#### <a name="parameters"></a>Parametri

*pguidPropSet*<br/>
in GUID per il propset.

*dwPropId*<br/>
in Indice della proprietà.

*pvValue*<br/>
in Puntatore a un Variant che contiene il nuovo valore della proprietà.

### <a name="return-value"></a>Valore restituito

`Failure` in caso di errore e S_OK in caso di esito positivo.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)