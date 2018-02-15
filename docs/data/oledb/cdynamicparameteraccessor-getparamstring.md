---
title: 'CDynamicParameterAccessor:: Getparamstring | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicParameterAccessor.GetParamString
- GetParamString
- CDynamicParameterAccessor::GetParamString
- ATL.CDynamicParameterAccessor.GetParamString
- ATL::CDynamicParameterAccessor::GetParamString
dev_langs:
- C++
helpviewer_keywords:
- GetParamString method
ms.assetid: 078c2b1c-7072-47c1-a203-f47e75363f91
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5ee0bb1dce2206902f6ccf1ed331d5c843690ce0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdynamicparameteraccessorgetparamstring"></a>CDynamicParameterAccessor::GetParamString
Recupera i dati string del parametro specificato archiviato nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool GetParamString(DBORDINAL nParam,  
  CSimpleStringA& strOutput) throw();bool GetParamString(DBORDINAL nParam,  
  CSimpleStringW& strOutput) throw();bool GetParamString(DBORDINAL nParam,  
  CHAR* pBuffer,  
   size_t* pMaxLen) throw();bool GetParamString(DBORDINAL nParam,  
  WCHAR* pBuffer,  
   size_t* pMaxLen) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `strOutput`  
 [out] ANSI (**CSimpleStringA**) o Unicode (**CSimpleStringW**) della stringa di dati del parametro specificato. È necessario passare un parametro di tipo `CString`, ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#9](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-getparamstring_1.cpp)]  
  
 `pBuffer`  
 [out] Un puntatore a ANSI (**CHAR**) o Unicode (**WCHAR**) della stringa di dati del parametro specificato.  
  
 `pMaxLen`  
 [out] Un puntatore alla dimensione del buffer a cui puntava `pBuffer` (in caratteri, incluso il carattere di terminazione NULL).  
  
## <a name="remarks"></a>Note  
 Restituisce **true** in caso di esito positivo o **false** in caso di errore.  
  
 Se `pBuffer` è NULL, questo metodo imposterà la dimensione richiesta del buffer in memoria a cui puntata `pMaxLen` e restituire **true** senza copiare i dati.  
  
 Questo metodo avrà esito negativo se il buffer `pBuffer` non è sufficientemente grande da contenere l'intera stringa.  
  
 Utilizzare `GetParamString` per recuperare i dati di parametro stringa dal buffer. Utilizzare [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) per recuperare i dati dei parametri non di tipo stringa dal buffer.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)