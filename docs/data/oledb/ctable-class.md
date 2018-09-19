---
title: Classe CTable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CTable
- ATL.CTable
- CTable
- ATL.CTable.Open
- ATL::CTable::Open
- CTable::Open
- CTable.Open
dev_langs:
- C++
helpviewer_keywords:
- CTable class
- Open method
ms.assetid: f13fdaa3-e198-4557-977d-54b0bbc3454d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c94152a9322b64acafe91e1fb0eb34ab82aa2902
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081299"
---
# <a name="ctable-class"></a>Classe CTable

Fornisce un mezzo per accedere direttamente a un rowset semplice (uno senza parametri).  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor, 
            template <typename T> class TRowset = CRowset>  
class CTable :  
   public CAccessorRowset <TAccessor, TRowset>  
```  
  
### <a name="parameters"></a>Parametri  

*TAccessor*<br/>
Una classe di funzione di accesso.  
  
*TRowset*<br/>
Una classe di set di righe.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Apri](#open)|Apre la tabella.|  
  
## <a name="remarks"></a>Note  

Visualizzare [CCommand](../../data/oledb/ccommand-class.md) per informazioni su come eseguire un comando per accedere a un set di righe.  

## <a name="open"></a> CTable:: Open

Apre la tabella.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(const CSession& session,  
   LPCWSTR wszTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  

HRESULT Open(const CSession& session,  
   LPCSTR szTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  

HRESULT Open(const CSession& session,  
   DBID& dbid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  

*Sessione*<br/>
[in] Per il quale la tabella verrà aperta la sessione.  
  
*wszTableName*<br/>
[in] Il nome della tabella da aprire, passato come stringa Unicode.  
  
*szTableName*<br/>
[in] Il nome della tabella da aprire, passati come una stringa ANSI.  
  
*dbid*<br/>
[in] Il `DBID` della tabella da aprire.  
  
*pPropSet*<br/>
[in] Un puntatore a una matrice di [DBPROPSET](/previous-versions/windows/desktop/ms714367\(v=vs.85\)) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](/previous-versions/windows/desktop/ms713696\(v=vs.85\)) nel *riferimento per programmatori OLE DB* in Windows SDK. Il valore predefinito NULL non specifica alcuna proprietà.  
  
*ulPropSets*<br/>
[in] Il numero di [DBPROPSET](/previous-versions/windows/desktop/ms714367\(v=vs.85\)) strutture passato il *pPropSet* argomento.  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  

Per altre informazioni, vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   