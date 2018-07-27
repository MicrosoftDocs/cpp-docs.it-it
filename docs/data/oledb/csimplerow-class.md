---
title: Classe CSimpleRow | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CSimpleRow
- ATL::CSimpleRow
- ATL.CSimpleRow
- CSimpleRow::AddRefRow
- AddRefRow
- ATL.CSimpleRow.AddRefRow
- ATL::CSimpleRow::AddRefRow
- CSimpleRow.AddRefRow
- CSimpleRow.Compare
- CSimpleRow::Compare
- CSimpleRow
- ATL::CSimpleRow::CSimpleRow
- CSimpleRow.CSimpleRow
- ATL.CSimpleRow.CSimpleRow
- CSimpleRow::CSimpleRow
- ATL::CSimpleRow::ReleaseRow
- CSimpleRow::ReleaseRow
- ReleaseRow
- CSimpleRow.ReleaseRow
- ATL.CSimpleRow.ReleaseRow
- CSimpleRow.m_dwRef
- CSimpleRow::m_dwRef
- CSimpleRow::m_iRowset
- CSimpleRow.m_iRowset
dev_langs:
- C++
helpviewer_keywords:
- CSimpleRow class
- AddRefRow method
- Compare method
- CSimpleRow class, constructor
- ReleaseRow method
- m_dwRef
- m_iRowset
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7f37390b4ab5db4cb3b519c801052c4b02102af6
ms.sourcegitcommit: b0d6777cf4b580d093eaf6104d80a888706e7578
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2018
ms.locfileid: "39269796"
---
# <a name="csimplerow-class"></a>Classe CSimpleRow
Fornisce un'implementazione predefinita per l'handle di riga, che viene utilizzata per la [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) classe.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CSimpleRow  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  

## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRow](#addrefrow)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|  
|[Compare](#compare)|Confronta due righe per determinare se fanno riferimento alla stessa istanza di riga.|  
|[CSimpleRow](#csimplerow)|Costruttore.|  
|[ReleaseRow](#releaserow)|Rilascia le righe.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwRef](#dwref)|Conteggio dei riferimenti a un handle di riga esistente.|  
|[m_iRowset](#irowset)|Un indice al set di righe che rappresenta il cursore.|  
  
## <a name="remarks"></a>Note  
 Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` Crea un nuovo `CSimpleRow` per tutte le righe richiesti nel [IRowsetImpl:: GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md). `CSimpleRow` possono anche essere sostituite con la propria implementazione dell'handle di riga, perché è un argomento di modello predefinito per `IRowsetImpl`. L'unico requisito per la sostituzione di questa classe consiste nel disporre la classe sostitutiva di fornire un costruttore che accetta un solo parametro di tipo **lungo**.  

## <a name="addrefrow"></a> Csimplerow:: Addrefrow
Aggiunge un conteggio dei riferimenti a un handle di riga esistente in modo thread-safe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
DWORD AddRefRow();  
  
```  

## <a name="compare"></a> Csimplerow:: compare
Confronta due righe per determinare se fanno riferimento alla stessa istanza di riga.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Compare(CSimpleRow* pRow);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pRow*  
 Un puntatore a un `CSimpleRow` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Valore HRESULT, in genere S_OK, che indica le due righe rappresentano la stessa istanza di riga o S_FALSE, che indica le due righe sono diverse. Visualizzare [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) nel *riferimento per programmatori OLE DB* per altri possibili valori restituiti. 

## <a name="csimplerow"></a> Csimplerow:: Csimplerow
Costruttore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      CSimpleRow(DBCOUNTITEM iRowsetCur);  
```  
  
#### <a name="parameters"></a>Parametri  
 *iRowsetCur*  
 [in] Indice al set di righe corrente.  
  
### <a name="remarks"></a>Note  
 Set [m_iRowset](../../data/oledb/csimplerow-m-irowset.md) al *iRowsetCur*. 

## <a name="releaserow"></a> Csimplerow:: Releaserow
Rilascia le righe in modo thread-safe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
DWORD ReleaseRow();  
  
```  

## <a name="dwref"></a> Csimplerow:: M_dwref
Conteggio dei riferimenti a un handle di riga esistente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
DWORD m_dwRef;  
  
```  

## <a name="irowset"></a> Csimplerow:: M_irowset
Indice al set di righe che rappresenta il cursore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
KeyType m_iRowset;  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)
