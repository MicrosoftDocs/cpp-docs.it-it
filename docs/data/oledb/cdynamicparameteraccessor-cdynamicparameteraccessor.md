---
title: 'CDynamicParameterAccessor:: CDynamicParameterAccessor | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicParameterAccessor::CDynamicParameterAccessor
- CDynamicParameterAccessor.CDynamicParameterAccessor
dev_langs:
- C++
helpviewer_keywords:
- CDynamicParameterAccessor class, constructor
- CDynamicParameterAccessor method
ms.assetid: a1cce5e4-dfb9-43a2-bfb8-0435c653674a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 52ffd2f16211ae25bf1069ad1860dc273c1d5002
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098394"
---
# <a name="cdynamicparameteraccessorcdynamicparameteraccessor"></a>CDynamicParameterAccessor::CDynamicParameterAccessor
Costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      typedef CDynamicParameterAccessor _ParamClass;  
CDynamicParameterAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000 )   
   : CDynamicAccessor(eBlobHandling, nBlobSize )  
```  
  
#### <a name="parameters"></a>Parametri  
 `eBlobHandling`  
 Specifica la modalità di gestione dei dati BLOB. Il valore predefinito è **DBBLOBHANDLING_DEFAULT**. Vedere [CDynamicAccessor:: Setblobhandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) per una descrizione del **DBBLOBHANDLINGENUM** valori.  
  
 `nBlobSize`  
 Le dimensioni BLOB massime in byte. dati della colonna su questo valore viene considerati come un BLOB. Il valore predefinito è 8.000. Vedere [CDynamicAccessor:: Setblobsizelimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) per informazioni dettagliate.  
  
## <a name="remarks"></a>Note  
 Vedere il [CDynamicAccessor:: CDynamicAccessor](../../data/oledb/cdynamicaccessor-cdynamicaccessor.md) costruttore per ulteriori informazioni sulla gestione di BLOB.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)