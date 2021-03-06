---
description: 'Altre informazioni su: Classe CDBPropIDSet'
title: Classe CDBPropIDSet
ms.date: 11/04/2016
f1_keywords:
- CDBPropIDSet
- ATL.CDBPropIDSet
- ATL::CDBPropIDSet
- CDBPropIDSet.AddPropertyID
- CDBPropIDSet::AddPropertyID
- AddPropertyID
- ATL.CDBPropIDSet.AddPropertyID
- ATL::CDBPropIDSet::AddPropertyID
- ATL::CDBPropIDSet::CDBPropIDSet
- CDBPropIDSet.CDBPropIDSet
- CDBPropIDSet::CDBPropIDSet
- ATL.CDBPropIDSet.CDBPropIDSet
- CDBPropIDSet.operator=
- ATL.CDBPropIDSet.operator=
- ATL::CDBPropIDSet::operator=
- CDBPropIDSet::operator=
- CDBPropIDSet.SetGUID
- ATL::CDBPropIDSet::SetGUID
- ATL.CDBPropIDSet.SetGUID
- CDBPropIDSet::SetGUID
helpviewer_keywords:
- CDBPropIDSet class
- AddPropertyID method
- CDBPropIDSet class, constructor
- operator =, property sets
- = operator, with OLE DB templates
- operator=, property sets
- SetGUID method
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
ms.openlocfilehash: 6f0c3ea19daeef2b262f6ac1ad76599160baf266
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170828"
---
# <a name="cdbpropidset-class"></a>Classe CDBPropIDSet

Eredita dalla `DBPROPIDSET` struttura e aggiunge un costruttore che Inizializza i campi chiave e il metodo di accesso [AddPropertyID](#addpropertyid) .

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropIDSet : public tagDBPROPIDSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[AddPropertyID](#addpropertyid)|Aggiunge una proprietà al set di ID proprietà.|
|[CDBPropIDSet](#cdbpropidset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il GUID del set di ID proprietà.|

### <a name="operators"></a>Operatori

| Nome | Description |
|-|-|
|[operatore =](#op_equal)|Assegna il contenuto di un ID proprietà impostato su un altro.|

## <a name="remarks"></a>Commenti

I consumer OLE DB utilizzano `DBPROPIDSET` le strutture per passare una matrice di ID di proprietà per cui il consumer desidera ottenere informazioni sulle proprietà. Le proprietà identificate in una singola struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) appartengono a un set di proprietà.

## <a name="cdbpropidsetaddpropertyid"></a><a name="addpropertyid"></a> CDBPropIDSet:: AddPropertyID

Aggiunge un ID proprietà al set di ID proprietà.

### <a name="syntax"></a>Sintassi

```cpp
bool AddPropertyID(DBPROPID propid) throw();
```

#### <a name="parameters"></a>Parametri

*propid*<br/>
[in] ID proprietà da aggiungere al set di ID proprietà.

## <a name="cdbpropidsetcdbpropidset"></a><a name="cdbpropidset"></a> CDBPropIDSet:: CDBPropIDSet

Costruttore. Inizializza i `rgProperties` `cProperties` campi, e (facoltativamente) `guidPropertySet` della struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) .

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet(const GUID& guid);

CDBPropIDSet(const CDBPropIDSet& propidset);

CDBPropIDSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per inizializzare il `guidPropertySet` campo.

*propidset*<br/>
[in] Altro oggetto `CDBPropIDSet` per la costruzione di copia.

## <a name="cdbpropidsetsetguid"></a><a name="setguid"></a> CDBPropIDSet:: Seguid

Imposta il campo GUID nella `DBPROPIDSET` struttura.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per impostare il `guidPropertySet` campo della struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) .

### <a name="remarks"></a>Commenti

Questo campo può essere impostato anche dal [Costruttore](#cdbpropidset) . Chiamare questa funzione se si usa il costruttore predefinito per questa classe.

## <a name="cdbpropidsetoperator-"></a><a name="op_equal"></a> CDBPropIDSet:: operator =

Assegna il contenuto di un ID proprietà impostato su un altro set di proprietà ID.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet& operator =(CDBPropIDSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
