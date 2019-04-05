---
title: Classe ICommandPropertiesImpl
ms.date: 11/04/2016
f1_keywords:
- ICommandPropertiesImpl
- ATL.ICommandPropertiesImpl
- ATL::ICommandPropertiesImpl
- ICommandPropertiesImpl::GetProperties
- ICommandPropertiesImpl.GetProperties
- GetProperties
- ICommandPropertiesImpl.SetProperties
- ICommandPropertiesImpl::SetProperties
- SetProperties
helpviewer_keywords:
- ICommandPropertiesImpl class
- GetProperties method
- SetProperties method
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
ms.openlocfilehash: 1250f1c5c5094a0ca8348f325260e6079afe2baa
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59034102"
---
# <a name="icommandpropertiesimpl-class"></a>Classe ICommandPropertiesImpl

Fornisce un'implementazione del [ICommandProperties](/previous-versions/windows/desktop/ms723044(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE ICommandPropertiesImpl
   : public ICommandProperties, public CUtlProps<PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe, derivata da

*PropClass*<br/>
Classe di proprietà.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetProperties](#getproperties)|Restituisce l'elenco delle proprietà nel gruppo di proprietà set di righe che sono attualmente richiesti per il set di righe.|
|[SetProperties](#setproperties)|Imposta le proprietà nel gruppo di proprietà set di righe.|

## <a name="remarks"></a>Note

Questo campo è obbligatorio in comandi. L'implementazione è fornita da una funzione statica definita per il [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) macro.

## <a name="getproperties"></a> Icommandpropertiesimpl:: GetProperties

Restituisce tutti i set di proprietà richiesto tramite il mapping di proprietà del comando.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetProperties)(const ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG * pcPropertySets,
   DBPROPSET ** prgPropertySets);
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandProperties](/previous-versions/windows/desktop/ms723119(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).

## <a name="setproperties"></a> ICommandPropertiesImpl::SetProperties

Imposta le proprietà per l'oggetto comando.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandProperties:: SetProperties](/previous-versions/windows/desktop/ms711497(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)