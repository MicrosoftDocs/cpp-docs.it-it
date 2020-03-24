---
title: Classe IDBPropertiesImpl
ms.date: 11/04/2016
f1_keywords:
- IDBPropertiesImpl
- ATL.IDBPropertiesImpl
- ATL.IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl
- IDBPropertiesImpl::GetProperties
- IDBPropertiesImpl.GetProperties
- IDBPropertiesImpl::GetPropertyInfo
- IDBPropertiesImpl.GetPropertyInfo
- GetPropertyInfo
- IDBPropertiesImpl.SetProperties
- IDBPropertiesImpl::SetProperties
helpviewer_keywords:
- IDBPropertiesImpl class
- GetProperties method
- GetPropertyInfo method
- SetProperties method
ms.assetid: a7f15a8b-95b2-4316-b944-d5d03f8d74ab
ms.openlocfilehash: f873ec4f4eca434d0eb76df86c0891f1a99c2e2c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210704"
---
# <a name="idbpropertiesimpl-class"></a>Classe IDBPropertiesImpl

Fornisce un'implementazione per l'interfaccia `IDBProperties`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IDBPropertiesImpl
   : public IDBProperties, public CUtlProps<T>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IDBPropertiesImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetProperties](#getproperties)|Restituisce i valori delle proprietà nell'origine dati, le informazioni sull'origine dati e i gruppi di proprietà di inizializzazione attualmente impostati per l'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che sono attualmente impostati nel enumeratore.|
|[GetPropertyInfo](#getpropertyinfo)|Restituisce informazioni su tutte le proprietà supportate dal provider.|
|[SetProperties](#setproperties)|Imposta le proprietà nei gruppi di proprietà dell'origine dati e di inizializzazione, per gli oggetti origine dati o per il gruppo di proprietà di inizializzazione, per gli enumeratori.|

## <a name="remarks"></a>Osservazioni

[IDBProperties](/previous-versions/windows/desktop/ms719607(v=vs.85)) è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se un enumeratore espone [IDBInitialize](/previous-versions/windows/desktop/ms713706(v=vs.85)), deve esporre `IDBProperties`. `IDBPropertiesImpl` implementa `IDBProperties` utilizzando una funzione statica definita da [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).

## <a name="idbpropertiesimplgetproperties"></a><a name="getproperties"></a>IDBPropertiesImpl:: GetProperties

Restituisce i valori delle proprietà nell'origine dati, le informazioni sull'origine dati e i gruppi di proprietà di inizializzazione attualmente impostati per l'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che sono attualmente impostati nel enumeratore.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetProperties)(ULONG cPropertySets,
   const DBPROPIDSET rgPropertySets[],
   ULONG * pcProperties,
   DBPROPSET ** prgProperties);
```

#### <a name="parameters"></a>Parametri

Vedere [IDBProperties:: GetProperties](/previous-versions/windows/desktop/ms714344(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai parametri di *riferimento di OLE DB Programmer* con nomi diversi, descritti in `IDBProperties::GetProperties`:

|Parametri del modello di OLE DB|Parametri *di riferimento di OLE DB Programmer*|
|--------------------------------|------------------------------------------------|
|*cPropertySets*|*cPropertyIDSets*|
|*rgPropertySets*|*rgPropertyIDSets*|
|*pcProperties*|*pcPropertySets*|
|*prgProperties*|*prgPropertySets*|

### <a name="remarks"></a>Osservazioni

Se il provider viene inizializzato, questo metodo restituisce i valori delle proprietà nei gruppi di proprietà DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO DBPROPSET_DBINIT attualmente impostati nell'oggetto origine dati. Se il provider non è inizializzato, restituisce DBPROPSET_DBINIT solo proprietà del gruppo.

## <a name="idbpropertiesimplgetpropertyinfo"></a><a name="getpropertyinfo"></a>IDBPropertiesImpl:: GetPropertyInfo

Restituisce le informazioni sulle proprietà supportate dall'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetPropertyInfo)(ULONG cPropertySets,
   const DBPROPIDSET rgPropertySets[],
   ULONG * pcPropertyInfoSets,
   DBPROPINFOSET ** prgPropertyInfoSets,
   OLECHAR ** ppDescBuffer);
```

#### <a name="parameters"></a>Parametri

Vedere [IDBProperties:: GetPropertyInfo](/previous-versions/windows/desktop/ms718175(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai parametri di *riferimento di OLE DB Programmer* con nomi diversi, descritti in `IDBProperties::GetPropertyInfo`:

|Parametri del modello di OLE DB|Parametri *di riferimento di OLE DB Programmer*|
|--------------------------------|------------------------------------------------|
|*cPropertySets*|*cPropertyIDSets*|
|*rgPropertySets*|*rgPropertyIDSets*|

### <a name="remarks"></a>Osservazioni

USA [IDBInitializeImpl:: m_pCUtlPropInfo](../../data/oledb/idbinitializeimpl-m-pcutlpropinfo.md) per implementare questa funzionalità.

## <a name="idbpropertiesimplsetproperties"></a><a name="setproperties"></a>IDBPropertiesImpl:: seproprietà

Imposta le proprietà nei gruppi di proprietà dell'origine dati e di inizializzazione, per gli oggetti origine dati o per il gruppo di proprietà di inizializzazione, per gli enumeratori.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IDBProperties:: seproperties](/previous-versions/windows/desktop/ms723049(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Se il provider viene inizializzato, questo metodo imposta i valori delle proprietà nei gruppi di proprietà DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO DBPROPSET_DBINIT per l'oggetto origine dati. Se il provider non è inizializzato, imposta DBPROPSET_DBINIT solo proprietà del gruppo.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
