---
title: 'CDynamicParameterAccessor:: Getparamlength | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDynamicParameterAccessor::GetParamLength
- ATL.CDynamicParameterAccessor.GetParamLength
- CDynamicParameterAccessor.GetParamLength
- CDynamicParameterAccessor::GetParamLength
- GetParamLength
dev_langs: C++
helpviewer_keywords: GetParamLength method
ms.assetid: 04d76931-911a-4915-9c2c-ad585a9f3854
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 765e46cb0697f9cf230211b233d93556e661aa54
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdynamicparameteraccessorgetparamlength"></a>CDynamicParameterAccessor::GetParamLength
Recupera la lunghezza del parametro specificato archiviato nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      bool GetParamLength(  
   DBORDINAL nParam,  
   DBLENGTH* pLength  
);  
DBLENGTH* GetParamLength(   
   DBORDINAL nParam    
) const throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pLength`  
 [out] Puntatore alla variabile contenente la lunghezza in byte del parametro specificato.  
  
## <a name="remarks"></a>Note  
 Il primo override restituisce **true** in caso di esito positivo o **false** in caso di errore. Il secondo override punta alla memoria che contiene la lunghezza del parametro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)