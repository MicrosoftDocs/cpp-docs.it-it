---
title: Classe IOpenRowsetImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IOpenRowsetImpl
- IOpenRowsetImpl.CreateRowset
- IOpenRowsetImpl::CreateRowset
- CreateRowset
- OpenRowset
- IOpenRowsetImpl::OpenRowset
- IOpenRowsetImpl.OpenRowset
dev_langs:
- C++
helpviewer_keywords:
- IOpenRowsetImpl class
- CreateRowset method
- OpenRowset method
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dd3281aa21cfd20caa902572e9ad39e16a18e6f6
ms.sourcegitcommit: b0d6777cf4b580d093eaf6104d80a888706e7578
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2018
ms.locfileid: "39269826"
---
# <a name="iopenrowsetimpl-class"></a>Classe IOpenRowsetImpl
Fornisce l'implementazione per il `IOpenRowset` interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class SessionClass>  
class IOpenRowsetImpl : public IOpenRowset  
```  
  
### <a name="parameters"></a>Parametri  
 *SessionClass*  
 La classe, derivata da `IOpenRowsetImpl`.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CreateRowset](#createrowset)|Crea un oggetto set di righe. Non chiamato direttamente dall'utente.|  
|[OpenRowset](#openrowset)|Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice. (Non in ATLDB. H)|  
  
## <a name="remarks"></a>Note  
 Il [IOpenRowset](https://msdn.microsoft.com/library/ms716946.aspx) interfaccia è obbligatoria per un oggetto di sessione. Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice.  
  
## <a name="createrowset"></a> Iopenrowsetimpl:: CreateRowset
Crea un oggetto set di righe. Non chiamato direttamente dall'utente. Visualizzare [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/library/ms716724.aspx) nel *riferimento per programmatori OLE DB.*  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      template template <class RowsetClass  
      >  
HRESULT CreateRowset(IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset,  
   RowsetClass*& pRowsetObj);  
```  
  
#### <a name="parameters"></a>Parametri  
 *RowsetClass*  
 Un membro della classe modello che rappresenta la classe dell'utente del set di righe. In genere generato dalla procedura guidata.  
  
 *pRowsetObj*  
 [out] Un puntatore a un oggetto set di righe. In genere non viene usato questo parametro, ma può essere utilizzato se è necessario eseguire altre operazioni sul set di righe prima di passarlo a un oggetto COM. La durata del *pRowsetObj* associato da *ppRowset*.  
  
 Per altri parametri, vedere [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/library/ms716724.aspx) nel *riferimento per programmatori OLE DB.*  

## <a name="openrowset"></a> Iopenrowsetimpl:: OPENROWSET
Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT OpenRowset(IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/library/ms716724.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  
 Questo metodo non viene trovato in ATLDB. H. Viene creato dalla creazione guidata oggetto ATL quando si crea un provider.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
