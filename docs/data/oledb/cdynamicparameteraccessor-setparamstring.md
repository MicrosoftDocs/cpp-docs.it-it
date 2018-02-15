---
title: 'CDynamicParameterAccessor:: Setparamstring | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDynamicParameterAccessor.SetParamString
- ATL::CDynamicParameterAccessor::SetParamString
- SetParamString
- CDynamicParameterAccessor::SetParamString
- CDynamicParameterAccessor.SetParamString
dev_langs:
- C++
helpviewer_keywords:
- SetParamString method
ms.assetid: 77a38d23-7e33-4e5a-bda6-c12c4c3fe2e4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a0630f7ee591dccc5c9e3cb5b84ae5387bd4c9a2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdynamicparameteraccessorsetparamstring"></a>CDynamicParameterAccessor::SetParamString
Imposta i dati string del parametro specificato archiviato nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool SetParamString(DBORDINAL nParam,   
   constCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK) throw();bool SetParamString(DBORDINAL nParam,   
   constWCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pString`  
 [in] Un puntatore a ANSI (**CHAR**) o Unicode (**WCHAR**) della stringa di dati del parametro specificato. Vedere `DBSTATUS` in OleDb.  
  
 *status*  
 [in] Il `DBSTATUS` lo stato del parametro specificato. Per informazioni su `DBSTATUS` valori, vedere [stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) nel *riferimento per programmatori OLE DB*, o cercare `DBSTATUS` in OleDb.  
  
## <a name="remarks"></a>Note  
 Restituisce **true** in caso di esito positivo o **false** in caso di errore.  
  
 `SetParamString` avrà esito negativo se si tenta di impostare una stringa di dimensioni maggiore rispetto alla dimensione massima specificata per `pString`.  
  
 Utilizzare `SetParamString` per impostare i dati di parametro di stringa nel buffer. Utilizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per impostare i dati dei parametri non di tipo stringa nel buffer.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)