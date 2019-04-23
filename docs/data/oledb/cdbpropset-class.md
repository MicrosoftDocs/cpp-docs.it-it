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
- SetGUID
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
ms.openlocfilehash: b58c0262d361ede37bc3db68784177ec4c29f3a4
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59034248"
---
# <a name="cdbpropset-class"></a>Classe CDBPropSet

Eredita dal `DBPROPSET` strutturare e aggiunge un costruttore che inizializza i campi chiave, nonché `AddProperty` accedere al metodo.

## <a name="syntax"></a>Sintassi

```cpp
class CDBPropSet : public tagDBPROPSET
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddProperty](#addproperty)|Aggiunge una proprietà per il set di proprietà.|
|[CDBPropSet](#cdbpropset)|Costruttore.|
|[SetGUID](#setguid)|Imposta il `guidPropertySet` campo il `DBPROPSET` struttura.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator =](#op_equal)|Assegna il contenuto di una proprietà impostata su un altro.|

## <a name="remarks"></a>Note

Uso di consumer e provider OLE DB `DBPROPSET` per passare le matrici di strutture `DBPROP` strutture. Ogni `DBPROP` struttura rappresenta una singola proprietà che è possibile impostare.

## <a name="addproperty"></a> CDBPropSet::

Aggiunge una proprietà per il set di proprietà.

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
[in] L'ID della proprietà da aggiungere. Consente di inizializzare il `dwPropertyID` del `DBPROP` struttura aggiunto al set di proprietà.

*var*<br/>
[in] Una variante usata per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*szValue*<br/>
[in] Stringa utilizzata per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*bValue*<br/>
[in] Oggetto `BYTE` o un valore booleano utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*nValue*<br/>
[in] Valore intero utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*fltValue*<br/>
[in] Valore a virgola mobile utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*dblValue*<br/>
[in] Valore a virgola mobile a precisione doppia che consente di inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

*cyValue*<br/>
[in] Valore di valuta CY utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.

### <a name="return-value"></a>Valore restituito

**true** se la proprietà è stata aggiunta correttamente. In caso contrario, **false**.

## <a name="cdbpropset"></a> CDBPropSet:: CDBPropSet

Costruttore. Inizializza la `rgProperties`, `cProperties`, e `guidPropertySet` campi del [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) struttura.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet(const GUID& guid);

CDBPropSet(const CDBPropSet& propset);

CDBPropSet();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
[in] GUID utilizzato per inizializzare il `guidPropertySet` campo.

*propset*<br/>
[in] Altro oggetto `CDBPropSet` per la costruzione di copia.

## <a name="setguid"></a> CDBPropSet:: SetGuid

Imposta il `guidPropertySet` campo il `DBPROPSET` struttura.

### <a name="syntax"></a>Sintassi

```cpp
void SetGUID(const GUID& guid) throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
[in] GUID utilizzato per impostare il `guidPropertySet` campo il [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) struttura.

### <a name="remarks"></a>Note

Questo campo può essere impostato il [costruttore](../../data/oledb/cdbpropset-cdbpropset.md) anche.

## <a name="op_equal"></a> CDBPropSet:: operator =

Assegna il contenuto di un set di proprietà a un altro set di proprietà.

### <a name="syntax"></a>Sintassi

```cpp
CDBPropSet& operator =(CDBPropSet& propset) throw();
```

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
[Struttura DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85))
[struttura DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85))