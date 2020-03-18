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
ms.openlocfilehash: 08cab967fbfbd4b3207e96a4fdbd2d2dbc6da793
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447448"
---
# <a name="cdbpropset-class"></a>Classe CDBPropSet

Eredita dalla struttura `DBPROPSET` e aggiunge un costruttore che Inizializza i campi chiave e il metodo di accesso `AddProperty`.

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropSet : public tagDBPROPSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddProperty](#addproperty)|Aggiunge una proprietà al set di proprietà.|
|[CDBPropSet](#cdbpropset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il campo `guidPropertySet` della struttura `DBPROPSET`.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#op_equal)|Assegna il contenuto di una proprietà impostata a un'altra.|

## <a name="remarks"></a>Osservazioni

OLE DB provider e consumer utilizzano strutture `DBPROPSET` per passare matrici di strutture di `DBPROP`. Ogni struttura di `DBPROP` rappresenta una singola proprietà che può essere impostata.

## <a name="addproperty"></a>CDBPropSet:: AddProperty

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
in ID della proprietà da aggiungere. Utilizzato per inizializzare la `dwPropertyID` della struttura `DBPROP` aggiunta al set di proprietà.

*var*<br/>
in Variante utilizzata per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*szValue*<br/>
in Stringa utilizzata per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*bValue*<br/>
in Valore `BYTE` o booleano utilizzato per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*nValue*<br/>
in Valore integer utilizzato per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*fltValue*<br/>
in Valore a virgola mobile utilizzato per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*dblValue*<br/>
in Valore a virgola mobile a precisione doppia utilizzato per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

*cyValue*<br/>
in Valore di valuta CY utilizzato per inizializzare il valore della proprietà per la struttura `DBPROP` aggiunta al set di proprietà.

### <a name="return-value"></a>Valore restituito

**true** se la proprietà è stata aggiunta correttamente. In caso contrario, **false**.

## <a name="cdbpropset"></a>CDBPropSet:: CDBPropSet

Costruttore. Inizializza i campi `rgProperties`, `cProperties`e `guidPropertySet` della struttura [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) .

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet(const GUID& guid);

CDBPropSet(const CDBPropSet& propset);

CDBPropSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per inizializzare il campo `guidPropertySet`.

*propset*<br/>
[in] Altro oggetto `CDBPropSet` per la costruzione di copia.

## <a name="setguid"></a>CDBPropSet:: Seguid

Imposta il campo `guidPropertySet` nella struttura `DBPROPSET`.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID utilizzato per impostare il campo `guidPropertySet` della struttura [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) .

### <a name="remarks"></a>Osservazioni

Questo campo può essere impostato anche dal [Costruttore](../../data/oledb/cdbpropset-cdbpropset.md) .

## <a name="op_equal"></a>CDBPropSet:: operator =

Assegna il contenuto di un set di proprietà a un altro set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet& operator =(CDBPropSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
Struttura [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85))
[struttura DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85))