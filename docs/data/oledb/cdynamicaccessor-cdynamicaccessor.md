---
title: CDynamicAccessor::CDynamicAccessor | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDynamicAccessor::CDynamicAccessor
- ATL::CDynamicAccessor::CDynamicAccessor
- ATL.CDynamicAccessor.CDynamicAccessor
- CDynamicAccessor.CDynamicAccessor
dev_langs:
- C++
helpviewer_keywords:
- CDynamicAccessor class, constructor
ms.assetid: bf40fe81-2c85-473e-9075-51ad9b060b39
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4d660b3e7fa537e7abd3ea2b713e5b4f7a0ce798
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cdynamicaccessorcdynamicaccessor"></a>CDynamicAccessor::CDynamicAccessor
Crea e inizializza il `CDynamicAccessor` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      CDynamicAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000);  
```  
  
#### <a name="parameters"></a>Parametri  
 `eBlobHandling`  
 Specifica la modalità di gestione dati per oggetti binari di grandi dimensioni (BLOB). Il valore predefinito è **DBBLOBHANDLING_DEFAULT**. Vedere [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) per una descrizione del **DBBLOBHANDLINGENUM** valori.  
  
 `nBlobSize`  
 Le dimensioni BLOB massime in byte. dati della colonna su questo valore viene considerati come un BLOB. Il valore predefinito è 8.000. Vedere [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) per informazioni dettagliate.  
  
## <a name="remarks"></a>Note  
 Se si utilizza il costruttore per inizializzare il `CDynamicAccessor` dell'oggetto, è possibile specificare la modalità che consente l'associazione BLOB. BLOB possono contenere dati binari, ad esempio immagini, audio e codice compilato. Il comportamento predefinito consiste nel considerare colonne maggiori di 8.000 byte come BLOB e si tenta di associarle a un `ISequentialStream` oggetto. Tuttavia, è possibile specificare un valore diverso per la dimensione del BLOB.  
  
 È inoltre possibile specificare come `CDynamicAccessor` gestisce i dati delle colonne con dati BLOB: può gestire dati BLOB in modo predefinito, è possibile ignorare (non associato) dei dati BLOB; o possibile associare i dati BLOB in memoria allocata al provider.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)