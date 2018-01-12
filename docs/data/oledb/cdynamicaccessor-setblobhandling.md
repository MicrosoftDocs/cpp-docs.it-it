---
title: 'CDynamicAccessor:: Setblobhandling | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicAccessor::SetBlobHandling
- CDynamicAccessor.SetBlobHandling
- ATL::CDynamicAccessor::SetBlobHandling
- SetBlobHandling
- ATL.CDynamicAccessor.SetBlobHandling
dev_langs: C++
helpviewer_keywords: SetBlobHandling method
ms.assetid: fa8b0bb3-a21b-4d64-aeef-e79bf61d079c
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 02b9be4b187f55d9bfb8f3ee5e572f682742f538
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicaccessorsetblobhandling"></a>CDynamicAccessor::SetBlobHandling
Imposta il BLOB di gestione di valore per la riga corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      bool SetBlobHandling(  
   DBBLOBHANDLINGENUM eBlobHandling   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `eBlobHandling`  
 Specifica la modalità di gestione dei dati BLOB. Può accettare i valori seguenti:  
  
-   **DBBLOBHANDLING_DEFAULT**: gestire i dati di colonna più grandi `nBlobSize` (come impostato dalla `SetBlobSizeLimit`) come BLOB di dati e recuperare tramite una `ISequentialStream` o `IStream` oggetto. Questa opzione tenterà di associare ogni colonna che contiene dati più grandi `nBlobSize` o elencato come **DBTYPE_IUNKNOWN** come dati BLOB.  
  
-   **DBBLOBHANDLING_NOSTREAMS**: gestire i dati di colonna più grandi `nBlobSize` (secondo l'impostazione `SetBlobSizeLimit`) come BLOB di dati e recuperarlo mediante riferimento nella memoria allocata al provider, consumer di proprietà. Questa opzione è utile per le tabelle con più di una colonna BLOB e il provider supporta solo un `ISequentialStream` oggetto per ogni funzione di accesso.  
  
-   **DBBLOBHANDLING_SKIP**: Skip (non associare) risultanti come BLOB contenente colonne (la funzione di accesso non associare o recuperare il valore della colonna, ma consente ancora di recuperare lo stato di colonna e una lunghezza).  
  
## <a name="remarks"></a>Note  
 È necessario chiamare `SetBlobHandling` prima di chiamare **aprire**.  
  
 Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta il BLOB di gestione di valore a **DBBLOBHANDLING_DEFAULT**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)