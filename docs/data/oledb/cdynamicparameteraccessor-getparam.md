---
title: CDynamicParameterAccessor::GetParam | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a54da47714be4f0230145b3aa5d8b66df44e3679
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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