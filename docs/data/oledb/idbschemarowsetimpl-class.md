---
title: IDBSchemaRowsetImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- IDBSchemaRowsetImpl
- CheckRestrictions
- IDBSchemaRowsetImpl::CheckRestrictions
- IDBSchemaRowsetImpl.CheckRestrictions
- IDBSchemaRowsetImpl::CreateSchemaRowset
- ATL::IDBSchemaRowsetImpl::CreateSchemaRowset
- CreateSchemaRowset
- IDBSchemaRowsetImpl.CreateSchemaRowset
- ATL.IDBSchemaRowsetImpl.CreateSchemaRowset
- IDBSchemaRowsetImpl::SetRestrictions
- SetRestrictions
- IDBSchemaRowsetImpl.SetRestrictions
- ATL::IDBSchemaRowsetImpl::GetRowset
- ATL.IDBSchemaRowsetImpl.GetRowset
- IDBSchemaRowsetImpl<SessionClass>::GetRowset
- IDBSchemaRowsetImpl.GetRowset
- IDBSchemaRowsetImpl::GetRowset
- ATL::IDBSchemaRowsetImpl<SessionClass>::GetRowset
- GetRowset
- ATL::IDBSchemaRowsetImpl::GetSchemas
- GetSchemas
- IDBSchemaRowsetImpl<SessionClass>::GetSchemas
- ATL.IDBSchemaRowsetImpl.GetSchemas
- ATL::IDBSchemaRowsetImpl<SessionClass>::GetSchemas
- IDBSchemaRowsetImpl.GetSchemas
- IDBSchemaRowsetImpl::GetSchemas
helpviewer_keywords:
- IDBSchemaRowsetImpl class
- CheckRestrictions method
- CreateSchemaRowset method
- SetRestrictions method
- GetRowset method
- GetSchemas method
ms.assetid: bd7bf0d7-a1c6-4afa-88e3-cfdbdf560703
ms.openlocfilehash: f6af0f61ca425a2a1fba98b4041a92163e2f1d4e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210626"
---
# <a name="idbschemarowsetimpl-class"></a>IDBSchemaRowsetImpl (classe)

Fornisce l'implementazione per i set di righe dello schema.

## <a name="syntax"></a>Sintassi

```cpp
template <class SessionClass>
class ATL_NO_VTABLE IDBSchemaRowsetImpl : public IDBSchemaRowset
```

### <a name="parameters"></a>Parametri

