---
title: 'CDynamicParameterAccessor:: GetParam | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicParameterAccessor::GetParam
- ATL.CDynamicParameterAccessor.GetParam
- CDynamicParameterAccessor::GetParam<ctype>
- CDynamicParameterAccessor.GetParam
- GetParam
- ATL::CDynamicParameterAccessor::GetParam<ctype>
- ATL::CDynamicParameterAccessor::GetParam
dev_langs:
- C++
helpviewer_keywords:
- GetParam method
ms.assetid: 893a6bf8-7b55-4f6d-8a10-a43b13be7f56
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3596cf8fc445a5607c008be687c44cafb713049b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdynamicparameteraccessorgetparam"></a>CDynamicParameterAccessor::GetParam
Recupera i dati non di tipo stringa per un parametro specificato dal buffer del parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
template <class ctype>bool GetParam(DBORDINAL nParam,   
  ctype* pData) const throw();  

template <class ctype> bool GetParam(TCHAR* pParamName,   
   ctype* pData) const throw();  

void* GetParam(DBORDINAL nParam) const throw();  

void* GetParam(TCHAR* pParamName) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `ctype`  
 Un parametro basato su modelli che è il tipo di dati.  
  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pParamName`  
 [in] Il nome del parametro.  
  
 `pData`  
 [out] Puntatore alla memoria contenente i dati recuperati dal buffer.  
  
## <a name="return-value"></a>Valore restituito  
 Per le versioni non basata su modelli, punta alla memoria contenente i dati recuperati dal buffer. Per le versioni basate su modelli, restituisce **true** in caso di esito positivo o **false** in caso di errore.  
  
 Utilizzare `GetParam` per recuperare i dati dei parametri non di tipo stringa dal buffer. Utilizzare [GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md) per recuperare i dati di parametro stringa dal buffer.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)