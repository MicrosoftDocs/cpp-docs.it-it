---
title: Classe CDBPropIDSet | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CDBPropIDSet class
- AddPropertyID method
- CDBPropIDSet class, constructor
- operator =, property sets
- = operator, with OLE DB templates
- operator=, property sets
- SetGUID method
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 514a013cf3f327c0c73ca8469900693d6a4e5e21
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49084035"
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

Usare i consumer OLE DB `DBPROPIDSET` strutture per passare una matrice di ID proprietà per il quale l'utente vuole ottenere informazioni sulle proprietà. Le proprietà identificate in un'unica [DBPROPIDSET](/previous-versions/windows/desktop/ms717981) struttura appartengono al set di una proprietà.  

## <a name="addpropertyid"></a> Cdbpropidset:: Addpropertyid

Aggiunge un ID proprietà al set di ID proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
bool AddPropertyID(DBPROPID propid) throw();  
```  
  
#### <a name="parameters"></a>Parametri  

*PropID*<br/>
[in] ID proprietà da aggiungere al set di ID proprietà.  

## <a name="cdbpropidset"></a> Cdbpropidset:: Cdbpropidset

Costruttore. Inizializza la `rgProperties`, `cProperties`e (facoltativamente) `guidPropertySet` campi del [DBPROPIDSET](/previous-versions/windows/desktop/ms717981) struttura.  
  
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
[in] GUID utilizzato per impostare il `guidPropertySet` campo il [DBPROPIDSET](/previous-versions/windows/desktop/ms717981) struttura.  
  
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