*SessionClass*<br/>
La classe da cui `IDBSchemaRowsetImpl` viene ereditata. In genere, questa classe corrisponde alla classe sessione dell'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CheckRestrictions](#checkrestrictions)|Controlla la validità delle restrizioni rispetto a un set di righe dello schema.|
|[CreateSchemaRowset](#createschemarowset)|Implementa una funzione di creazione di oggetti COM per l'oggetto specificato dal parametro di modello.|
|[SetRestrictions](#setrestrictions)|Specifica le restrizioni supportate su uno specifico set di righe dello schema.|

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetRowset](#getrowset)|Restituisce un set di righe dello schema.|
|[GetSchemas](#getschemas)|Restituisce un elenco di set di righe dello schema accessibili da [IDBSchemaRowsetImpl::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md).|

## <a name="remarks"></a>Osservazioni

Questa classe implementa l'interfaccia [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) e la funzione di creazione di modelli [CreateSchemaRowset](../../data/oledb/idbschemarowsetimpl-createschemarowset.md).

OLE DB usa set di righe dello schema per restituire dati relativi ai dati in un provider. Questi dati vengono spesso definiti "metadati". Per impostazione predefinita, un provider deve sempre supportare `DBSCHEMA_TABLES`, `DBSCHEMA_COLUMNS`e `DBSCHEMA_PROVIDER_TYPES`, come descritto in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*. I set di righe vengono definiti in una mappa di schema. Per informazioni sulle voci della mappa di schema, vedere [SCHEMA_ENTRY](../../data/oledb/schema-entry.md).

La creazione guidata provider OLEDB, all'interno della creazione guidata oggetto ATL, genera automaticamente il codice per i set di righe dello schema nel progetto. Per impostazione predefinita, la procedura guidata supporta i set di righe dello schema obbligatori indicati in precedenza. Quando si crea un consumer utilizzando la creazione guidata oggetto ATL, la procedura guidata utilizza i set di righe dello schema per associare i dati corretti a un provider. Se non si implementano i set di righe dello schema per fornire i metadati corretti, la procedura guidata non li assocerà.

Per informazioni su come supportare i set di righe dello schema nel provider, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).

Per altre informazioni sui set di dati dello schema, vedere [Set di righe dello schema](/previous-versions/windows/desktop/ms712921(v=vs.85)) in *OLE DB Programmer's Reference*(Guida di riferimento per programmatori OLE DB).

## <a name="idbschemarowsetimplcheckrestrictions"></a><a name="checkrestrictions"></a>IDBSchemaRowsetImpl:: CheckRestrictions

Controlla la validità delle restrizioni rispetto a un set di righe dello schema.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CheckRestrictions(REFGUID rguidSchema,
   ULONG cRestrictions,  const VARIANT rgRestrictions[]);
```

#### <a name="parameters"></a>Parametri

*rguidSchema*<br/>
[in] Un riferimento al GUID del set di righe dello schema richiesto (ad esempio `DBSCHEMA_TABLES`).

*cRestrictions*<br/>
[in] Il numero di restrizioni che il consumer ha passato per il set di righe dello schema.

*rgRestrictions*<br/>
[in] Una matrice di lunghezza *cRestrictions* di valori di restrizione da impostare. Per ulteriori informazioni, vedere la descrizione del parametro *rgRestrictions* in [serestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).

### <a name="remarks"></a>Osservazioni

Usa `CheckRestrictions` per controlla la validità delle restrizioni per un set di righe dello schema. Controlla le restrizioni per i set di righe dello schema `DBSCHEMA_TABLES`, `DBSCHEMA_COLUMNS`e `DBSCHEMA_PROVIDER_TYPES`. Chiamarlo per determinare se la chiamata di un consumer a `IDBSchemaRowset::GetRowset` è corretta. Se si desidera supportare set di righe dello schema diversi da quelli elencati sopra, creare una funzione personalizzata per eseguire questa operazione.

`CheckRestrictions` determina se il consumer sta chiamando [GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) con la restrizione corretta e il tipo di restrizione corretto (ad esempio, un VT_BSTR per una stringa) supportato dal provider. Determina inoltre se è supportato il numero corretto di restrizioni. Per impostazione predefinita `CheckRestrictions` chiederà al provider, tramite la chiamata di [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) , le restrizioni che supporta su un determinato set di righe. Quindi confronterà le restrizioni del consumer con quelle supportate dal provider dando un esito positivo o negativo.

Per ulteriori informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

## <a name="idbschemarowsetimplcreateschemarowset"></a><a name="createschemarowset"></a>IDBSchemaRowsetImpl:: CreateSchemaRowset

Implementa una funzione di creazione di oggetti COM per l'oggetto specificato dal parametro di modello.

### <a name="syntax"></a>Sintassi

```cpp
template template <class SchemaRowsetClass>
HRESULT CreateSchemaRowset(IUnknown *pUnkOuter,
   ULONG cRestrictions,
   const VARIANT rgRestrictions[],
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown** ppRowset,
   SchemaRowsetClass*& pSchemaRowset);
```

#### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
in [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) esterno durante l'aggregazione, in caso contrario null.

*cRestrictions*<br/>
[in] Il conteggio delle limitazioni applicate al set di righe dello schema.

*rgRestrictions*<br/>
[in] Una matrice di `cRestrictions`**VARIANT**da applicare al set di righe.

*riid*<br/>
in Interfaccia per [QueryInterface](../../atl/queryinterface.md) per sull'`IUnknown`di output.

*cPropertySets*<br/>
[in] Il numero di insiemi di proprietà da impostare.

*rgPropertySets*<br/>
[in] Una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che specificano le proprietà da impostare.

*ppRowset*<br/>
out `IUnknown` in uscita richiesto da *riid*. Questa `IUnknown` è un'interfaccia sull'oggetto set di righe dello schema.

*pSchemaRowset*<br/>
[out] Un puntatore a un'istanza della classe del set di righe dello schema. Questo parametro in genere non viene usato ma può essere aggiunto se è necessario eseguire altro lavoro sul set di righe dello schema passandolo a un oggetto COM. Il ciclo di vita di *pSchemaRowset* è associato a *ppRowset*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione implementa un creatore generico per tutti i tipi di set di righe dello schema. Di solito l'utente non chiama questa funzione. Viene chiamata dall'implementazione della mappa dello schema.

## <a name="idbschemarowsetimplsetrestrictions"></a><a name="setrestrictions"></a>IDBSchemaRowsetImpl:: sele restrizioni

Specifica le restrizioni supportate su uno specifico set di righe dello schema.

### <a name="syntax"></a>Sintassi

```cpp
void SetRestrictions(ULONG cRestrictions,
   GUID* /* rguidSchema */,
   ULONG* rgRestrictions);
```

#### <a name="parameters"></a>Parametri

*cRestrictions*<br/>
in Il numero di restrizioni nella matrice *rgRestrictions* e il numero di GUID nella matrice *rguidSchema* .

*rguidSchema*<br/>
[in] Matrice di GUID del set di righe dello schema per il quale recuperare le restrizioni. Ogni elemento della matrice contiene il GUID di un set di righe di uno schema (ad esempio, `DBSCHEMA_TABLES`).

*rgRestrictions*<br/>
[in] Una matrice di lunghezza *cRestrictions* di valori di restrizione da impostare. Ogni elemento corrisponde alle restrizioni nel set di righe dello schema identificato dal GUID. Se il provider non supporta il set di righe dello schema, l'elemento è impostato su zero. In caso contrario, il valore **ULONG** contiene una maschera di bit che rappresenta le restrizioni supportate in tale set di righe dello schema. Per ulteriori informazioni sulle restrizioni che corrispondono a un particolare set di righe dello schema, consultare la tabella dei GUID del set di righe dello schema in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella Guida di *riferimento per programmatori OLE DB* nel Windows SDK.

### <a name="remarks"></a>Osservazioni

L'oggetto `IDBSchemaRowset` chiama `SetRestrictions` per determinare le restrizioni supportate su un particolare set di righe dello schema (viene chiamato da [GetSchemas](../../data/oledb/idbschemarowsetimpl-getschemas.md) tramite un puntatore di cui è stato eseguito il cast). Le restrizioni consentono agli utenti di recuperare solo le righe corrispondenti (ad esempio, trovare tutte le colonne nella tabella "MyTable"). Sono facoltative e, nel caso in cui nessuna sia supportata (impostazione predefinita), vengono restituiti sempre tutti i dati.

L'implementazione predefinita di questo metodo imposta gli elementi della matrice *rgRestrictions* su 0. Per impostare restrizioni diverse da quelle predefinite nella classe di sessione eseguire l'override di tali impostazioni.

Per informazioni su come implementare il supporto per i set di righe dello schema, vedere [Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md).

Per un esempio di provider che supporta i set di righe dello schema, vedere l'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) .

Per ulteriori informazioni sui set di righe dello schema, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

## <a name="idbschemarowsetimplgetrowset"></a><a name="getrowset"></a>IDBSchemaRowsetImpl:: GetRowset

Restituisce un set di righe dello schema.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetRowset)(IUnknown *pUnkOuter,
   REFGUID rguidSchema,
   ULONG cRestrictions,
   const VARIANT rgRestrictions[],
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown **ppRowset);
```

#### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
in `IUnknown` esterno durante l'aggregazione. in caso contrario, NULL.

*rguidSchema*<br/>
[in] Un riferimento al GUID del set di righe dello schema richiesto (ad esempio `DBSCHEMA_TABLES`).

*cRestrictions*<br/>
[in] Conteggio delle limitazioni da applicare al set di righe.

*rgRestrictions*<br/>
[in] Matrice di `cRestrictions`**VARIANT**che rappresenta le restrizioni.

*riid*<br/>
[in] IID per richiedere il set di righe dello schema appena creato.

*cPropertySets*<br/>
[in] Il numero di insiemi di proprietà da impostare.

*rgPropertySets*<br/>
[in/out] Matrice delle strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) per impostare il set di righe dello schema appena creato.

*ppRowset*<br/>
[out] Puntatore all'interfaccia richiesta nel set di righe dello schema appena creato.

### <a name="remarks"></a>Osservazioni

Il metodo richiede che l'utente disponga di una mappa di schema nella classe di sessione. Utilizzando le informazioni sulla mappa dello schema, `GetRowset` crea un oggetto set di righe specificato se il parametro *rguidSchema* è uguale a uno dei GUID delle voci della mappa. Per una descrizione della voce di mapping, vedere [SCHEMA_ENTRY](../../data/oledb/schema-entry.md) .

Vedere [IDBSchemaRowset:: GetRowset](/previous-versions/windows/desktop/ms722634(v=vs.85)) nel Windows SDK.

## <a name="idbschemarowsetimplgetschemas"></a><a name="getschemas"></a>IDBSchemaRowsetImpl:: GetSchemas

Restituisce un elenco di set di righe dello schema accessibili da [IDBSchemaRowsetImpl::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetSchema s )(ULONG * pcSchemas,
   GUID ** prgSchemas,
   ULONG** prgRest);
```

#### <a name="parameters"></a>Parametri

*pcSchemas*<br/>
[out] Un puntatore a un **ULONG** compilato con il numero di schemi.

*prgSchemas*<br/>
[out] Un puntatore a una matrice di GUID compilata con un puntatore a una matrice di GUID del set di righe dello schema.

*prgRest*<br/>
[out] Un puntatore a una matrice di **ULONG**da compilare con la matrice di restrizioni.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce una matrice di tutti i rowset dello schema supportati dal provider. Vedere [IDBSchemaRowset:: GetSchemas](/previous-versions/windows/desktop/ms719605(v=vs.85)) nella Windows SDK.

L'implementazione di questa funzione richiede che l'utente di disporre di una mappa di schema nella classe di sessione. Usando le informazioni della mappa di schema, la funzione risponde con la matrice dei GUID per gli schemi nella mappa. Questa operazione rappresenta gli schemi supportati dal provider.

## <a name="see-also"></a>Vedere anche

[Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)<br/>
[Supporto dei set di righe dello schema](../../data/oledb/supporting-schema-rowsets.md)<br/>
[SCHEMA_ENTRY](../../data/oledb/schema-entry.md)<br/>
[UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider)
