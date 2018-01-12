---
title: 'Iopenrowsetimpl:: CreateRowset | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IOpenRowsetImpl.CreateRowset
- IOpenRowsetImpl::CreateRowset
- CreateRowset
dev_langs: C++
helpviewer_keywords: CreateRowset method
ms.assetid: 69041cf6-7a2f-4409-a26e-6e984c24986e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ada7e23a3ff48ea9b97263c8fa94a7970185f7a5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iopenrowsetimplcreaterowset"></a>IOpenRowsetImpl::CreateRowset
Crea un oggetto set di righe. Non è chiamato direttamente dall'utente. Vedere [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/en-us/library/ms716724.aspx) nel *di riferimento per programmatori OLE DB.*  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      template <class   
      RowsetClass  
      >  
HRESULT CreateRowset(  
   IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset,  
   RowsetClass*& pRowsetObj   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `RowsetClass`  
 Un membro della classe modello che rappresenta la classe di rowset dell'utente. In genere generato dalla procedura guidata.  
  
 `pRowsetObj`  
 [out] Un puntatore a un oggetto set di righe. Questo parametro non viene in genere usato, ma può essere utilizzato se è necessario eseguire più operazioni nel set di righe prima di passarlo a un oggetto COM. La durata di `pRowsetObj` è associato a `ppRowset`.  
  
 Per altri parametri, vedere [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/en-us/library/ms716724.aspx) nel *riferimento per programmatori OLE DB.*  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)