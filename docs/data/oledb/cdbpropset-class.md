---
title: Classe CDBPropSet
ms.date: 11/04/2016
f1_keywords:
- CDBPropSet
- ATL.CDBPropSet
- ATL::CDBPropSet
- CDBPropSet::AddProperty
- CDBPropSet.AddProperty
- AddProperty
- ATL::CDBPropSet::AddProperty
- ATL.CDBPropSet.AddProperty
- CDBPropSet.CDBPropSet
- CDBPropSet::CDBPropSet
- ATL::CDBPropSet::CDBPropSet
- ATL.CDBPropSet.CDBPropSet
- CDBPropSet.operator=
- ATL::CDBPropSet::operator=
- ATL.CDBPropSet.operator=
- CDBPropSet::operator=
- ATL.CDBPropSet.SetGUID
- CDBPropSet.SetGUID
- ATL::CDBPropSet::SetGUID
- CDBPropSet::SetGUID
helpviewer_keywords:
- CDBPropSet class
- AddProperty method
- CDBPropSet class, constructor
- operator =, property sets
- = operator, with OLE DB templates
- operator=, property sets
- SetGUID method
- AddProperty method
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
ms.openlocfilehash: 48aa2e3e26bed7c9306ca3005231e464d7b7555b
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88838257"
---
# <a name="cdbpropset-class"></a>Classe CDBPropSet

Eredita dalla `DBPROPSET` struttura e aggiunge un costruttore che Inizializza i campi chiave e il metodo di `AddProperty` accesso.

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropSet : public tagDBPROPSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[AddProperty](#addproperty)|Aggiunge una proprietà al set di proprietà.|
|[CDBPropSet](#cdbpropset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il `guidPropertySet` campo della `DBPROPSET` struttura.|

### <a name="operators"></a>Operatori

| Nome | Descrizione |
|-|-|
|[operatore =](#op_equal)|Assegna il contenuto di una proprietà impostata a un'altra.|

## <a name="remarks"></a>Osservazioni

OLE DB provider e consumer utilizzano `DBPROPSET` strutture per passare matrici di `DBPROP` strutture. Ogni `DBPROP` struttura rappresenta una singola proprietà che può essere impostata.

## <a name="cdbpropsetaddproperty"></a><a name="addproperty"></a> CDBPropSet:: AddProperty

Aggiunge una proprietà al set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
bool AddProperty(DWORD dwPropertyID,
   constVARIANT& var,
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,
   LPCSTR szValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,
   LPCWSTR szValue,DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,
   bool bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,
   BYTE bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,
   short nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,
   long nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,
   float fltValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,
   double dblValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,
   CY cyValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();
```

#### <a name="parameters"></a>Parametri

*dwPropertyID*<br/>
in ID della proprietà da aggiungere. Utilizzato per inizializzare l'oggetto `dwPropertyID` della `DBPROP` struttura aggiunta al set di proprietà.

*var*<br/>
in Variant utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*szValue*<br/>
in Stringa utilizzata per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*bValue*<br/>
in `BYTE` Valore booleano o utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*nValue*<br/>
in Valore intero utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*fltValue*<br/>
in Valore a virgola mobile utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*dblValue*<br/>
in Valore a virgola mobile e precisione doppia utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

*cyValue*<br/>
in Valore di valuta CY utilizzato per inizializzare il valore della proprietà per la `DBPROP` struttura aggiunta al set di proprietà.

### <a name="return-value"></a>Valore restituito

**`true`** Se la proprietà è stata aggiunta correttamente. In caso contrario, **`false`** .

## <a name="cdbpropsetcdbpropset"></a><a name="cdbpropset"></a> CDBPropSet:: CDBPropSet

Costruttore. Inizializza i `rgProperties` `cProperties` campi, e `guidPropertySet` della struttura [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) .

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet(const GUID& guid);

CDBPropSet(const CDBPropSet& propset);

CDBPropSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per inizializzare il `guidPropertySet` campo.

*propset*<br/>
[in] Altro oggetto `CDBPropSet` per la costruzione di copia.

## <a name="cdbpropsetsetguid"></a><a name="setguid"></a> CDBPropSet:: Seguid

Imposta il `guidPropertySet` campo nella `DBPROPSET` struttura.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per impostare il `guidPropertySet` campo della struttura [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) .

### <a name="remarks"></a>Osservazioni

Questo campo può essere impostato anche dal [Costruttore](../../data/oledb/cdbpropset-cdbpropset.md) .

## <a name="cdbpropsetoperator-"></a><a name="op_equal"></a> CDBPropSet:: operator =

Assegna il contenuto di un set di proprietà a un altro set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet& operator =(CDBPropSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
[Struttura DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) 
 [Struttura DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85))
