---
title: Classe CEnumerator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CEnumerator
- CEnumerator::Find
- ATL::CEnumerator::Find
- ATL.CEnumerator.Find
- CEnumerator.Find
- GetMoniker
- CEnumerator.GetMoniker
- CEnumerator::GetMoniker
- ATL.CEnumerator.GetMoniker
- ATL::CEnumerator::GetMoniker
- ATL.CEnumerator.Open
- CEnumerator::Open
- ATL::CEnumerator::Open
- CEnumerator.Open
dev_langs:
- C++
helpviewer_keywords:
- CEnumerator class
- Find method
- GetMoniker method
- Open method
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9f8af45082f8b861b177c4e214a69e9b15799dd7
ms.sourcegitcommit: b217daee32d3413cf33753d9b4dc35a0022b1bfa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2018
ms.locfileid: "39233373"
---
# <a name="cenumerator-class"></a>Classe CEnumerator
Usa un oggetto enumeratore OLE DB, che espone il [ISourcesRowset](https://msdn.microsoft.com/library/ms715969.aspx) interfaccia da restituire un set di righe che descrivono tutte le origini dati e gli enumeratori.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli. h
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[trovare](#find)|Esegue una ricerca attraverso i provider disponibili (origini dati) per cercare un elemento con il nome specificato.|  
|[GetMoniker](#getmoniker)|Recupera l'interfaccia `IMoniker` per il record corrente.|  
|[Apri](#open)|Apre l'enumeratore.|  
  
## <a name="remarks"></a>Note  
 È possibile recuperare il `ISourcesRowset` dati indirettamente da questa classe.  

## <a name="find"></a> CEnumerator:: Find
Cerca un nome specificato tra i provider disponibili.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      bool Find(TCHAR* szSearchName) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *szSearchName*  
 [in] Nome da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il nome è stato trovato. In caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Questo nome viene eseguito il mapping per il `SOURCES_NAME` membro del [ISourcesRowset](https://msdn.microsoft.com/library/ms715969.aspx) interfaccia.  
  
## <a name="getmoniker"></a> CEnumerator:: GetMoniker
Analizza il nome visualizzato per estrarre il componente della stringa che può essere convertito in moniker.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetMoniker(LPMONIKER* ppMoniker) const throw();  


HRESULT GetMoniker(LPMONIKER* ppMoniker,   
   LPCTSTR lpszDisplayName) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *ppMoniker*  
 [out] Il moniker analizzato dal nome visualizzato ([cenumeratoraccessor:: M_szparsename](../../data/oledb/cenumeratoraccessor-m-szparsename.md)) della riga corrente.  
  
 *lpszDisplayName*  
 [in] Il nome visualizzato da analizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="open"></a> CEnumerator:: Open
Associa il moniker per l'enumeratore, se uno è specificato, quindi recupera il set di righe per l'enumeratore chiamando [ISourcesRowset:: GetSourcesRowset](https://msdn.microsoft.com/library/ms711200.aspx).  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(LPMONIKER pMoniker) throw();  


HRESULT Open(const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR) throw();  


HRESULT Open(const CEnumerator& enumerator) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pMoniker*  
 [in] Puntatore a un moniker per l'enumeratore.  
  
 *pClsid*  
 [in] Un puntatore al `CLSID` dell'enumeratore.  
  
 *enumerator*  
 [in] Un riferimento a un enumeratore.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)