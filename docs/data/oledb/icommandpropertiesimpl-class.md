---
description: 'Altre informazioni su: Classe ICommandPropertiesImpl'
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
ms.openlocfilehash: bf6a6f9a3ddd43a61671a85a791d63958f63c3e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317565"
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

| Nome | Description |
|-|-|
|[GetProperties](#getproperties)|Restituisce l'elenco di proprietà nel gruppo di proprietà del set di righe attualmente richiesto per il set di righe.|
|[SetProperties](#setproperties)|Imposta le proprietà nel gruppo di proprietà del set di righe.|

## <a name="remarks"></a>Commenti

Questa operazione è obbligatoria nei comandi. L'implementazione viene fornita da una funzione statica definita dalla [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map) macro.

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

### <a name="remarks"></a>Commenti

Vedere [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map).

## <a name="icommandpropertiesimplsetproperties"></a><a name="setproperties"></a> ICommandPropertiesImpl:: seproprietà

Imposta le proprietà per l'oggetto Command.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandProperties:: seproperties](/previous-versions/windows/desktop/ms711497(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
