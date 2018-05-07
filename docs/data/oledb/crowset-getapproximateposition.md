---
title: 'CRowset:: Getapproximateposition | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CRowset::GetApproximatePosition
- ATL::CRowset<TAccessor>::GetApproximatePosition
- CRowset.GetApproximatePosition
- CRowset::GetApproximatePosition
- GetApproximatePosition
- ATL.CRowset.GetApproximatePosition
- CRowset<TAccessor>::GetApproximatePosition
dev_langs:
- C++
helpviewer_keywords:
- GetApproximatePosition method
ms.assetid: 8f9ccd41-0590-468e-b202-6731d0f99d21
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 882d35fae9e352c99a534dc634f105a9b9a35664
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="crowsetgetapproximateposition"></a>CRowset::GetApproximatePosition
Restituisce la posizione approssimativa di una riga corrispondente a un segnalibro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetApproximatePosition(const CBookmarkBase* pBookmark,   
   DBCOUNTITEM* pPosition,   
   DBCOUNTITEM* pcRows) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `pBookmark`  
 [in] Un puntatore a un segnalibro che identifica la riga la cui posizione è necessario trovare. **NULL** se solo il conteggio delle righe è obbligatorio.  
  
 *pPosition*  
 [out] Un puntatore alla posizione in cui `GetApproximatePosition` restituisce la posizione della riga. **NULL** se la posizione non è obbligatoria.  
  
 `pcRows`  
 [out] Un puntatore alla posizione in cui `GetApproximatePosition` restituisce il numero totale di righe. **NULL** se il conteggio delle righe non è necessario.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetScroll`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetScroll** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
 Per informazioni sull'utilizzo di segnalibri degli utenti, vedere [mediante segnalibri](../../data/oledb/using-bookmarks.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [IRowsetScroll::GetApproximatePosition](https://msdn.microsoft.com/en-us/library/ms712901.aspx)