---
title: 'CRowsetImpl:: GetColumnInfo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- GetColumnInfo
- CRowsetImpl.GetColumnInfo
- CRowsetImpl::GetColumnInfo
dev_langs: C++
helpviewer_keywords: GetColumnInfo method
ms.assetid: 9ef76525-f996-4c6f-81b9-68eb260350ef
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: acfc7e4afa0036c6f6e66aaef65305fc05ef6d14
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crowsetimplgetcolumninfo"></a>CRowsetImpl::GetColumnInfo
Recupera le informazioni di colonna per una particolare richiesta client.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(  
   T* pv,  
   ULONG* pcCols   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Un puntatore all'utente `CRowsetImpl` classe derivata.  
  
 `pcCols`  
 [in] Un puntatore (output) al numero di colonne restituite.  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a un valore statico **ATLCOLUMNINFO** struttura.  
  
## <a name="remarks"></a>Note  
 Questo metodo è un override avanzato.  
  
 Questo metodo viene chiamato da diverse classi di implementazione di base per recuperare le informazioni di colonna per una particolare richiesta client. In genere, questo metodo viene chiamato dal `IColumnsInfoImpl`. Se si esegue l'override di questo metodo, è necessario inserire una versione del metodo nel `CRowsetImpl`-classe derivata. Poiché il metodo può essere inserito in una classe non è stato creato, è necessario modificare `pv` appropriati `CRowsetImpl`-classe derivata.  
  
 Nell'esempio seguente viene illustrato **del GetColumnInfo** utilizzo. In questo esempio, **CMyRowset** è un `CRowsetImpl`-classe derivata. Per eseguire l'override `GetColumnInfo` per tutte le istanze di questa classe, inserire il seguente metodo nel **CMyRowset** definizione di classe:  
  
 [!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/cpp/crowsetimpl-getcolumninfo_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)