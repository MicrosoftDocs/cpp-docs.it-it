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
- CDBPropIDSet
- CDBPropIDSet.CDBPropIDSet
- CDBPropIDSet::CDBPropIDSet
- ATL.CDBPropIDSet.CDBPropIDSet
- CDBPropIDSet.operator=
- ATL.CDBPropIDSet.operator=
- ATL::CDBPropIDSet::operator=
- CDBPropIDSet::operator=
- CDBPropIDSet.SetGUID
- ATL::CDBPropIDSet::SetGUID
- SetGUID
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
ms.openlocfilehash: 9e878af3acf4c4d3a6ca785454c4bb072f17cf09
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62209321"
---
# <a name="cdbpropidset-class"></a>Classe CDBPropIDSet

Eredita dal `DBPROPIDSET` strutturare e aggiunge un costruttore che inizializza i campi chiave, nonché [AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md) accedere al metodo.

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropIDSet : public tagDBPROPIDSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddPropertyID](#addpropertyid)|Aggiunge una proprietà per il set di ID proprietà.|
|[CDBPropIDSet](#cdbpropidset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il GUID dell'ID proprietà set.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator =](#op_equal)|Assegna il contenuto di un ID della proprietà è impostata su un altro.|

## <a name="remarks"></a>Note

Usare i consumer OLE DB `DBPROPIDSET` strutture per passare una matrice di ID proprietà per il quale l'utente vuole ottenere informazioni sulle proprietà. Le proprietà identificate in un'unica [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) struttura appartengono al set di una proprietà.

## <a name="addpropertyid"></a> Cdbpropidset:: Addpropertyid

Aggiunge un ID proprietà al set di ID proprietà.

### <a name="syntax"></a>Sintassi

```cpp
bool AddPropertyID(DBPROPID propid) throw();
```

#### <a name="parameters"></a>Parametri

*propid*<br/>
[in] ID proprietà da aggiungere al set di ID proprietà.

## <a name="cdbpropidset"></a> Cdbpropidset:: Cdbpropidset

Costruttore. Inizializza la `rgProperties`, `cProperties`e (facoltativamente) `guidPropertySet` campi del [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) struttura.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet(const GUID& guid);

CDBPropIDSet(const CDBPropIDSet& propidset);

CDBPropIDSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
[in] GUID utilizzato per inizializzare il `guidPropertySet` campo.

*propidset*<br/>
[in] Altro oggetto `CDBPropIDSet` per la costruzione di copia.

## <a name="setguid"></a> Cdbpropidset:: SetGuid

Imposta il campo GUID nel `DBPROPIDSET` struttura.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
[in] GUID utilizzato per impostare il `guidPropertySet` campo il [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) struttura.

### <a name="remarks"></a>Note

Questo campo può essere impostato il [costruttore](../../data/oledb/cdbpropidset-cdbpropidset.md) anche. Chiamare questa funzione se si usa il costruttore predefinito per questa classe.

## <a name="op_equal"></a> Cdbpropidset:: operator =

Assegna il contenuto di un ID della proprietà impostata su un altro set di proprietà ID.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropIDSet& operator =(CDBPropIDSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)