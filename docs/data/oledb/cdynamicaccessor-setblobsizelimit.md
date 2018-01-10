---
title: 'CDynamicAccessor:: Setblobsizelimit | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicAccessor::SetBlobSizeLimit
- SetBlobSizeLimit
- CDynamicAccessor.SetBlobSizeLimit
- ATL.CDynamicAccessor.SetBlobSizeLimit
- ATL::CDynamicAccessor::SetBlobSizeLimit
dev_langs: C++
helpviewer_keywords: SetBlobSizeLimit method
ms.assetid: fb8cb85d-f841-408e-a344-37895b10993f
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e5d683c06283c82e6117893e44def41d09300da0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicaccessorsetblobsizelimit"></a>CDynamicAccessor::SetBlobSizeLimit
Imposta le dimensioni BLOB massime in byte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void SetBlobSizeLimit(  
   DBLENGTH nBlobSize   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `nBlobSize`  
 Specifica il limite di dimensioni BLOB.  
  
## <a name="remarks"></a>Note  
 Imposta le dimensioni BLOB massime in byte. dati della colonna superiori a questo valore viene considerati come un BLOB. Alcuni provider forniscono notevoli dimensioni per le colonne (ad esempio, 2 GB). Anziché il tentativo di allocare memoria per una colonna di questa dimensione, in genere si provano a associare tali colonne come BLOB. In questo modo non è necessario allocare tutta la memoria, ma è comunque possibile leggere tutti i dati senza timore di troncamento. Tuttavia, esistono alcuni casi in cui è possibile forzare `CDynamicAccessor` per associare le colonne di grandi dimensioni in tipi di dati nativi. A tale scopo, chiamare `SetBlobSizeLimit` prima di chiamare **aprire**.  
  
 Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta le dimensioni BLOB massime per un valore predefinito di 8.000 byte.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)