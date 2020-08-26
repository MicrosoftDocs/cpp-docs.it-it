---
title: Classe ICommandPropertiesImpl
ms.date: 11/04/2016
f1_keywords:
- ICommandPropertiesImpl
- ATL.ICommandPropertiesImpl
- ATL::ICommandPropertiesImpl
- ICommandPropertiesImpl::GetProperties
- ICommandPropertiesImpl.GetProperties
- ICommandPropertiesImpl.SetProperties
- ICommandPropertiesImpl::SetProperties
helpviewer_keywords:
- ICommandPropertiesImpl class
- GetProperties method
- SetProperties method
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
ms.openlocfilehash: f71ca7f5fb675916c9db7e5720e6c148f2131351
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845575"
---
# <a name="icommandpropertiesimpl-class"></a>Classe ICommandPropertiesImpl

Fornisce un'implementazione dell'interfaccia [ICommandProperties](/previous-versions/windows/desktop/ms723044(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE ICommandPropertiesImpl
   : public ICommandProperties, public CUtlProps<PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da

*PropClass*<br/>
Classe Properties.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Descrizione |
|-|-|
|[GetProperties](#getproperties)|Restituisce l'elenco di proprietà nel gruppo di proprietà del set di righe attualmente richiesto per il set di righe.|
|[SetProperties](#setproperties)|Imposta le proprietà nel gruppo di proprietà del set di righe.|

## <a name="remarks"></a>Osservazioni

Questa operazione è obbligatoria nei comandi. L'implementazione viene fornita da una funzione statica definita dalla [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) macro.

## <a name="icommandpropertiesimplgetproperties"></a><a name="getproperties"></a> ICommandPropertiesImpl:: GetProperties

Restituisce tutti i set di proprietà richiesti utilizzando la mappa delle proprietà del comando.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetProperties)(const ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG * pcPropertySets,
   DBPROPSET ** prgPropertySets);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandProperties:: GetProperties](/previous-versions/windows/desktop/ms723119(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).

## <a name="icommandpropertiesimplsetproperties"></a><a name="setproperties"></a> ICommandPropertiesImpl:: seproprietà

Imposta le proprietà per l'oggetto Command.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandProperties:: seproperties](/previous-versions/windows/desktop/ms711497(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
