---
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
ms.openlocfilehash: e2fced2ed0e32af15e75c7290733fdc2b4b34dc9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447458"
---
# <a name="cdbpropidset-class"></a>Classe CDBPropIDSet

Eredita dalla struttura `DBPROPIDSET` e aggiunge un costruttore che Inizializza i campi chiave e il metodo di accesso [AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md) .

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropIDSet : public tagDBPROPIDSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddPropertyID](#addpropertyid)|Aggiunge una proprietà al set di ID proprietà.|
|[CDBPropIDSet](#cdbpropidset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il GUID del set di ID proprietà.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#op_equal)|Assegna il contenuto di un ID proprietà impostato su un altro.|

## <a name="remarks"></a>Osservazioni

I consumer OLE DB utilizzano strutture `DBPROPIDSET` per passare una matrice di ID di proprietà per cui il consumer desidera ottenere informazioni sulle proprietà. Le proprietà identificate in una singola struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) appartengono a un set di proprietà.

## <a name="addpropertyid"></a>CDBPropIDSet:: AddPropertyID

Aggiunge un ID proprietà al set di ID proprietà.

### <a name="syntax"></a>Sintassi

```cpp
bool AddPropertyID(DBPROPID propid) throw();
```

#### <a name="parameters"></a>Parametri

*propid*<br/>
[in] ID proprietà da aggiungere al set di ID proprietà.

## <a name="cdbpropidset"></a>CDBPropIDSet:: CDBPropIDSet

Costruttore. Inizializza i campi di `rgProperties`, `cProperties`e (facoltativamente) `guidPropertySet` della struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) .

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet(const GUID& guid);

CDBPropIDSet(const CDBPropIDSet& propidset);

CDBPropIDSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per inizializzare il campo `guidPropertySet`.

*propidset*<br/>
[in] Altro oggetto `CDBPropIDSet` per la costruzione di copia.

## <a name="setguid"></a>CDBPropIDSet:: Seguid

Imposta il campo GUID nella struttura `DBPROPIDSET`.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per impostare il campo `guidPropertySet` della struttura [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) .

### <a name="remarks"></a>Osservazioni

Questo campo può essere impostato anche dal [Costruttore](../../data/oledb/cdbpropidset-cdbpropidset.md) . Chiamare questa funzione se si usa il costruttore predefinito per questa classe.

## <a name="op_equal"></a>CDBPropIDSet:: operator =

Assegna il contenuto di un ID proprietà impostato su un altro set di proprietà ID.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet& operator =(CDBPropIDSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)