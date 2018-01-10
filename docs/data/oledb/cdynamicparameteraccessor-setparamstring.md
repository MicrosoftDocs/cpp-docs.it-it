---
title: 'CDynamicParameterAccessor:: Setparamstring | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDynamicParameterAccessor.SetParamString
- ATL::CDynamicParameterAccessor::SetParamString
- SetParamString
- CDynamicParameterAccessor::SetParamString
- CDynamicParameterAccessor.SetParamString
dev_langs: C++
helpviewer_keywords: SetParamString method
ms.assetid: 77a38d23-7e33-4e5a-bda6-c12c4c3fe2e4
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 75d6e9887b609349a092bb67e55508ca1429387b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicparameteraccessorsetparamstring"></a>CDynamicParameterAccessor::SetParamString
Imposta i dati string del parametro specificato archiviato nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      bool SetParamString(   
   DBORDINAL nParam,   
   const CHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK    
) throw( );  
bool SetParamString(   
   DBORDINAL nParam,   
   const WCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK    
) throw( );  
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
  
 `SetParamString`avrà esito negativo se si tenta di impostare una stringa di dimensioni maggiore rispetto alla dimensione massima specificata per `pString`.  
  
 Utilizzare `SetParamString` per impostare i dati di parametro di stringa nel buffer. Utilizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per impostare i dati dei parametri non di tipo stringa nel buffer.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)