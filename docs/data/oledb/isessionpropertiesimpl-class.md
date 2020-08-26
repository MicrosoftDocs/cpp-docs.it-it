---
title: Classe ISessionPropertiesImpl
ms.date: 11/04/2016
f1_keywords:
- ISessionPropertiesImpl
- ISessionPropertiesImpl::GetProperties
- ISessionPropertiesImpl.GetProperties
- ISessionPropertiesImpl.SetProperties
- ISessionPropertiesImpl::SetProperties
helpviewer_keywords:
- ISessionPropertiesImpl class
- GetProperties method
- SetProperties method
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
ms.openlocfilehash: 57a94ccd8ee3871742e9c8360c56381f85053380
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844834"
---
# <a name="isessionpropertiesimpl-class"></a>Classe ISessionPropertiesImpl

Fornisce un'implementazione dell'interfaccia [ISessionProperties](/previous-versions/windows/desktop/ms713721(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE ISessionPropertiesImpl :
   public ISessionProperties,
   public CUtlProps<PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `ISessionPropertiesImpl` .

*PropClass*<br/>
Classe di proprietà definibile dall'utente che per impostazione predefinita è *T*.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Descrizione |
|-|-|
|[GetProperties](#getproperties)|Restituisce l'elenco di proprietà nel gruppo di proprietà della sessione attualmente impostato per la sessione.|
|[SetProperties](#setproperties)|Imposta le proprietà nel gruppo di proprietà della sessione.|

## <a name="remarks"></a>Osservazioni

Interfaccia obbligatoria sulle sessioni. Questa classe implementa le proprietà della sessione chiamando una funzione statica definita dalla [mappa del set di proprietà](../../data/oledb/begin-propset-map.md). La mappa del set di proprietà deve essere specificata nella classe di sessione.

## <a name="isessionpropertiesimplgetproperties"></a><a name="getproperties"></a> ISessionPropertiesImpl:: GetProperties

Restituisce l'elenco di proprietà del `DBPROPSET_SESSION` gruppo di proprietà attualmente impostate per la sessione.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetProperties)(ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG * pcPropertySets,
   DBPROPSET ** prgPropertySets);
```

#### <a name="parameters"></a>Parametri

Vedere [ISessionProperties:: GetProperties](/previous-versions/windows/desktop/ms723643(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="isessionpropertiesimplsetproperties"></a><a name="setproperties"></a> ISessionPropertiesImpl:: seproprietà

Imposta le proprietà nel `DBPROPSET_SESSION` gruppo di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### <a name="parameters"></a>Parametri

Vedere [ISessionProperties:: seproperties](/previous-versions/windows/desktop/ms714405(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
